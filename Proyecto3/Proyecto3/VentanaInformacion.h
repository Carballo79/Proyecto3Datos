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
	/// Resumen de VentanaInformacion
	/// </summary>
	public ref class VentanaInformacion : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		int opc;

		VentanaInformacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		VentanaInformacion(Form^ ventana,int _opc, NodoCliente& _comprasClientes)
		{
			ventana2 = ventana;
			opc = _opc;
			comprasClientes = &_comprasClientes;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			pasillosB->inordenR(pasillosB->raiz, cBoxPasillos);


			if (opc == 1)
			{
				InformacionPrecio();
			}
			if (opc == 2)
			{
				InformacionDescuento();
			}
			if (opc == 3)
			{
				InformacionProducto();
			}
			if (opc == 4)
			{
				InformacionMarca();
			}

			this->cBoxPasillos->SelectedIndexChanged += gcnew System::EventHandler(this,
				&VentanaInformacion::ComboBox_SelectedIndexChanged);
			this->cBoxProductos->SelectedIndexChanged += gcnew System::EventHandler(this,
				&VentanaInformacion::ComboBox_SelectedIndexChanged);
			this->cBoxMarcas->SelectedIndexChanged += gcnew System::EventHandler(this,
				&VentanaInformacion::ComboBox_SelectedIndexChanged);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaInformacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cBoxMarcas;
	protected:
	private: System::Windows::Forms::ComboBox^ cBoxProductos;
	private: System::Windows::Forms::ComboBox^ cBoxPasillos;
	private: System::Windows::Forms::Button^ btnConsultar;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ infDescuento;


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
			this->cBoxMarcas = (gcnew System::Windows::Forms::ComboBox());
			this->cBoxProductos = (gcnew System::Windows::Forms::ComboBox());
			this->cBoxPasillos = (gcnew System::Windows::Forms::ComboBox());
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->infDescuento = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cBoxMarcas
			// 
			this->cBoxMarcas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxMarcas->Enabled = false;
			this->cBoxMarcas->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxMarcas->FormattingEnabled = true;
			this->cBoxMarcas->Location = System::Drawing::Point(269, 185);
			this->cBoxMarcas->Name = L"cBoxMarcas";
			this->cBoxMarcas->Size = System::Drawing::Size(213, 26);
			this->cBoxMarcas->TabIndex = 63;
			this->cBoxMarcas->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaInformacion::cBoxMarcas_SelectedIndexChanged);
			// 
			// cBoxProductos
			// 
			this->cBoxProductos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxProductos->Enabled = false;
			this->cBoxProductos->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxProductos->FormattingEnabled = true;
			this->cBoxProductos->Location = System::Drawing::Point(269, 137);
			this->cBoxProductos->Name = L"cBoxProductos";
			this->cBoxProductos->Size = System::Drawing::Size(213, 26);
			this->cBoxProductos->TabIndex = 62;
			this->cBoxProductos->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaInformacion::cBoxProductos_SelectedIndexChanged);
			// 
			// cBoxPasillos
			// 
			this->cBoxPasillos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxPasillos->Enabled = false;
			this->cBoxPasillos->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxPasillos->FormattingEnabled = true;
			this->cBoxPasillos->Location = System::Drawing::Point(269, 91);
			this->cBoxPasillos->Name = L"cBoxPasillos";
			this->cBoxPasillos->Size = System::Drawing::Size(213, 26);
			this->cBoxPasillos->TabIndex = 61;
			this->cBoxPasillos->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaInformacion::cBoxPasillos_SelectedIndexChanged);
			// 
			// btnConsultar
			// 
			this->btnConsultar->Enabled = false;
			this->btnConsultar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultar->Location = System::Drawing::Point(205, 299);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(141, 39);
			this->btnConsultar->TabIndex = 57;
			this->btnConsultar->Text = L"Consultar";
			this->btnConsultar->UseVisualStyleBackColor = true;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &VentanaInformacion::btnConsultar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 23);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Seleccione una marca:";
			this->label4->Click += gcnew System::EventHandler(this, &VentanaInformacion::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 23);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Seleccione un producto:";
			this->label3->Click += gcnew System::EventHandler(this, &VentanaInformacion::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 23);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Seleccione un pasillo:";
			this->label2->Click += gcnew System::EventHandler(this, &VentanaInformacion::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(213, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Información";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 23);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Descuento cliente:";
			// 
			// infDescuento
			// 
			this->infDescuento->Enabled = false;
			this->infDescuento->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infDescuento->Location = System::Drawing::Point(269, 233);
			this->infDescuento->Name = L"infDescuento";
			this->infDescuento->Size = System::Drawing::Size(213, 26);
			this->infDescuento->TabIndex = 65;
			// 
			// VentanaInformacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 368);
			this->Controls->Add(this->infDescuento);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cBoxMarcas);
			this->Controls->Add(this->cBoxProductos);
			this->Controls->Add(this->cBoxPasillos);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaInformacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaInformacion";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaInformacion::VentanaInformacion_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InformacionPrecio(void)
		{
			this->cBoxPasillos->Enabled = true;
			this->cBoxProductos->Enabled = true;
			this->cBoxMarcas->Enabled = true;
			this->btnConsultar->Enabled = true;
		}

		void InformacionDescuento(void)
		{
			this->infDescuento->Enabled = true;
			this->btnConsultar->Enabled = true;
		}

		void InformacionProducto(void)
		{
			this->cBoxPasillos->Enabled = true;
			this->cBoxProductos->Enabled = true;
		}
		void InformacionMarca(void)
		{
			this->cBoxPasillos->Enabled = true;
			this->cBoxProductos->Enabled = true;
			this->cBoxMarcas->Enabled = true;
		}
#pragma endregion

private: System::Void cBoxPasillos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	cBoxProductos->Items->Clear();
	cBoxProductos->ResetText();
	cBoxMarcas->Items->Clear();
	cBoxMarcas->ResetText();

	string pasilloSeleccionado = msclr::interop::marshal_as<string>(cBoxPasillos->SelectedItem->ToString());

	productosB->filtrarPorPasillo(productosB->raiz, obtenerDato(pasilloSeleccionado, 0), cBoxProductos);
	}
private: System::Void cBoxProductos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	cBoxMarcas->Items->Clear();
	cBoxMarcas->ResetText();

	string productoSeleccionado = msclr::interop::marshal_as<string>(cBoxProductos->SelectedItem->ToString());

	marcasB->filtrarPorProducto(marcasB->raiz, obtenerDato(productoSeleccionado, 1), cBoxMarcas);

}
private: System::Void btnValidarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtCedula_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtCantCompra_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cBoxMarcas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void ComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (opc == 3)
	{
		if ((cBoxPasillos->SelectedItem != nullptr) && (cBoxProductos->SelectedItem != nullptr))
		{
			string codPasilloStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxProductos->SelectedItem->ToString()), 0);
			string codProductoStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxProductos->SelectedItem->ToString()), 1);
			string nombreStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxProductos->SelectedItem->ToString()), 2);
			
			String^ codPasillo = gcnew String(codPasilloStr.c_str());
			String^ codProducto = gcnew String(codProductoStr.c_str());
			String^ nombre = gcnew String(nombreStr.c_str());
			
			MessageBox::Show("Producto: " + codPasillo + "; " + codProducto + "; " + nombre, "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	if (opc == 4)
	{
		if ((cBoxPasillos->SelectedItem != nullptr) && (cBoxProductos->SelectedItem != nullptr) && (cBoxMarcas->SelectedItem != nullptr))
		{
			string codPasilloStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 0);
			string codProductoStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 1);
			string codMarcaStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 2);
			string nombreStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 3);
			string cantGondolaStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 4);
			string PrecioStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 5);
			
			String^ codPasillo = gcnew String(codPasilloStr.c_str());
			String^ codProducto = gcnew String(codProductoStr.c_str());
			String^ codMarca = gcnew String(codMarcaStr.c_str());
			String^ nombre = gcnew String(nombreStr.c_str());
			String^ cantGondola = gcnew String(cantGondolaStr.c_str());
			String^ precio = gcnew String(PrecioStr.c_str());
			
			MessageBox::Show("Producto: " + codPasillo + "; " + codProducto + "; " + codMarca + "; " + nombre + "; " + cantGondola + "; " + precio,
				"Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			this->btnConsultar->Enabled = false;
		}
	}
}

private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
	string infDescuentoStr = msclr::interop::marshal_as<string>(this->infDescuento->Text);
	if (opc == 1) {
		if ((cBoxPasillos->SelectedItem != nullptr) && (cBoxProductos->SelectedItem != nullptr) && (cBoxMarcas->SelectedItem != nullptr))
		{
			string codMarcaStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 2);
			string nombreStr = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 3);
			string precioStr = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 5);
			String^ nombre = gcnew String(nombreStr.c_str());
			String^ precio = gcnew String(precioStr.c_str());
			MessageBox::Show("Nombre: " + nombre + " Precio: " + precio, "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	if (opc == 2) {
		if (!infDescuentoStr.empty())
		{
			if (clientesB->buscarNodo(clientesB->raiz, infDescuentoStr)) {

				string descuento = "0%";
				string cantFacturasSTR = clientesB->conseguirContFacturas(infDescuentoStr);
				int cantFacturasINT = stringAInt(cantFacturasSTR);
				if (cantFacturasINT >= 4) {
					descuento = "5%";
				}
				String^ descuentoMess = gcnew String(descuento.c_str());
				MessageBox::Show("Descuento de: " + descuentoMess , "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Cliente no encontrado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else
		{
			MessageBox::Show("Campo sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	
}
private: System::Void VentanaInformacion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
};
}
