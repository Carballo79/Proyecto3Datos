#pragma once

#include "Proyecto3.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaInsercion
	/// </summary>
	public ref class VentanaInsercion : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ label1;
	public:
		Form^ ventana2;
		int opc;

		VentanaInsercion(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaInsercion(Form^ ventana, int _opc, ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
			ArbolB& admins, ArbolB& clientes, ArbolB& vendedores, ArbolBB& ciudades)
		{
			ventana2 = ventana;
			opc = _opc;

			pasillosB = &pasillos;
			productosB = &productos;
			marcasB = &marcas;
			inventariosB = &inventarios;
			adminsB = &admins;
			clientesB = &clientes;
			vendedoresB = &vendedores;
			ciudadesB = &ciudades;

			InitializeComponent();

			if (opc == 1)
			{
				InsercionPasillo();
			}
			if (opc == 2)
			{
				InsercionProducto();
			}
			if (opc == 3)
			{
				InsercionMarca();
			}
			if (opc == 4)
			{
				InsercionInventario();
			}
			if (opc == 5)
			{
				InsercionAdministrador();
			}
			if (opc == 6)
			{
				InsercionCliente();
			}
			if (opc == 7)
			{
				InsercionVendedor();
			}
			if (opc == 8)
			{
				InsercionCiudad();
			}	
		}

	property String^ Valor {
		String^ get() { return valor; }
		void set(String^ value) { valor = value; }
	}

	private:
		String^ valor;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaInsercion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblPasillo;
	private: System::Windows::Forms::Label^ lblProducto;
	private: System::Windows::Forms::Label^ lblMarca;
	private: System::Windows::Forms::Label^ lblInventario;
	private: System::Windows::Forms::Label^ lblCliente;
	private: System::Windows::Forms::Label^ lblAdmin;
	private: System::Windows::Forms::Label^ lblVendedor;
	private: System::Windows::Forms::Label^ lblCiudad;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblGondola;
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::Label^ lblStock;
	private: System::Windows::Forms::Label^ lblCanasta;
	private: System::Windows::Forms::Label^ lblTelefono;
	private: System::Windows::Forms::Label^ lblCorreo;

	protected:

	protected:














	private: System::Windows::Forms::TextBox^ precio;

	private: System::Windows::Forms::TextBox^ cantGondola;

	private: System::Windows::Forms::TextBox^ nombre;

	private: System::Windows::Forms::TextBox^ codCiudad;

	private: System::Windows::Forms::TextBox^ codVendedor;

	private: System::Windows::Forms::TextBox^ codAdmin;

	private: System::Windows::Forms::TextBox^ codCliente;

	private: System::Windows::Forms::TextBox^ codInventario;

	private: System::Windows::Forms::TextBox^ codPasillo;
	private: System::Windows::Forms::TextBox^ codProducto;
	private: System::Windows::Forms::TextBox^ codMarca;
	private: System::Windows::Forms::TextBox^ cantStock;
	private: System::Windows::Forms::TextBox^ codCanasta;
	private: System::Windows::Forms::TextBox^ telefono;









	private: System::Windows::Forms::TextBox^ Correo;
	private: System::Windows::Forms::Button^ btnIngresar;



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
			this->lblPasillo = (gcnew System::Windows::Forms::Label());
			this->lblProducto = (gcnew System::Windows::Forms::Label());
			this->lblMarca = (gcnew System::Windows::Forms::Label());
			this->lblInventario = (gcnew System::Windows::Forms::Label());
			this->lblCliente = (gcnew System::Windows::Forms::Label());
			this->lblAdmin = (gcnew System::Windows::Forms::Label());
			this->lblVendedor = (gcnew System::Windows::Forms::Label());
			this->lblCiudad = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblGondola = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->lblStock = (gcnew System::Windows::Forms::Label());
			this->lblCanasta = (gcnew System::Windows::Forms::Label());
			this->lblTelefono = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->precio = (gcnew System::Windows::Forms::TextBox());
			this->cantGondola = (gcnew System::Windows::Forms::TextBox());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->codCiudad = (gcnew System::Windows::Forms::TextBox());
			this->codVendedor = (gcnew System::Windows::Forms::TextBox());
			this->codAdmin = (gcnew System::Windows::Forms::TextBox());
			this->codCliente = (gcnew System::Windows::Forms::TextBox());
			this->codInventario = (gcnew System::Windows::Forms::TextBox());
			this->codPasillo = (gcnew System::Windows::Forms::TextBox());
			this->codProducto = (gcnew System::Windows::Forms::TextBox());
			this->codMarca = (gcnew System::Windows::Forms::TextBox());
			this->cantStock = (gcnew System::Windows::Forms::TextBox());
			this->codCanasta = (gcnew System::Windows::Forms::TextBox());
			this->telefono = (gcnew System::Windows::Forms::TextBox());
			this->Correo = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblPasillo
			// 
			this->lblPasillo->AutoSize = true;
			this->lblPasillo->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPasillo->Location = System::Drawing::Point(45, 92);
			this->lblPasillo->Name = L"lblPasillo";
			this->lblPasillo->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblPasillo->Size = System::Drawing::Size(107, 33);
			this->lblPasillo->TabIndex = 0;
			this->lblPasillo->Text = L"CodPasillo:";
			// 
			// lblProducto
			// 
			this->lblProducto->AutoSize = true;
			this->lblProducto->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProducto->Location = System::Drawing::Point(45, 125);
			this->lblProducto->Name = L"lblProducto";
			this->lblProducto->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblProducto->Size = System::Drawing::Size(126, 33);
			this->lblProducto->TabIndex = 1;
			this->lblProducto->Text = L"CodProducto:";
			this->lblProducto->Click += gcnew System::EventHandler(this, &VentanaInsercion::label2_Click);
			// 
			// lblMarca
			// 
			this->lblMarca->AutoSize = true;
			this->lblMarca->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMarca->Location = System::Drawing::Point(45, 158);
			this->lblMarca->Name = L"lblMarca";
			this->lblMarca->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblMarca->Size = System::Drawing::Size(102, 33);
			this->lblMarca->TabIndex = 2;
			this->lblMarca->Text = L"CodMarca:";
			// 
			// lblInventario
			// 
			this->lblInventario->AutoSize = true;
			this->lblInventario->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInventario->Location = System::Drawing::Point(45, 191);
			this->lblInventario->Name = L"lblInventario";
			this->lblInventario->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblInventario->Size = System::Drawing::Size(131, 33);
			this->lblInventario->TabIndex = 3;
			this->lblInventario->Text = L"CodInventario:";
			// 
			// lblCliente
			// 
			this->lblCliente->AutoSize = true;
			this->lblCliente->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCliente->Location = System::Drawing::Point(45, 224);
			this->lblCliente->Name = L"lblCliente";
			this->lblCliente->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblCliente->Size = System::Drawing::Size(107, 33);
			this->lblCliente->TabIndex = 4;
			this->lblCliente->Text = L"CodCliente:";
			// 
			// lblAdmin
			// 
			this->lblAdmin->AutoSize = true;
			this->lblAdmin->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdmin->Location = System::Drawing::Point(45, 257);
			this->lblAdmin->Name = L"lblAdmin";
			this->lblAdmin->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblAdmin->Size = System::Drawing::Size(104, 33);
			this->lblAdmin->TabIndex = 5;
			this->lblAdmin->Text = L"CodAdmin:";
			// 
			// lblVendedor
			// 
			this->lblVendedor->AutoSize = true;
			this->lblVendedor->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVendedor->Location = System::Drawing::Point(45, 290);
			this->lblVendedor->Name = L"lblVendedor";
			this->lblVendedor->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblVendedor->Size = System::Drawing::Size(130, 33);
			this->lblVendedor->TabIndex = 6;
			this->lblVendedor->Text = L"CodVendedor:";
			// 
			// lblCiudad
			// 
			this->lblCiudad->AutoSize = true;
			this->lblCiudad->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCiudad->Location = System::Drawing::Point(45, 323);
			this->lblCiudad->Name = L"lblCiudad";
			this->lblCiudad->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblCiudad->Size = System::Drawing::Size(108, 33);
			this->lblCiudad->TabIndex = 7;
			this->lblCiudad->Text = L"CodCiudad:";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(45, 356);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblNombre->Size = System::Drawing::Size(84, 33);
			this->lblNombre->TabIndex = 8;
			this->lblNombre->Text = L"Nombre:";
			// 
			// lblGondola
			// 
			this->lblGondola->AutoSize = true;
			this->lblGondola->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGondola->Location = System::Drawing::Point(45, 389);
			this->lblGondola->Name = L"lblGondola";
			this->lblGondola->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblGondola->Size = System::Drawing::Size(124, 33);
			this->lblGondola->TabIndex = 9;
			this->lblGondola->Text = L"CantGondola:";
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrecio->Location = System::Drawing::Point(45, 422);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblPrecio->Size = System::Drawing::Size(69, 33);
			this->lblPrecio->TabIndex = 10;
			this->lblPrecio->Text = L"Precio:";
			// 
			// lblStock
			// 
			this->lblStock->AutoSize = true;
			this->lblStock->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStock->Location = System::Drawing::Point(45, 455);
			this->lblStock->Name = L"lblStock";
			this->lblStock->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblStock->Size = System::Drawing::Size(101, 33);
			this->lblStock->TabIndex = 11;
			this->lblStock->Text = L"CantStock:";
			// 
			// lblCanasta
			// 
			this->lblCanasta->AutoSize = true;
			this->lblCanasta->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCanasta->Location = System::Drawing::Point(45, 488);
			this->lblCanasta->Name = L"lblCanasta";
			this->lblCanasta->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblCanasta->Size = System::Drawing::Size(117, 33);
			this->lblCanasta->TabIndex = 12;
			this->lblCanasta->Text = L"CodCanasta:";
			// 
			// lblTelefono
			// 
			this->lblTelefono->AutoSize = true;
			this->lblTelefono->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelefono->Location = System::Drawing::Point(45, 521);
			this->lblTelefono->Name = L"lblTelefono";
			this->lblTelefono->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblTelefono->Size = System::Drawing::Size(89, 33);
			this->lblTelefono->TabIndex = 13;
			this->lblTelefono->Text = L"Tel�fono:";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(45, 554);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->lblCorreo->Size = System::Drawing::Size(71, 33);
			this->lblCorreo->TabIndex = 14;
			this->lblCorreo->Text = L"Correo:";
			// 
			// precio
			// 
			this->precio->Enabled = false;
			this->precio->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio->Location = System::Drawing::Point(192, 425);
			this->precio->Name = L"precio";
			this->precio->Size = System::Drawing::Size(200, 26);
			this->precio->TabIndex = 15;
			// 
			// cantGondola
			// 
			this->cantGondola->Enabled = false;
			this->cantGondola->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantGondola->Location = System::Drawing::Point(192, 392);
			this->cantGondola->Name = L"cantGondola";
			this->cantGondola->Size = System::Drawing::Size(200, 26);
			this->cantGondola->TabIndex = 16;
			// 
			// nombre
			// 
			this->nombre->Enabled = false;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->Location = System::Drawing::Point(192, 359);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(200, 26);
			this->nombre->TabIndex = 17;
			// 
			// codCiudad
			// 
			this->codCiudad->Enabled = false;
			this->codCiudad->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCiudad->Location = System::Drawing::Point(192, 326);
			this->codCiudad->Name = L"codCiudad";
			this->codCiudad->Size = System::Drawing::Size(200, 26);
			this->codCiudad->TabIndex = 18;
			// 
			// codVendedor
			// 
			this->codVendedor->Enabled = false;
			this->codVendedor->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codVendedor->Location = System::Drawing::Point(192, 293);
			this->codVendedor->Name = L"codVendedor";
			this->codVendedor->Size = System::Drawing::Size(200, 26);
			this->codVendedor->TabIndex = 19;
			// 
			// codAdmin
			// 
			this->codAdmin->Enabled = false;
			this->codAdmin->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codAdmin->Location = System::Drawing::Point(192, 260);
			this->codAdmin->Name = L"codAdmin";
			this->codAdmin->Size = System::Drawing::Size(200, 26);
			this->codAdmin->TabIndex = 20;
			// 
			// codCliente
			// 
			this->codCliente->Enabled = false;
			this->codCliente->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCliente->Location = System::Drawing::Point(192, 227);
			this->codCliente->Name = L"codCliente";
			this->codCliente->Size = System::Drawing::Size(200, 26);
			this->codCliente->TabIndex = 21;
			// 
			// codInventario
			// 
			this->codInventario->Enabled = false;
			this->codInventario->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codInventario->Location = System::Drawing::Point(192, 194);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(200, 26);
			this->codInventario->TabIndex = 22;
			// 
			// codPasillo
			// 
			this->codPasillo->Enabled = false;
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(192, 95);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 26);
			this->codPasillo->TabIndex = 25;
			// 
			// codProducto
			// 
			this->codProducto->Enabled = false;
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(192, 128);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 26);
			this->codProducto->TabIndex = 24;
			// 
			// codMarca
			// 
			this->codMarca->Enabled = false;
			this->codMarca->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codMarca->Location = System::Drawing::Point(192, 161);
			this->codMarca->Name = L"codMarca";
			this->codMarca->Size = System::Drawing::Size(200, 26);
			this->codMarca->TabIndex = 23;
			// 
			// cantStock
			// 
			this->cantStock->Enabled = false;
			this->cantStock->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantStock->Location = System::Drawing::Point(192, 458);
			this->cantStock->Name = L"cantStock";
			this->cantStock->Size = System::Drawing::Size(200, 26);
			this->cantStock->TabIndex = 26;
			// 
			// codCanasta
			// 
			this->codCanasta->Enabled = false;
			this->codCanasta->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCanasta->Location = System::Drawing::Point(192, 491);
			this->codCanasta->Name = L"codCanasta";
			this->codCanasta->Size = System::Drawing::Size(200, 26);
			this->codCanasta->TabIndex = 27;
			// 
			// telefono
			// 
			this->telefono->Enabled = false;
			this->telefono->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefono->Location = System::Drawing::Point(192, 524);
			this->telefono->Name = L"telefono";
			this->telefono->Size = System::Drawing::Size(200, 26);
			this->telefono->TabIndex = 28;
			// 
			// Correo
			// 
			this->Correo->Enabled = false;
			this->Correo->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Correo->Location = System::Drawing::Point(192, 557);
			this->Correo->Name = L"Correo";
			this->Correo->Size = System::Drawing::Size(200, 26);
			this->Correo->TabIndex = 29;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->Location = System::Drawing::Point(441, 293);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(109, 48);
			this->btnIngresar->TabIndex = 30;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &VentanaInsercion::btnIngresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(248, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 25);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Inserci�n";
			// 
			// VentanaInsercion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 629);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->Correo);
			this->Controls->Add(this->telefono);
			this->Controls->Add(this->codCanasta);
			this->Controls->Add(this->cantStock);
			this->Controls->Add(this->codPasillo);
			this->Controls->Add(this->codProducto);
			this->Controls->Add(this->codMarca);
			this->Controls->Add(this->codInventario);
			this->Controls->Add(this->codCliente);
			this->Controls->Add(this->codAdmin);
			this->Controls->Add(this->codVendedor);
			this->Controls->Add(this->codCiudad);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->cantGondola);
			this->Controls->Add(this->precio);
			this->Controls->Add(this->lblCorreo);
			this->Controls->Add(this->lblTelefono);
			this->Controls->Add(this->lblCanasta);
			this->Controls->Add(this->lblStock);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->lblGondola);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblCiudad);
			this->Controls->Add(this->lblVendedor);
			this->Controls->Add(this->lblAdmin);
			this->Controls->Add(this->lblCliente);
			this->Controls->Add(this->lblInventario);
			this->Controls->Add(this->lblMarca);
			this->Controls->Add(this->lblProducto);
			this->Controls->Add(this->lblPasillo);
			this->Name = L"VentanaInsercion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaInsercion";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaInsercion::VentanaInsercion_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InsercionPasillo(void)
		{
			this->codPasillo->Enabled = true;
			this->nombre->Enabled = true;
		}

		void InsercionProducto(void)
		{
			this->codPasillo->Enabled = true;
			this->codProducto->Enabled = true;
			this->nombre->Enabled = true;
		}

		void InsercionMarca(void)
		{
			this->codPasillo->Enabled = true;
			this->codProducto->Enabled = true;
			this->codMarca->Enabled = true;
			this->nombre->Enabled = true;
			this->cantGondola->Enabled = true;
			this->precio->Enabled = true;

		}

		void InsercionInventario(void)
		{
			this->codPasillo->Enabled = true;
			this->codProducto->Enabled = true;
			this->codMarca->Enabled = true;
			this->codInventario->Enabled = true;
			this->nombre->Enabled = true;
			this->cantStock->Enabled = true;
			this->codCanasta->Enabled = true;
		}

		void InsercionAdministrador(void)
		{
			this->codAdmin->Enabled = true;
			this->nombre->Enabled = true;
			this->codCiudad->Enabled = true;
			this->telefono->Enabled = true;
			this->Correo->Enabled = true;

		}

		void InsercionCliente(void)
		{
			this->codCliente->Enabled = true;
			this->nombre->Enabled = true;
			this->telefono->Enabled = true;
			this->Correo->Enabled = true;
			this->codCiudad->Enabled = true;
		}

		void InsercionVendedor(void)
		{
			this->codVendedor->Enabled = true;
			this->nombre->Enabled = true;
		}

		void InsercionCiudad(void)
		{
			this->codCiudad->Enabled = true;
			this->nombre->Enabled = true;
		}

	


#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		string codPasilloStr = msclr::interop::marshal_as<string>(this->codPasillo->Text);
		string codProductoStr = msclr::interop::marshal_as<string>(this->codProducto->Text);
		string codMarcaStr = msclr::interop::marshal_as<string>(this->codMarca->Text);
		string codInventarioStr = msclr::interop::marshal_as<string>(this->codInventario->Text);
		string codClienteStr = msclr::interop::marshal_as<string>(this->codCliente->Text);
		string codAdminStr = msclr::interop::marshal_as<string>(this->codAdmin->Text);
		string codVendedorStr = msclr::interop::marshal_as<string>(this->codVendedor->Text);
		string codCiudadStr = msclr::interop::marshal_as<string>(this->codCiudad->Text);
		string nombreStr = msclr::interop::marshal_as<string>(this->nombre->Text);
		string cantGondolaStr = msclr::interop::marshal_as<string>(this->cantGondola->Text);
		string cantStockStr = msclr::interop::marshal_as<string>(this->cantStock->Text);
		string codCanastaStr = msclr::interop::marshal_as<string>(this->codCanasta->Text);
		string precioStr = msclr::interop::marshal_as<string>(this->precio->Text);
		string telefonoStr = msclr::interop::marshal_as<string>(this->telefono->Text);
		string CorreoStr = msclr::interop::marshal_as<string>(this->Correo->Text);

		if (opc == 1) {
			if (!codPasilloStr.empty() && !nombreStr.empty()) {
				if (!pasillosB->existeNodo(codPasilloStr)) {
					string pasillo = codPasilloStr + "; " + nombreStr;
					pasillosB->insertarNodo(pasillo);

					MessageBox::Show("Pasillo insertado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

					this->Close();
					ventana2->Show();
				}
				else {
					MessageBox::Show("Pasillo ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 2) {
			if (!codPasilloStr.empty() && !codProductoStr.empty() && !nombreStr.empty()) {
				if (pasillosB->existeNodo(codPasilloStr)) {
					if (!productosB->existeNodo(codProductoStr)) {
						string producto = codPasilloStr + "; " + codProductoStr + "; " + nombreStr;
						productosB->insertarNodo(producto);

						MessageBox::Show("Producto insertado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

						this->Close();
						ventana2->Show();
					}
					else {
						MessageBox::Show("Producto ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Pasillo no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 3) {
			if (!codPasilloStr.empty() && !codProductoStr.empty() && !codMarcaStr.empty()
				&& !nombreStr.empty() && !cantGondolaStr.empty() && !precioStr.empty()) {
				if (pasillosB->existeNodo(codPasilloStr)) {
					if (productosB->existeNodo(codProductoStr)) {
						if (!marcasB->existeNodo(codMarcaStr)) {
							string marca = codPasilloStr + "; " + codProductoStr + "; " + codMarcaStr + "; " +
								nombreStr + "; " + cantGondolaStr + "; " + precioStr;
							marcasB->insertarNodo(marca);

							MessageBox::Show("Marca insertada exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

							this->Close();
							ventana2->Show();
						}
						else {
							MessageBox::Show("Marca ya registrada.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else {
						MessageBox::Show("Producto no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Pasillo no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 4) {
			if (!codPasilloStr.empty() && !codProductoStr.empty() && !codMarcaStr.empty()
				&& !codInventarioStr.empty() && !nombreStr.empty() && !cantStockStr.empty() && !codCanastaStr.empty()) {
				if (pasillosB->existeNodo(codPasilloStr)) {
					if (productosB->existeNodo(codProductoStr)) {
						if (marcasB->existeNodo(codMarcaStr)) {
							if (!inventariosB->existeNodo(codInventarioStr)) {
								string inventario = codPasilloStr + "; " + codProductoStr + "; " +codMarcaStr + "; " +
									codInventarioStr + "; " +nombreStr + "; " + cantStockStr + "; " +
									codCanastaStr;

								if ((codCanastaStr == "1") || (codCanastaStr == "0"))
								{
									inventariosB->insertarNodo(inventario);

									MessageBox::Show("Inventario insertado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

									this->Close();
									ventana2->Show();
								}
								else
									MessageBox::Show("Solo puedes ingresar 0 o 1 como c�digo de canasta.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
							else {
								MessageBox::Show("Inventario ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
						}
						else {
							MessageBox::Show("Marca no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else {
						MessageBox::Show("Producto no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Pasillo no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 5) {
			if (!codAdminStr.empty() && !nombreStr.empty() && !codCiudadStr.empty() 
				&& !telefonoStr.empty() && !CorreoStr.empty()){
				if (!adminsB->buscar(codAdminStr)) {
					if (ciudadesB->existeNodo(codCiudadStr)) {
						string admin = codAdminStr + "; " + nombreStr + "; " +
							codCiudadStr + "; " + telefonoStr + "; " + CorreoStr;
						adminsB->insertarNodo(admin);

						MessageBox::Show("Administrador insertado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

						this->Close();
						ventana2->Show();
					}
					else {
						MessageBox::Show("Ciudad no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Administrador ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 6) {
			if (!codClienteStr.empty() && !nombreStr.empty()
				&& !telefonoStr.empty() && !CorreoStr.empty() && !codCiudadStr.empty()) {
				if (!clientesB->buscar(codClienteStr)) {
					if (ciudadesB->existeNodo(codCiudadStr)) {
						string cliente = codClienteStr + "; " + nombreStr + "; " + codCiudadStr + "; " + telefonoStr + "; " + CorreoStr;
						clientesB->insertarNodo(cliente);

						MessageBox::Show("Cliente insertado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

						this->Close();
						ventana2->Show();
					}
					else {
						MessageBox::Show("Ciudad no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Cliente ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 7) {
			if (!codVendedorStr.empty() && !nombreStr.empty()) {
				if (!vendedoresB->buscar(codVendedorStr)) {
					string vendedor = codVendedorStr + "; " + nombreStr;
					vendedoresB->insertarNodo(vendedor);

					MessageBox::Show("Vendendor insertado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

					this->Close();
					ventana2->Show();
				}
				else {
					MessageBox::Show("Vendedor ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (opc == 8) {
			if (!codCiudadStr.empty() && !nombreStr.empty()) {
				if (!ciudadesB->existeNodo(codCiudadStr)) {
					string ciudad = codCiudadStr + "; " + nombreStr;
					ciudadesB->insertarNodo(ciudad);

					MessageBox::Show("Ciudad insertada exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

					this->Close();
					ventana2->Show();
				}
				else {
					MessageBox::Show("Ciudad ya registrada.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void VentanaInsercion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
};
}
