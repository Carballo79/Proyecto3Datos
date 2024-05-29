#pragma once
#include "Proyecto3.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Utilidades.h"

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaComprarInventario
	/// </summary>
	public ref class VentanaComprarInventario : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		VentanaComprarInventario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		VentanaComprarInventario(Form^ ventana)
		{
			ventana2 = ventana;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaComprarInventario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnComprar;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ codInventario;
	private: System::Windows::Forms::TextBox^ Cantidad;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->codInventario = (gcnew System::Windows::Forms::TextBox());
			this->Cantidad = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnComprar
			// 
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprar->Location = System::Drawing::Point(134, 99);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(121, 31);
			this->btnComprar->TabIndex = 0;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->UseVisualStyleBackColor = true;
			this->btnComprar->Click += gcnew System::EventHandler(this, &VentanaComprarInventario::btnComprar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inventario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cantidad:";
			// 
			// codInventario
			// 
			this->codInventario->Location = System::Drawing::Point(170, 14);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(150, 20);
			this->codInventario->TabIndex = 3;
			// 
			// Cantidad
			// 
			this->Cantidad->Location = System::Drawing::Point(170, 62);
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Size = System::Drawing::Size(150, 20);
			this->Cantidad->TabIndex = 4;
			// 
			// VentanaComprarInventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 142);
			this->Controls->Add(this->Cantidad);
			this->Controls->Add(this->codInventario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnComprar);
			this->Name = L"VentanaComprarInventario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaComprarInventario";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaComprarInventario::VentanaComprarInventario_FormClosing);
			this->Load += gcnew System::EventHandler(this, &VentanaComprarInventario::VentanaComprarInventario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(this->codInventario->Text) && !String::IsNullOrEmpty(this->Cantidad->Text)) {
		if (inventariosB->existeNodo(msclr::interop::marshal_as<string>(this->codInventario->Text))) {
			string codInventarioStr = msclr::interop::marshal_as<string>(this->codInventario->Text);
			string cantidadMe = msclr::interop::marshal_as<string>(this->Cantidad->Text);

			string nombre = obtenerDato(inventariosB->buscarNodo(inventariosB->raiz, codInventarioStr)->dato, 4);
			string cantidadStr = intAString(stringAInt(msclr::interop::marshal_as<string>(this->Cantidad->Text)) +
				stringAInt(obtenerDato(inventariosB->buscarNodo(inventariosB->raiz, codInventarioStr)->dato, 5)));
			string codCanasta = obtenerDato(inventariosB->buscarNodo(inventariosB->raiz, codInventarioStr)->dato, 6);

			string nuevodato = nombre + "; " + cantidadStr + "; " + codCanasta;
			inventariosB->modificarNodo(codInventarioStr, nuevodato);

			String^ cantidadMess = msclr::interop::marshal_as<String^>(cantidadMe);
			String^ inventarioMess = msclr::interop::marshal_as<String^>(codInventarioStr);

			MessageBox::Show("Se a comprado " + cantidadMess +" unidades para el inventario: " + inventarioMess, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
			ventana2->Show();
		}
		else {
			MessageBox::Show("Inventario no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	else {
		MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
			
private: System::Void VentanaComprarInventario_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
private: System::Void VentanaComprarInventario_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
