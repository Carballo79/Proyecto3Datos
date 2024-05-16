#pragma once

#include "VentanaSupermercado.h"
#include "ArbolBB.h"
#include "ArbolAVL.h"
#include "ArbolRN.h"
#include "ArbolAA.h"
#include "ArbolB.h"

#include <msclr/marshal_cppstd.h>

namespace Proyecto3 {
	ArbolBB pasillos, ciudades;
	ArbolAVL productos;
	ArbolRN marcas;
	ArbolAA inventarios;
	ArbolB clientes, admins, vendedores;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaPrincipal
	/// </summary>
	public ref class VentanaPrincipal : public System::Windows::Forms::Form
	{
	public:
		VentanaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			pasillos.crearPasillos();
			productos.crearProductos(pasillos);
			marcas.crearMarcas(pasillos, productos);
			inventarios.crearInventarios(pasillos, productos, marcas);
			ciudades.crearCiudades();
			clientes.crearClientes(ciudades);
			admins.crearAdmins(ciudades);
			vendedores.crearVendedores();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ stringCedula;































	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ btnAdmin;
	private: System::Windows::Forms::RadioButton^ btnCliente;
	private: System::Windows::Forms::RadioButton^ btnVendedor;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ mensaje;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->stringCedula = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAdmin = (gcnew System::Windows::Forms::RadioButton());
			this->btnCliente = (gcnew System::Windows::Forms::RadioButton());
			this->btnVendedor = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->mensaje = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ventana Inicial";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// stringCedula
			// 
			this->stringCedula->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stringCedula->Location = System::Drawing::Point(391, 152);
			this->stringCedula->Name = L"stringCedula";
			this->stringCedula->Size = System::Drawing::Size(139, 30);
			this->stringCedula->TabIndex = 4;
			this->stringCedula->TextChanged += gcnew System::EventHandler(this, &VentanaPrincipal::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(235, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 23);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Digite su cédula:";
			// 
			// btnAdmin
			// 
			this->btnAdmin->AutoSize = true;
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->Location = System::Drawing::Point(58, 155);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(148, 27);
			this->btnAdmin->TabIndex = 8;
			this->btnAdmin->TabStop = true;
			this->btnAdmin->Text = L"Administrador";
			this->btnAdmin->UseVisualStyleBackColor = true;
			// 
			// btnCliente
			// 
			this->btnCliente->AutoSize = true;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->Location = System::Drawing::Point(58, 191);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(86, 27);
			this->btnCliente->TabIndex = 9;
			this->btnCliente->TabStop = true;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->UseVisualStyleBackColor = true;
			// 
			// btnVendedor
			// 
			this->btnVendedor->AutoSize = true;
			this->btnVendedor->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVendedor->Location = System::Drawing::Point(58, 227);
			this->btnVendedor->Name = L"btnVendedor";
			this->btnVendedor->Size = System::Drawing::Size(109, 27);
			this->btnVendedor->TabIndex = 10;
			this->btnVendedor->TabStop = true;
			this->btnVendedor->Text = L"Vendedor";
			this->btnVendedor->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(297, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::button2_Click);
			// 
			// mensaje
			// 
			this->mensaje->AutoSize = true;
			this->mensaje->Location = System::Drawing::Point(236, 191);
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(35, 13);
			this->mensaje->TabIndex = 12;
			this->mensaje->Text = L"label2";
			// 
			// VentanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(584, 461);
			this->Controls->Add(this->mensaje);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnVendedor);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnAdmin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stringCedula);
			this->Controls->Add(this->button1);
			this->Name = L"VentanaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaPrincipal";
			this->Load += gcnew System::EventHandler(this, &VentanaPrincipal::VentanaPrincipal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void modificacionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void insercionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void VentanaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ stringCedula = this->stringCedula->Text;
	if (!String::IsNullOrEmpty(stringCedula)) {
		this->mensaje->Text = "";
		std::string strCedula = msclr::interop::marshal_as<std::string>(stringCedula);
		if (btnCliente->Checked && !btnAdmin->Checked && !btnVendedor->Checked) {
			if (clientes.buscar(strCedula)) {
				VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado();
				ventanaSuper->Show();
			}
			else {
				this->mensaje->Text = "No existe";
			}
		}
		else if (!btnCliente->Checked && btnAdmin->Checked && !btnVendedor->Checked) {
			if (admins.buscar(strCedula)) {
				VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado();
				ventanaSuper->Show();
			}
			else {
				this->mensaje->Text = "No existe";
			}
		}
		else if (!btnCliente->Checked && !btnAdmin->Checked && btnVendedor->Checked) {
			if (vendedores.buscar(strCedula)) {
				VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado();
				ventanaSuper->Show();
			}
			else {
				this->mensaje->Text = "No existe";
			}
		}
	}
	else {
		this->mensaje->Text = "Cedula vacia";
	}
}
};
}
