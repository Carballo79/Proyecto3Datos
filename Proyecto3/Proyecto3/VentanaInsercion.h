#pragma once

#include "VentanaSupermercado.h"

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
	public:
		VentanaInsercion(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label1->Size = System::Drawing::Size(107, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CodPasillo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 33);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Size = System::Drawing::Size(126, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CodProducto:";
			this->label2->Click += gcnew System::EventHandler(this, &VentanaInsercion::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 66);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label3->Size = System::Drawing::Size(102, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CodMarca:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 99);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label4->Size = System::Drawing::Size(131, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"CodInventario:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 132);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label5->Size = System::Drawing::Size(107, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"CodCliente:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, 165);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label6->Size = System::Drawing::Size(104, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"CodAdmin:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Top;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 198);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label7->Size = System::Drawing::Size(130, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"CodVendedor:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Top;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 231);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Size = System::Drawing::Size(108, 33);
			this->label8->TabIndex = 7;
			this->label8->Text = L"CodCiudad:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 264);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Size = System::Drawing::Size(84, 33);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Nombre:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Top;
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(0, 297);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label10->Size = System::Drawing::Size(124, 33);
			this->label10->TabIndex = 9;
			this->label10->Text = L"CantGondola:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(0, 330);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label11->Size = System::Drawing::Size(69, 33);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Precio:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Top;
			this->label12->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(0, 363);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label12->Size = System::Drawing::Size(101, 33);
			this->label12->TabIndex = 11;
			this->label12->Text = L"CantStock:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Top;
			this->label13->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(0, 396);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label13->Size = System::Drawing::Size(117, 33);
			this->label13->TabIndex = 12;
			this->label13->Text = L"CodCanasta:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Top;
			this->label14->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(0, 429);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label14->Size = System::Drawing::Size(89, 33);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Teléfono:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Top;
			this->label15->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(0, 462);
			this->label15->Name = L"label15";
			this->label15->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label15->Size = System::Drawing::Size(71, 33);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Correo:";
			// 
			// precio
			// 
			this->precio->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio->Location = System::Drawing::Point(155, 340);
			this->precio->Name = L"precio";
			this->precio->Size = System::Drawing::Size(200, 23);
			this->precio->TabIndex = 15;
			// 
			// cantGondola
			// 
			this->cantGondola->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantGondola->Location = System::Drawing::Point(155, 300);
			this->cantGondola->Name = L"cantGondola";
			this->cantGondola->Size = System::Drawing::Size(200, 23);
			this->cantGondola->TabIndex = 16;
			// 
			// nombre
			// 
			this->nombre->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->Location = System::Drawing::Point(155, 267);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(200, 23);
			this->nombre->TabIndex = 17;
			// 
			// codCiudad
			// 
			this->codCiudad->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCiudad->Location = System::Drawing::Point(155, 234);
			this->codCiudad->Name = L"codCiudad";
			this->codCiudad->Size = System::Drawing::Size(200, 23);
			this->codCiudad->TabIndex = 18;
			// 
			// codVendedor
			// 
			this->codVendedor->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codVendedor->Location = System::Drawing::Point(155, 201);
			this->codVendedor->Name = L"codVendedor";
			this->codVendedor->Size = System::Drawing::Size(200, 23);
			this->codVendedor->TabIndex = 19;
			// 
			// codAdmin
			// 
			this->codAdmin->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codAdmin->Location = System::Drawing::Point(155, 172);
			this->codAdmin->Name = L"codAdmin";
			this->codAdmin->Size = System::Drawing::Size(200, 23);
			this->codAdmin->TabIndex = 20;
			// 
			// codCliente
			// 
			this->codCliente->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCliente->Location = System::Drawing::Point(155, 142);
			this->codCliente->Name = L"codCliente";
			this->codCliente->Size = System::Drawing::Size(200, 23);
			this->codCliente->TabIndex = 21;
			// 
			// codInventario
			// 
			this->codInventario->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codInventario->Location = System::Drawing::Point(155, 109);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(200, 23);
			this->codInventario->TabIndex = 22;
			// 
			// codPasillo
			// 
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(155, 10);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 23);
			this->codPasillo->TabIndex = 25;
			// 
			// codProducto
			// 
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(155, 39);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 23);
			this->codProducto->TabIndex = 24;
			// 
			// codMarca
			// 
			this->codMarca->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codMarca->Location = System::Drawing::Point(155, 76);
			this->codMarca->Name = L"codMarca";
			this->codMarca->Size = System::Drawing::Size(200, 23);
			this->codMarca->TabIndex = 23;
			// 
			// cantStock
			// 
			this->cantStock->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantStock->Location = System::Drawing::Point(155, 373);
			this->cantStock->Name = L"cantStock";
			this->cantStock->Size = System::Drawing::Size(200, 23);
			this->cantStock->TabIndex = 26;
			// 
			// codCanasta
			// 
			this->codCanasta->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCanasta->Location = System::Drawing::Point(155, 406);
			this->codCanasta->Name = L"codCanasta";
			this->codCanasta->Size = System::Drawing::Size(200, 23);
			this->codCanasta->TabIndex = 27;
			// 
			// telefono
			// 
			this->telefono->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefono->Location = System::Drawing::Point(155, 439);
			this->telefono->Name = L"telefono";
			this->telefono->Size = System::Drawing::Size(200, 23);
			this->telefono->TabIndex = 28;
			// 
			// Correo
			// 
			this->Correo->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Correo->Location = System::Drawing::Point(155, 472);
			this->Correo->Name = L"Correo";
			this->Correo->Size = System::Drawing::Size(200, 23);
			this->Correo->TabIndex = 29;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->Location = System::Drawing::Point(422, 424);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(109, 48);
			this->btnIngresar->TabIndex = 30;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &VentanaInsercion::btnIngresar_Click);
			// 
			// VentanaInsercion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 527);
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
			this->Name = L"VentanaInsercion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaInsercion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		/*VentanaInsercion^ ventanaInsercion = gcnew VentanaInsercion();

		String^ valorObtenido = ventanaInsercion->Valor;
		
		if (valorObtenido == "pasillos") {
			MessageBox::Show(L"HOLA");
		}*/
	}
};
}
