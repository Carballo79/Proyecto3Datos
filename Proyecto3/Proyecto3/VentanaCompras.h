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
	/// Summary for VentanaCompras
	/// </summary>
	public ref class VentanaCompras : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;

		VentanaCompras(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaCompras(Form^ ventana, NodoCliente& _comprasClientes)
		{
			ventana2 = ventana;
			comprasClientes = &_comprasClientes;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->cBoxPasillos->SelectedIndexChanged += gcnew System::EventHandler(this,
				&VentanaCompras::ComboBox_SelectedIndexChanged);
			this->cBoxProductos->SelectedIndexChanged += gcnew System::EventHandler(this,
				&VentanaCompras::ComboBox_SelectedIndexChanged);
			this->cBoxMarcas->SelectedIndexChanged += gcnew System::EventHandler(this,
				&VentanaCompras::ComboBox_SelectedIndexChanged);


			pasillosB->inordenR(pasillosB->raiz, cBoxPasillos);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaCompras()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtCantCompra;

	private: System::Windows::Forms::Button^ btnCarrito;





	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnValidarCliente;
	private: System::Windows::Forms::ComboBox^ cBoxPasillos;
	private: System::Windows::Forms::ComboBox^ cBoxProductos;
	private: System::Windows::Forms::ComboBox^ cBoxMarcas;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaCompras::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtCantCompra = (gcnew System::Windows::Forms::TextBox());
			this->btnCarrito = (gcnew System::Windows::Forms::Button());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnValidarCliente = (gcnew System::Windows::Forms::Button());
			this->cBoxPasillos = (gcnew System::Windows::Forms::ComboBox());
			this->cBoxProductos = (gcnew System::Windows::Forms::ComboBox());
			this->cBoxMarcas = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(233, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 25);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Compras";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 23);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Seleccione un pasillo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 23);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Seleccione un producto:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(42, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 23);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Seleccione una marca:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 350);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 23);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Indique la cantidad a comprar:";
			// 
			// txtCantCompra
			// 
			this->txtCantCompra->Enabled = false;
			this->txtCantCompra->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCantCompra->Location = System::Drawing::Point(323, 347);
			this->txtCantCompra->Name = L"txtCantCompra";
			this->txtCantCompra->Size = System::Drawing::Size(164, 26);
			this->txtCantCompra->TabIndex = 39;
			// 
			// btnCarrito
			// 
			this->btnCarrito->Enabled = false;
			this->btnCarrito->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarrito->Location = System::Drawing::Point(346, 412);
			this->btnCarrito->Name = L"btnCarrito";
			this->btnCarrito->Size = System::Drawing::Size(141, 43);
			this->btnCarrito->TabIndex = 40;
			this->btnCarrito->Text = L"Agregar al carrito";
			this->btnCarrito->UseVisualStyleBackColor = true;
			this->btnCarrito->Click += gcnew System::EventHandler(this, &VentanaCompras::btnCarrito_Click);
			// 
			// txtCedula
			// 
			this->txtCedula->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCedula->Location = System::Drawing::Point(274, 102);
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(147, 26);
			this->txtCedula->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(163, 23);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Ingrese su cédula:";
			// 
			// btnValidarCliente
			// 
			this->btnValidarCliente->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnValidarCliente.BackgroundImage")));
			this->btnValidarCliente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnValidarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnValidarCliente->Location = System::Drawing::Point(437, 92);
			this->btnValidarCliente->Name = L"btnValidarCliente";
			this->btnValidarCliente->Size = System::Drawing::Size(50, 50);
			this->btnValidarCliente->TabIndex = 47;
			this->btnValidarCliente->UseVisualStyleBackColor = true;
			this->btnValidarCliente->Click += gcnew System::EventHandler(this, &VentanaCompras::btnValidarCliente_Click);
			// 
			// cBoxPasillos
			// 
			this->cBoxPasillos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxPasillos->Enabled = false;
			this->cBoxPasillos->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxPasillos->FormattingEnabled = true;
			this->cBoxPasillos->Location = System::Drawing::Point(274, 180);
			this->cBoxPasillos->Name = L"cBoxPasillos";
			this->cBoxPasillos->Size = System::Drawing::Size(213, 26);
			this->cBoxPasillos->TabIndex = 48;
			this->cBoxPasillos->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaCompras::cBoxPasillos_SelectedIndexChanged);
			// 
			// cBoxProductos
			// 
			this->cBoxProductos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxProductos->Enabled = false;
			this->cBoxProductos->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxProductos->FormattingEnabled = true;
			this->cBoxProductos->Location = System::Drawing::Point(274, 226);
			this->cBoxProductos->Name = L"cBoxProductos";
			this->cBoxProductos->Size = System::Drawing::Size(213, 26);
			this->cBoxProductos->TabIndex = 49;
			this->cBoxProductos->SelectedIndexChanged += gcnew System::EventHandler(this, &VentanaCompras::cBoxProductos_SelectedIndexChanged);
			// 
			// cBoxMarcas
			// 
			this->cBoxMarcas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxMarcas->Enabled = false;
			this->cBoxMarcas->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxMarcas->FormattingEnabled = true;
			this->cBoxMarcas->Location = System::Drawing::Point(274, 274);
			this->cBoxMarcas->Name = L"cBoxMarcas";
			this->cBoxMarcas->Size = System::Drawing::Size(213, 26);
			this->cBoxMarcas->TabIndex = 50;
			// 
			// VentanaCompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 489);
			this->Controls->Add(this->cBoxMarcas);
			this->Controls->Add(this->cBoxProductos);
			this->Controls->Add(this->cBoxPasillos);
			this->Controls->Add(this->btnValidarCliente);
			this->Controls->Add(this->txtCedula);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnCarrito);
			this->Controls->Add(this->txtCantCompra);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaCompras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaCompras";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaCompras::VentanaCompras_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnValidarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	string cedulaStr = msclr::interop::marshal_as<string>(this->txtCedula->Text);

	if (!String::IsNullOrEmpty(this->txtCedula->Text))
	{
		if (clientesB->buscar(cedulaStr))
		{
			MessageBox::Show("Cliente validado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->cBoxPasillos->Enabled = true;
			this->cBoxProductos->Enabled = true;
			this->cBoxMarcas->Enabled = true;
			this->txtCedula->Enabled = false;
			this->btnValidarCliente->Enabled = false;
		}
		else
		{
			MessageBox::Show("La cédula no existe en el sistema.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("Debes ingresar tu número de cédula.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
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
private: System::Void ComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if ((cBoxPasillos->SelectedItem != nullptr) && (cBoxProductos->SelectedItem != nullptr) && (cBoxMarcas->SelectedItem != nullptr))
	{
		this->txtCantCompra->Enabled = true;
		this->btnCarrito->Enabled = true;

		string codMarcaStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 2);
		string cantGondolaStr = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 4);
		String^ cantGondola = gcnew String(cantGondolaStr.c_str());
		MessageBox::Show("Cantidad disponible: " + cantGondola, "Compras", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		this->txtCantCompra->Enabled = false;
		this->txtCantCompra->Text = "";
		this->btnCarrito->Enabled = false;
	}
}
private: System::Void btnCarrito_Click(System::Object^ sender, System::EventArgs^ e) {
	string cantRestante, nuevoDato;

	string codMarcaStr = obtenerDato(msclr::interop::marshal_as<string>(cBoxMarcas->SelectedItem->ToString()), 2);
	string cantCompraStr = msclr::interop::marshal_as<string>(this->txtCantCompra->Text);
	string cedulaStr = msclr::interop::marshal_as<string>(this->txtCedula->Text);

	if (!String::IsNullOrEmpty(this->txtCantCompra->Text))
	{
		if (stringAInt(obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 4)) >= stringAInt(cantCompraStr))
		{
			string producto = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 0) + "; " +
				obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 1) + "; " + codMarcaStr;

			comprasClientes->insertarOrdenadoSinRepetir(comprasClientes, cedulaStr, producto, cantCompraStr);
			cantRestante = intAString(stringAInt(obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 4)) - stringAInt(cantCompraStr));

			nuevoDato = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 3) + "; "
				+ cantRestante + "; " + obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 5);
			marcasB->modificarNodo(codMarcaStr, nuevoDato);

			MessageBox::Show("Producto agregado al carrito de compras.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Cantidad mayor a la de la gondola.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			if (obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 4) == "0")
			{
				MessageBox::Show("Sin stock.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				int resp1 = ::MessageBox(NULL, L"¿Desea comprar la cantidad disponible?", L"Compras", MB_ICONQUESTION | MB_YESNO);
				
				if (resp1 == IDYES)
				{
					string producto = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 0) + "; " +
						obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 1) + "; " + codMarcaStr;

					NodoARN* nodoMarca = marcasB->buscarNodo(marcasB->raiz, codMarcaStr);
					comprasClientes->insertarOrdenadoSinRepetir(comprasClientes, cedulaStr, producto,
						obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 4));

					nuevoDato = obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 3) + "; "
						+ "0" + "; " + obtenerDato(marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato, 5);
					marcasB->modificarNodo(codMarcaStr, nuevoDato);

					MessageBox::Show("Producto agregado al carrito de compras.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
		}

		MessageBox::Show(gcnew String(comprasClientes->mostrarClientePorCedula(comprasClientes, cedulaStr).c_str()),
			"Lista de compras", MessageBoxButtons::OK);

		int resp2 = ::MessageBox(NULL, L"¿Desea seguir comprando?", L"Compras", MB_ICONQUESTION | MB_YESNO);

		if (resp2 == IDYES)
		{
			cBoxPasillos->Items->Clear();
			pasillosB->inordenR(pasillosB->raiz, cBoxPasillos);
			cBoxProductos->Items->Clear();
			cBoxProductos->ResetText();
			cBoxMarcas->Items->Clear();
			cBoxMarcas->ResetText();

			this->txtCantCompra->Enabled = false;
			this->txtCantCompra->Text = "";
			this->btnCarrito->Enabled = false;
		}
		else
		{
			this->Hide();
			ventana2->Show();
		}
	}
	else
	{
		MessageBox::Show("Debes ingresar una cantidad.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void VentanaCompras_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
};
}
