#pragma once
#include "Proyecto3.h"
#include "Utilidades.h"
#include <string>
#include <windows.h>
#include <msclr/marshal_cppstd.h>

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaFacturacionClientes
	/// </summary>
	public ref class VentanaFacturacionClientes : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		VentanaFacturacionClientes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}
		VentanaFacturacionClientes(Form^ ventana, NodoCliente& _comprasClientes)
		{
			ventana2 = ventana;
			comprasClientes = &_comprasClientes;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			if (comprasClientes == NULL) {
				MessageBox::Show("No hay facturas pendientes.", "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->btnEliminarProducto->Enabled = false;
				this->btnModificarCantidad->Enabled = false;
				this->btnFacturar->Enabled = false;
			}
			else {
				String^ cliente = gcnew String(comprasClientes->info.cedula.c_str());
				comprasClientes->mostrarClientePorcedulaFacturar(comprasClientes, comprasClientes->info.cedula, facturasClientes);
				//MessageBox::Show("Primero en la cola: " + cliente, "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			
		}

	public:


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaFacturacionClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^ facturasClientes;
	private: System::Windows::Forms::Button^ btnEliminarProducto;
	private: System::Windows::Forms::Button^ btnModificarCantidad;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnFacturar;

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
			this->facturasClientes = (gcnew System::Windows::Forms::CheckedListBox());
			this->btnEliminarProducto = (gcnew System::Windows::Forms::Button());
			this->btnModificarCantidad = (gcnew System::Windows::Forms::Button());
			this->btnFacturar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// facturasClientes
			// 
			this->facturasClientes->FormattingEnabled = true;
			this->facturasClientes->Location = System::Drawing::Point(12, 12);
			this->facturasClientes->Name = L"facturasClientes";
			this->facturasClientes->Size = System::Drawing::Size(227, 514);
			this->facturasClientes->TabIndex = 0;
			// 
			// btnEliminarProducto
			// 
			this->btnEliminarProducto->Location = System::Drawing::Point(245, 12);
			this->btnEliminarProducto->Name = L"btnEliminarProducto";
			this->btnEliminarProducto->Size = System::Drawing::Size(150, 23);
			this->btnEliminarProducto->TabIndex = 2;
			this->btnEliminarProducto->Text = L"Eliminar Producto";
			this->btnEliminarProducto->UseVisualStyleBackColor = true;
			// 
			// btnModificarCantidad
			// 
			this->btnModificarCantidad->Location = System::Drawing::Point(245, 56);
			this->btnModificarCantidad->Name = L"btnModificarCantidad";
			this->btnModificarCantidad->Size = System::Drawing::Size(151, 23);
			this->btnModificarCantidad->TabIndex = 3;
			this->btnModificarCantidad->Text = L"Modificar Cantidad";
			this->btnModificarCantidad->UseVisualStyleBackColor = true;
			// 
			// btnFacturar
			// 
			this->btnFacturar->Location = System::Drawing::Point(245, 365);
			this->btnFacturar->Name = L"btnFacturar";
			this->btnFacturar->Size = System::Drawing::Size(150, 23);
			this->btnFacturar->TabIndex = 4;
			this->btnFacturar->Text = L"Facturar y Continuar";
			this->btnFacturar->UseVisualStyleBackColor = true;
			this->btnFacturar->Click += gcnew System::EventHandler(this, &VentanaFacturacionClientes::btnFacturar_Click_1);
			// 
			// VentanaFacturacionClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 533);
			this->Controls->Add(this->btnFacturar);
			this->Controls->Add(this->btnModificarCantidad);
			this->Controls->Add(this->btnEliminarProducto);
			this->Controls->Add(this->facturasClientes);
			this->Location = System::Drawing::Point(246, 498);
			this->Name = L"VentanaFacturacionClientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaFacturacionClientes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaFacturacionClientes::VentanaFacturacionClientes_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void VentanaFacturacionClientes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
private: System::Void btnFacturar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	comprasClientes->eliminarPrimero(comprasClientes);
	if (comprasClientes == NULL) {
		MessageBox::Show("No hay facturas pendientes.", "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
		facturasClientes->Items->Clear();  // Limpiar el CheckListBox antes de agregar nuevos elementos
		this->btnEliminarProducto->Enabled = false;
		this->btnModificarCantidad->Enabled = false;
		this->btnFacturar->Enabled = false;
	}
	else {
		String^ cliente = gcnew String(comprasClientes->info.cedula.c_str());
		MessageBox::Show("Siguiente en la cola: " + cliente, "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
		comprasClientes->mostrarClientePorcedulaFacturar(comprasClientes, comprasClientes->info.cedula, facturasClientes);
	}

}
};
}
