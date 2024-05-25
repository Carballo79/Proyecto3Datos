#pragma once

#include "Proyecto3.h"
#include "Utilidades.h"
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
	/// Summary for VentanaModificacion
	/// </summary>
	public ref class VentanaModificacion : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		int opc;
		
		VentanaModificacion(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaModificacion(Form^ ventana, int _opc, ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
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
				ModificacionPasillo();
			}
			if (opc == 2)
			{
				ModificacionProducto();
			}
			if (opc == 3)
			{
				ModificacionMarca();
			}
			if (opc == 4)
			{
				ModificacionInventario();
			}
			if (opc == 5)
			{
				ModificacionAdministrador();
			}
			if (opc == 6)
			{
				ModificacionCliente();
			}
			if (opc == 7)
			{
				ModificacionVendedor();
			}
			if (opc == 8)
			{
				ModificacionCiudad();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaModificacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::TextBox^ correo;

	private: System::Windows::Forms::TextBox^ telefono;
	private: System::Windows::Forms::TextBox^ codCanasta;
	private: System::Windows::Forms::TextBox^ cantStock;
	private: System::Windows::Forms::TextBox^ codPasillo;
	private: System::Windows::Forms::TextBox^ codProducto;
	private: System::Windows::Forms::TextBox^ codMarca;
	private: System::Windows::Forms::TextBox^ codInventario;
	private: System::Windows::Forms::TextBox^ codCliente;
	private: System::Windows::Forms::TextBox^ codAdmin;
	private: System::Windows::Forms::TextBox^ codVendedor;
	private: System::Windows::Forms::TextBox^ codCiudad;
	private: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::TextBox^ cantGondola;
	private: System::Windows::Forms::TextBox^ precio;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label16;

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
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->correo = (gcnew System::Windows::Forms::TextBox());
			this->telefono = (gcnew System::Windows::Forms::TextBox());
			this->codCanasta = (gcnew System::Windows::Forms::TextBox());
			this->cantStock = (gcnew System::Windows::Forms::TextBox());
			this->codPasillo = (gcnew System::Windows::Forms::TextBox());
			this->codProducto = (gcnew System::Windows::Forms::TextBox());
			this->codMarca = (gcnew System::Windows::Forms::TextBox());
			this->codInventario = (gcnew System::Windows::Forms::TextBox());
			this->codCliente = (gcnew System::Windows::Forms::TextBox());
			this->codAdmin = (gcnew System::Windows::Forms::TextBox());
			this->codVendedor = (gcnew System::Windows::Forms::TextBox());
			this->codCiudad = (gcnew System::Windows::Forms::TextBox());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->cantGondola = (gcnew System::Windows::Forms::TextBox());
			this->precio = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnModificar
			// 
			this->btnModificar->Enabled = false;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(455, 263);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(109, 48);
			this->btnModificar->TabIndex = 61;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &VentanaModificacion::btnModificar_Click);
			// 
			// correo
			// 
			this->correo->Enabled = false;
			this->correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correo->Location = System::Drawing::Point(235, 537);
			this->correo->Name = L"correo";
			this->correo->Size = System::Drawing::Size(200, 22);
			this->correo->TabIndex = 60;
			// 
			// telefono
			// 
			this->telefono->Enabled = false;
			this->telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefono->Location = System::Drawing::Point(235, 506);
			this->telefono->Name = L"telefono";
			this->telefono->Size = System::Drawing::Size(200, 22);
			this->telefono->TabIndex = 59;
			// 
			// codCanasta
			// 
			this->codCanasta->Enabled = false;
			this->codCanasta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCanasta->Location = System::Drawing::Point(235, 473);
			this->codCanasta->Name = L"codCanasta";
			this->codCanasta->Size = System::Drawing::Size(200, 22);
			this->codCanasta->TabIndex = 58;
			// 
			// cantStock
			// 
			this->cantStock->Enabled = false;
			this->cantStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantStock->Location = System::Drawing::Point(235, 440);
			this->cantStock->Name = L"cantStock";
			this->cantStock->Size = System::Drawing::Size(200, 22);
			this->cantStock->TabIndex = 57;
			// 
			// codPasillo
			// 
			this->codPasillo->Enabled = false;
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(235, 63);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 22);
			this->codPasillo->TabIndex = 56;
			// 
			// codProducto
			// 
			this->codProducto->Enabled = false;
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(235, 97);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 22);
			this->codProducto->TabIndex = 55;
			// 
			// codMarca
			// 
			this->codMarca->Enabled = false;
			this->codMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codMarca->Location = System::Drawing::Point(235, 131);
			this->codMarca->Name = L"codMarca";
			this->codMarca->Size = System::Drawing::Size(200, 22);
			this->codMarca->TabIndex = 54;
			// 
			// codInventario
			// 
			this->codInventario->Enabled = false;
			this->codInventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codInventario->Location = System::Drawing::Point(235, 165);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(200, 22);
			this->codInventario->TabIndex = 53;
			// 
			// codCliente
			// 
			this->codCliente->Enabled = false;
			this->codCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCliente->Location = System::Drawing::Point(235, 199);
			this->codCliente->Name = L"codCliente";
			this->codCliente->Size = System::Drawing::Size(200, 22);
			this->codCliente->TabIndex = 52;
			// 
			// codAdmin
			// 
			this->codAdmin->Enabled = false;
			this->codAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codAdmin->Location = System::Drawing::Point(235, 233);
			this->codAdmin->Name = L"codAdmin";
			this->codAdmin->Size = System::Drawing::Size(200, 22);
			this->codAdmin->TabIndex = 51;
			// 
			// codVendedor
			// 
			this->codVendedor->Enabled = false;
			this->codVendedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codVendedor->Location = System::Drawing::Point(235, 268);
			this->codVendedor->Name = L"codVendedor";
			this->codVendedor->Size = System::Drawing::Size(200, 22);
			this->codVendedor->TabIndex = 50;
			// 
			// codCiudad
			// 
			this->codCiudad->Enabled = false;
			this->codCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCiudad->Location = System::Drawing::Point(235, 301);
			this->codCiudad->Name = L"codCiudad";
			this->codCiudad->Size = System::Drawing::Size(200, 22);
			this->codCiudad->TabIndex = 49;
			// 
			// nombre
			// 
			this->nombre->Enabled = false;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->Location = System::Drawing::Point(235, 335);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(200, 22);
			this->nombre->TabIndex = 48;
			// 
			// cantGondola
			// 
			this->cantGondola->Enabled = false;
			this->cantGondola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantGondola->Location = System::Drawing::Point(235, 369);
			this->cantGondola->Name = L"cantGondola";
			this->cantGondola->Size = System::Drawing::Size(200, 22);
			this->cantGondola->TabIndex = 47;
			// 
			// precio
			// 
			this->precio->Enabled = false;
			this->precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio->Location = System::Drawing::Point(235, 403);
			this->precio->Name = L"precio";
			this->precio->Size = System::Drawing::Size(200, 22);
			this->precio->TabIndex = 46;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(51, 534);
			this->label15->Name = L"label15";
			this->label15->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label15->Size = System::Drawing::Size(134, 34);
			this->label15->TabIndex = 45;
			this->label15->Text = L"Nuevo Correo:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(51, 502);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label14->Size = System::Drawing::Size(151, 34);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Nuevo Teléfono:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(51, 468);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label13->Size = System::Drawing::Size(178, 34);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Nuevo CodCanasta:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(51, 434);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label12->Size = System::Drawing::Size(159, 34);
			this->label12->TabIndex = 42;
			this->label12->Text = L"Nueva CantStock:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(51, 400);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label11->Size = System::Drawing::Size(130, 34);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Nuevo Precio:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(51, 366);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label10->Size = System::Drawing::Size(185, 34);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Nueva CantGondola:";
			this->label10->Click += gcnew System::EventHandler(this, &VentanaModificacion::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(51, 332);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Size = System::Drawing::Size(145, 34);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Nuevo Nombre:";
			this->label9->Click += gcnew System::EventHandler(this, &VentanaModificacion::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(51, 298);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Size = System::Drawing::Size(110, 34);
			this->label8->TabIndex = 38;
			this->label8->Text = L"CodCiudad:";
			this->label8->Click += gcnew System::EventHandler(this, &VentanaModificacion::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 264);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label7->Size = System::Drawing::Size(135, 34);
			this->label7->TabIndex = 37;
			this->label7->Text = L"CodVendedor:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 230);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label6->Size = System::Drawing::Size(105, 34);
			this->label6->TabIndex = 36;
			this->label6->Text = L"CodAdmin:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 196);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label5->Size = System::Drawing::Size(108, 34);
			this->label5->TabIndex = 35;
			this->label5->Text = L"CodCliente:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 162);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label4->Size = System::Drawing::Size(131, 34);
			this->label4->TabIndex = 34;
			this->label4->Text = L"CodInventario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 128);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label3->Size = System::Drawing::Size(102, 34);
			this->label3->TabIndex = 33;
			this->label3->Text = L"CodMarca:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 94);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Size = System::Drawing::Size(126, 34);
			this->label2->TabIndex = 32;
			this->label2->Text = L"CodProducto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 60);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label1->Size = System::Drawing::Size(104, 34);
			this->label1->TabIndex = 31;
			this->label1->Text = L"CodPasillo:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label16->Location = System::Drawing::Point(267, 25);
			this->label16->Name = L"label16";
			this->label16->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label16->Size = System::Drawing::Size(136, 35);
			this->label16->TabIndex = 62;
			this->label16->Text = L"Modificación";
			this->label16->Click += gcnew System::EventHandler(this, &VentanaModificacion::label16_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->Location = System::Drawing::Point(455, 63);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(109, 48);
			this->btnBuscar->TabIndex = 63;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &VentanaModificacion::btnBuscar_Click);
			// 
			// VentanaModificacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 605);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->correo);
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
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaModificacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaModificacion";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaModificacion::VentanaModificacion_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void ModificacionPasillo(void)
		{
			this->codPasillo->Enabled = true;
			//this->nombre->Enabled = true;
		}

		void ModificacionProducto(void)
		{
			this->codProducto->Enabled = true;
			//this->nombre->Enabled = true;
		}

		void ModificacionMarca(void)
		{
			this->codMarca->Enabled = true;
			//this->nombre->Enabled = true;
			//this->cantGondola->Enabled = true;
			//this->precio->Enabled = true;

		}

		void ModificacionInventario(void)
		{

			this->codInventario->Enabled = true;
			//this->nombre->Enabled = true;
			//this->cantStock->Enabled = true;
			//this->codCanasta->Enabled = true;
		}

		void ModificacionAdministrador(void)
		{
			this->codAdmin->Enabled = true;
			//this->nombre->Enabled = true;

		}

		void ModificacionCliente(void)
		{
			this->codCliente->Enabled = true;
			//this->nombre->Enabled = true;
			//this->telefono->Enabled = true;
		}

		void ModificacionVendedor(void)
		{
			this->codVendedor->Enabled = true;
			//this->nombre->Enabled = true;
		}

		void ModificacionCiudad(void)
		{
			this->codCiudad->Enabled = true;
			//this->nombre->Enabled = true;
		}



#pragma endregion
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	string codPasilloStr = msclr::interop::marshal_as<string>(this->codPasillo->Text);
	string codProductoStr = msclr::interop::marshal_as<string>(this->codProducto->Text);
	string codMarcaStr = msclr::interop::marshal_as<string>(this->codMarca->Text);
	string codInventarioStr = msclr::interop::marshal_as<string>(this->codInventario->Text);
	string codAdminStr = msclr::interop::marshal_as<string>(this->codAdmin->Text);
	string codClienteStr = msclr::interop::marshal_as<string>(this->codCliente->Text);
	string codVendedorStr = msclr::interop::marshal_as<string>(this->codVendedor->Text);
	string codCiudadStr = msclr::interop::marshal_as<string>(this->codCiudad->Text);
	string nombreStr = msclr::interop::marshal_as<string>(this->nombre->Text);
	string cantGondolaStr = msclr::interop::marshal_as<string>(this->cantGondola->Text);
	string cantStockStr = msclr::interop::marshal_as<string>(this->cantStock->Text);
	string codCanastaStr = msclr::interop::marshal_as<string>(this->codCanasta->Text);
	string precioStr = msclr::interop::marshal_as<string>(this->precio->Text);
	string telefonoStr = msclr::interop::marshal_as<string>(this->telefono->Text);
	string correoStr = msclr::interop::marshal_as<string>(this->correo->Text);

	if (opc == 1) {
		if (!String::IsNullOrEmpty(this->nombre->Text)) {
			pasillosB->modificarNodo(codPasilloStr, nombreStr);

			string pasillo = pasillosB->buscarNodo(pasillosB->raiz, codPasilloStr)->dato;
			String^ pasilloStr = msclr::interop::marshal_as<String^>(pasillo);
			MessageBox::Show("Pasillo modificado: " + pasilloStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 2) {
		if (!String::IsNullOrEmpty(this->nombre->Text)) {
			productosB->modificarNodo(codProductoStr, nombreStr);

			string producto = productosB->buscarNodo(productosB->raiz, codProductoStr)->dato;
			String^ productoStr = msclr::interop::marshal_as<String^>(producto);
			MessageBox::Show("Producto modificado: " + productoStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 3) {
		if (!String::IsNullOrEmpty(this->nombre->Text) && !String::IsNullOrEmpty(this->cantGondola->Text)
				&& !String::IsNullOrEmpty(this->precio->Text)) {
			string nuevoDato = nombreStr + "; " + cantGondolaStr + "; " + precioStr;
			marcasB->modificarNodo(codMarcaStr, nuevoDato);

			string marca = marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato;
			String^ marcaStr = msclr::interop::marshal_as<String^>(marca);
			MessageBox::Show("Marca modificada: " + marcaStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 4) {
		if (!String::IsNullOrEmpty(this->nombre->Text) && !String::IsNullOrEmpty(this->cantStock->Text)
			&& !String::IsNullOrEmpty(this->codCanasta->Text)) {
			string nuevoDato = nombreStr + "; " + cantStockStr + "; " + codCanastaStr;

			if ((codCanastaStr == "1") || (codCanastaStr == "0"))
			{
				inventariosB->modificarNodo(codInventarioStr, nuevoDato);

				string inventario = inventariosB->buscarNodo(inventariosB->raiz, codInventarioStr)->dato;
				String^ inventarioStr = msclr::interop::marshal_as<String^>(inventario);
				MessageBox::Show("Inventario modificado: " + inventarioStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->Hide();
				ventana2->Show();
			}
			else
				MessageBox::Show("Solo puedes ingresar 0 o 1 como código de canasta.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 5) {
		if (!String::IsNullOrEmpty(this->nombre->Text) && !String::IsNullOrEmpty(this->codCiudad->Text) 
				&& !String::IsNullOrEmpty(this->telefono->Text) && !String::IsNullOrEmpty(this->correo->Text)) {
			if (ciudadesB->existeNodo(codCiudadStr)) {
				string nuevoDato = codAdminStr + "; " + nombreStr + "; " + codCiudadStr + "; " + telefonoStr + "; " + correoStr;
				adminsB->modificarNodo(nuevoDato);

				string admin = adminsB->obtenerNodo(codAdminStr);
				String^ adminStr = msclr::interop::marshal_as<String^>(admin);
				MessageBox::Show("Administrador modificado: " + adminStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->Hide();
				ventana2->Show();
			}
			else {
				MessageBox::Show("Ciudad no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 6) {
		if (!String::IsNullOrEmpty(this->nombre->Text) && !String::IsNullOrEmpty(this->codCiudad->Text)
			&& !String::IsNullOrEmpty(this->telefono->Text) && !String::IsNullOrEmpty(this->correo->Text)) {
			if (ciudadesB->existeNodo(codCiudadStr)) {
				string nuevoDato = codClienteStr + "; " + nombreStr + "; " + codCiudadStr + "; " + telefonoStr + "; " + correoStr;
				clientesB->modificarNodo(nuevoDato);

				string cliente = clientesB->obtenerNodo(codClienteStr);
				String^ clienteStr = msclr::interop::marshal_as<String^>(cliente);
				MessageBox::Show("Cliente modificado: " + clienteStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->Hide();
				ventana2->Show();
			}
			else {
				MessageBox::Show("Ciudad no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 7) {
		if (!String::IsNullOrEmpty(this->nombre->Text)) {
			string nuevoDato = codVendedorStr + "; " + nombreStr;
			vendedoresB->modificarNodo(nuevoDato);

			string vendedor = vendedoresB->obtenerNodo(codVendedorStr);
			String^ vendedorStr = msclr::interop::marshal_as<String^>(vendedor);
			MessageBox::Show("Vendedor modificado: " + vendedorStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 8) {
		if (!String::IsNullOrEmpty(this->nombre->Text)) {
			ciudadesB->modificarNodo(codCiudadStr, nombreStr);

			string ciudad = ciudadesB->buscarNodo(ciudadesB->raiz, codCiudadStr)->dato;
			String^ ciudadStr = msclr::interop::marshal_as<String^>(ciudad);
			MessageBox::Show("Ciudad modificada: " + ciudadStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	string codPasilloStr = msclr::interop::marshal_as<string>(this->codPasillo->Text);
	string codProductoStr = msclr::interop::marshal_as<string>(this->codProducto->Text);
	string codMarcaStr = msclr::interop::marshal_as<string>(this->codMarca->Text);
	string codInventarioStr = msclr::interop::marshal_as<string>(this->codInventario->Text);
	string codAdminStr = msclr::interop::marshal_as<string>(this->codAdmin->Text);
	string codClienteStr = msclr::interop::marshal_as<string>(this->codCliente->Text);
	string codVendedorStr = msclr::interop::marshal_as<string>(this->codVendedor->Text);
	string codCiudadStr = msclr::interop::marshal_as<string>(this->codCiudad->Text);

	if (opc == 1) {
		if (!codPasilloStr.empty()) {
			if (pasillosB->existeNodo(msclr::interop::marshal_as<string>(this->codPasillo->Text)))
			{
				string pasillo = pasillosB->buscarNodo(pasillosB->raiz, codPasilloStr)->dato;
				String^ pasilloStr = msclr::interop::marshal_as<String^>(pasillo);
				MessageBox::Show("Pasillo encontrado: " + pasilloStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codPasillo->Enabled = false;
				this->nombre->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else
			{
				MessageBox::Show("Pasillo no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		} else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 2) {
		if (!codProductoStr.empty()) {
			if (productosB->existeNodo(msclr::interop::marshal_as<string>(this->codProducto->Text)))
			{
				string producto = productosB->buscarNodo(productosB->raiz, codProductoStr)->dato;
				String^ pasilloStr = msclr::interop::marshal_as<String^>(producto);
				MessageBox::Show("Producto encontrado: ", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codProducto->Enabled = false;
				this->nombre->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else
			{
				MessageBox::Show("Producto no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 3) {
		if (!codMarcaStr.empty()) {
			if (marcasB->existeNodo(msclr::interop::marshal_as<string>(this->codMarca->Text))) {
				string marca = marcasB->buscarNodo(marcasB->raiz, codMarcaStr)->dato;
				String^ marcaStr = msclr::interop::marshal_as<String^>(marca);
				MessageBox::Show("Marca encontrada: " + marcaStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codMarca->Enabled = false;
				this->nombre->Enabled = true;
				this->cantGondola->Enabled = true;
				this->precio->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else {
				MessageBox::Show("Marca no encontrada.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 4) {
		if (!codInventarioStr.empty()) {
			if (inventariosB->existeNodo(msclr::interop::marshal_as<string>(this->codInventario->Text))) {
				string inventario = inventariosB->buscarNodo(inventariosB->raiz, codInventarioStr)->dato;
				String^ inventarioStr = msclr::interop::marshal_as<String^>(inventario);
				MessageBox::Show("Inventario encontrado: " + inventarioStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codInventario->Enabled = false;
				this->nombre->Enabled = true;
				this->cantStock->Enabled = true;
				this->codCanasta->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else {
				MessageBox::Show("Inventario no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 5) {
		if (!codAdminStr.empty()) {
			if (adminsB->buscar(msclr::interop::marshal_as<string>(this->codAdmin->Text))) {
				string admin = adminsB->obtenerNodo(codAdminStr);
				String^ adminStr = msclr::interop::marshal_as<String^>(admin);
				MessageBox::Show("Administador encontrado: " + adminStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codAdmin->Enabled = false;
				this->nombre->Enabled = true;
				this->codCiudad->Enabled = true;
				this->telefono->Enabled = true;
				this->correo->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else {
				MessageBox::Show("Administador no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 6) {
		if (!codClienteStr.empty()) {
			if (clientesB->buscar(msclr::interop::marshal_as<string>(this->codCliente->Text))) {
				string cliente = clientesB->obtenerNodo(codClienteStr);
				String^ clienteStr = msclr::interop::marshal_as<String^>(cliente);
				MessageBox::Show("Cliente encontrado: " + clienteStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codCliente->Enabled = false;
				this->nombre->Enabled = true;
				this->codCiudad->Enabled = true;
				this->telefono->Enabled = true;
				this->correo->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else {
				MessageBox::Show("Cliente no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 7) {
		if (!codVendedorStr.empty()) {
			if (vendedoresB->buscar(msclr::interop::marshal_as<string>(this->codVendedor->Text))) {
				string vendedor = vendedoresB->obtenerNodo(codVendedorStr);
				String^ vendedorStr = msclr::interop::marshal_as<String^>(vendedor);
				MessageBox::Show("Vendedor encontrado: " + vendedorStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codVendedor->Enabled = false;
				this->nombre->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else {
				MessageBox::Show("Vendedor no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 8) {
		if (!codCiudadStr.empty()) {
			if (ciudadesB->existeNodo(msclr::interop::marshal_as<string>(this->codCiudad->Text))) {
				string ciudad = ciudadesB->buscarNodo(ciudadesB->raiz, codCiudadStr)->dato;
				String^ ciudadStr = msclr::interop::marshal_as<String^>(ciudad);
				MessageBox::Show("Ciudad encontrada: " + ciudadStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->codCiudad->Enabled = false;
				this->nombre->Enabled = true;
				this->btnBuscar->Enabled = false;
				this->btnModificar->Enabled = true;
			}
			else {
				MessageBox::Show("Ciudad no encontrada.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void VentanaModificacion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
};
}
