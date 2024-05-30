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
				// this->facturasClientes->Items->Add("No hay facturas pendientes.");
				// this->facturasClientes->Enabled = false;
				this->btnEliminarProducto->Enabled = false;
				this->btnModificarCantidad->Enabled = false;
				this->btnFacturar->Enabled = false;
				this->nuevaCantidad->Enabled = false;
			}
			else {
				String^ cliente = gcnew String(comprasClientes->info.cedula.c_str());
				comprasClientes->mostrarClientePorcedulaFacturar(comprasClientes, comprasClientes->info.cedula, facturasClientes);
				// MessageBox::Show("Primero en la cola: " + cliente, "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
	private: System::Windows::Forms::TextBox^ nuevaCantidad;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->nuevaCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// facturasClientes
			// 
			this->facturasClientes->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facturasClientes->FormattingEnabled = true;
			this->facturasClientes->Location = System::Drawing::Point(25, 26);
			this->facturasClientes->Name = L"facturasClientes";
			this->facturasClientes->ScrollAlwaysVisible = true;
			this->facturasClientes->Size = System::Drawing::Size(260, 235);
			this->facturasClientes->TabIndex = 0;
			this->facturasClientes->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaFacturacionClientes::facturasClientes_SelectedIndexChanged);
			// 
			// btnEliminarProducto
			// 
			this->btnEliminarProducto->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminarProducto->Location = System::Drawing::Point(395, 26);
			this->btnEliminarProducto->Name = L"btnEliminarProducto";
			this->btnEliminarProducto->Size = System::Drawing::Size(171, 31);
			this->btnEliminarProducto->TabIndex = 2;
			this->btnEliminarProducto->Text = L"Eliminar Producto";
			this->btnEliminarProducto->UseVisualStyleBackColor = true;
			this->btnEliminarProducto->Click += gcnew System::EventHandler(this, &VentanaFacturacionClientes::btnEliminarProducto_Click);
			// 
			// btnModificarCantidad
			// 
			this->btnModificarCantidad->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificarCantidad->Location = System::Drawing::Point(395, 72);
			this->btnModificarCantidad->Name = L"btnModificarCantidad";
			this->btnModificarCantidad->Size = System::Drawing::Size(171, 31);
			this->btnModificarCantidad->TabIndex = 3;
			this->btnModificarCantidad->Text = L"Modificar Cantidad";
			this->btnModificarCantidad->UseVisualStyleBackColor = true;
			this->btnModificarCantidad->Click += gcnew System::EventHandler(this, &VentanaFacturacionClientes::btnModificarCantidad_Click);
			// 
			// btnFacturar
			// 
			this->btnFacturar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacturar->Location = System::Drawing::Point(395, 230);
			this->btnFacturar->Name = L"btnFacturar";
			this->btnFacturar->Size = System::Drawing::Size(171, 31);
			this->btnFacturar->TabIndex = 4;
			this->btnFacturar->Text = L"Facturar y Continuar";
			this->btnFacturar->UseVisualStyleBackColor = true;
			this->btnFacturar->Click += gcnew System::EventHandler(this, &VentanaFacturacionClientes::btnFacturar_Click_1);
			// 
			// nuevaCantidad
			// 
			this->nuevaCantidad->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nuevaCantidad->Location = System::Drawing::Point(462, 140);
			this->nuevaCantidad->Name = L"nuevaCantidad";
			this->nuevaCantidad->Size = System::Drawing::Size(104, 26);
			this->nuevaCantidad->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(325, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nueva Cantidad: ";
			// 
			// VentanaFacturacionClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 284);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nuevaCantidad);
			this->Controls->Add(this->btnFacturar);
			this->Controls->Add(this->btnModificarCantidad);
			this->Controls->Add(this->btnEliminarProducto);
			this->Controls->Add(this->facturasClientes);
			this->Location = System::Drawing::Point(246, 498);
			this->Name = L"VentanaFacturacionClientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaFacturacionClientes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaFacturacionClientes::VentanaFacturacionClientes_FormClosing);
			this->Load += gcnew System::EventHandler(this, &VentanaFacturacionClientes::VentanaFacturacionClientes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VentanaFacturacionClientes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->Hide();
		ventana2->Show();
	}
	private: System::Void btnFacturar_Click_1(System::Object^ sender, System::EventArgs^ e) {


		//Facturar va el codigo de el archivo factura!!!!!!!!
		comprasClientes->ImprimirFactura(comprasClientes, clientesB, inventariosB, marcasB);


		//Continuar
		comprasClientes->eliminarPrimero(comprasClientes);
		if (comprasClientes == NULL) {
			MessageBox::Show("No hay facturas pendientes.", "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
			facturasClientes->Items->Clear();  // Limpiar el CheckListBox antes de agregar nuevos elementos
			this->btnEliminarProducto->Enabled = false;
			this->btnModificarCantidad->Enabled = false;
			this->btnFacturar->Enabled = false;
			this->nuevaCantidad->Enabled = false;
		}
		else {
			String^ cliente = gcnew String(comprasClientes->info.cedula.c_str());
			MessageBox::Show("Siguiente en la cola: " + cliente, "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
			comprasClientes->mostrarClientePorcedulaFacturar(comprasClientes, comprasClientes->info.cedula, facturasClientes);
		}

	}
	private: System::Void facturasClientes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = facturasClientes->SelectedIndex;
		int count = facturasClientes->Items->Count;
		for (int x = 0; x < count; x++) {
			if (index != x) {
				facturasClientes->SetItemChecked(x, false);
			}
		}
	}
	private: System::Void btnEliminarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < facturasClientes->Items->Count; i++) {
			if (facturasClientes->GetItemChecked(i)) {

				String^ elemento = dynamic_cast<String^>(facturasClientes->Items[i]);
				int indiceCantidad = elemento->IndexOf("Cantidad:");
				int indiceDosPuntos = elemento->IndexOf(":", indiceCantidad);
				int longitudCantidad = indiceDosPuntos - indiceCantidad + 1;
				int indicePuntoYComa = elemento->LastIndexOf(";");

				String^ marca = elemento->Substring(indicePuntoYComa + 1, indiceCantidad - indicePuntoYComa - 1)->Trim();
				String^ cantidad = elemento->Substring(indiceCantidad)->Replace("Cantidad:", "")->Trim();

				int indiceProducto = elemento->IndexOf("Producto:") + 9;
				int longitudC = indiceCantidad - indiceProducto;

				String^ producto = elemento->Substring(indiceProducto, longitudC)->Trim();


				string productoStr = msclr::interop::marshal_as<string>(producto);
				string marcaStr = msclr::interop::marshal_as<string>(marca);
				string cantidadComprada = msclr::interop::marshal_as<string>(cantidad);


				string nuevaCantidad = intAString(stringAInt(obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 4)) + stringAInt(cantidadComprada));
				string nuevoDato = obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 3) + "; " + nuevaCantidad + "; " + obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 5);
				marcasB->modificarNodo(marcaStr, nuevoDato);
				comprasClientes->borrarProducto(comprasClientes, comprasClientes->info.cedula, productoStr);
				facturasClientes->Items->RemoveAt(i);
				MessageBox::Show("Eliminación exitosa.", "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

	}
	private: System::Void btnModificarCantidad_Click(System::Object^ sender, System::EventArgs^ e) {

		for (int i = 0; i < facturasClientes->Items->Count; i++) {
			if (facturasClientes->GetItemChecked(i)) {
				string nCantidad = msclr::interop::marshal_as<string>(this->nuevaCantidad->Text);
				String^ elemento = dynamic_cast<String^>(facturasClientes->Items[i]);

				int indiceCantidad = elemento->IndexOf("Cantidad:");
				int indiceDosPuntos = elemento->IndexOf(":", indiceCantidad);
				int longitudCantidad = indiceDosPuntos - indiceCantidad + 1;
				int indicePuntoYComa = elemento->LastIndexOf(";");


				int indiceProducto = elemento->IndexOf("Producto:") + 9;
				int longitudC = indiceCantidad - indiceProducto;

				String^ producto = elemento->Substring(indiceProducto, longitudC)->Trim();


				string productoStr = msclr::interop::marshal_as<string>(producto);
				String^ marca = elemento->Substring(indicePuntoYComa + 1, indiceCantidad - indicePuntoYComa - 1)->Trim();
				String^ cantidad = elemento->Substring(indiceCantidad)->Replace("Cantidad:", "")->Trim();

				string marcaStr = msclr::interop::marshal_as<string>(marca);
				string cantidadComprada = msclr::interop::marshal_as<string>(cantidad);
				string nuevaCantidad;
				string nuevoDato;

				if (!nCantidad.empty()) {
					if (stringAInt(obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 4)) + stringAInt(cantidadComprada) >= stringAInt(nCantidad)) {

						nuevaCantidad = intAString(stringAInt(obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 4)) + stringAInt(cantidadComprada));
						nuevoDato = obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 3) + "; " + nuevaCantidad + "; " + obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 5);
						marcasB->modificarNodo(marcaStr, nuevoDato);

						String^ parteAntesCantidad = elemento->Substring(0, indiceCantidad + longitudCantidad);
						String^ elementoModificado = parteAntesCantidad + " " + this->nuevaCantidad->Text;
						facturasClientes->Items[i] = elementoModificado;

						nuevaCantidad = intAString(stringAInt(obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 4)) - stringAInt(nCantidad));
						nuevoDato = obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 3) + "; " + nuevaCantidad + "; " + obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 5);
						marcasB->modificarNodo(marcaStr, nuevoDato);

						comprasClientes->modificarProducto(comprasClientes, comprasClientes->info.cedula, productoStr, nCantidad);

						MessageBox::Show("Modificación exitosa.", "Informacion", MessageBoxButtons::OK, MessageBoxIcon::Information);

					}
					else {
						MessageBox::Show("La nueva cantidad excede el stock.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Campo sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
		}
	}

	private: System::Void VentanaFacturacionClientes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
