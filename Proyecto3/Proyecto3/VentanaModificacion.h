#pragma once

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
		VentanaModificacion(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ btnModificar;
	protected:
	private: System::Windows::Forms::TextBox^ Correo;
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
			this->Correo = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// btnModificar
			// 
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(421, 263);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(109, 48);
			this->btnModificar->TabIndex = 61;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			// 
			// Correo
			// 
			this->Correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Correo->Location = System::Drawing::Point(201, 534);
			this->Correo->Name = L"Correo";
			this->Correo->Size = System::Drawing::Size(200, 22);
			this->Correo->TabIndex = 60;
			// 
			// telefono
			// 
			this->telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefono->Location = System::Drawing::Point(201, 501);
			this->telefono->Name = L"telefono";
			this->telefono->Size = System::Drawing::Size(200, 22);
			this->telefono->TabIndex = 59;
			// 
			// codCanasta
			// 
			this->codCanasta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCanasta->Location = System::Drawing::Point(201, 468);
			this->codCanasta->Name = L"codCanasta";
			this->codCanasta->Size = System::Drawing::Size(200, 22);
			this->codCanasta->TabIndex = 58;
			// 
			// cantStock
			// 
			this->cantStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantStock->Location = System::Drawing::Point(201, 435);
			this->cantStock->Name = L"cantStock";
			this->cantStock->Size = System::Drawing::Size(200, 22);
			this->cantStock->TabIndex = 57;
			// 
			// codPasillo
			// 
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(201, 72);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 22);
			this->codPasillo->TabIndex = 56;
			// 
			// codProducto
			// 
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(201, 101);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 22);
			this->codProducto->TabIndex = 55;
			// 
			// codMarca
			// 
			this->codMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codMarca->Location = System::Drawing::Point(201, 138);
			this->codMarca->Name = L"codMarca";
			this->codMarca->Size = System::Drawing::Size(200, 22);
			this->codMarca->TabIndex = 54;
			// 
			// codInventario
			// 
			this->codInventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codInventario->Location = System::Drawing::Point(201, 171);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(200, 22);
			this->codInventario->TabIndex = 53;
			// 
			// codCliente
			// 
			this->codCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCliente->Location = System::Drawing::Point(201, 204);
			this->codCliente->Name = L"codCliente";
			this->codCliente->Size = System::Drawing::Size(200, 22);
			this->codCliente->TabIndex = 52;
			// 
			// codAdmin
			// 
			this->codAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codAdmin->Location = System::Drawing::Point(201, 234);
			this->codAdmin->Name = L"codAdmin";
			this->codAdmin->Size = System::Drawing::Size(200, 22);
			this->codAdmin->TabIndex = 51;
			// 
			// codVendedor
			// 
			this->codVendedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codVendedor->Location = System::Drawing::Point(201, 263);
			this->codVendedor->Name = L"codVendedor";
			this->codVendedor->Size = System::Drawing::Size(200, 22);
			this->codVendedor->TabIndex = 50;
			// 
			// codCiudad
			// 
			this->codCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCiudad->Location = System::Drawing::Point(201, 296);
			this->codCiudad->Name = L"codCiudad";
			this->codCiudad->Size = System::Drawing::Size(200, 22);
			this->codCiudad->TabIndex = 49;
			// 
			// nombre
			// 
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->Location = System::Drawing::Point(201, 329);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(200, 22);
			this->nombre->TabIndex = 48;
			// 
			// cantGondola
			// 
			this->cantGondola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantGondola->Location = System::Drawing::Point(201, 362);
			this->cantGondola->Name = L"cantGondola";
			this->cantGondola->Size = System::Drawing::Size(200, 22);
			this->cantGondola->TabIndex = 47;
			// 
			// precio
			// 
			this->precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio->Location = System::Drawing::Point(201, 402);
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
			this->label15->Size = System::Drawing::Size(73, 34);
			this->label15->TabIndex = 45;
			this->label15->Text = L"Correo:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(51, 502);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label14->Size = System::Drawing::Size(90, 34);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Teléfono:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(51, 468);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label13->Size = System::Drawing::Size(117, 34);
			this->label13->TabIndex = 43;
			this->label13->Text = L"CodCanasta:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(51, 434);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label12->Size = System::Drawing::Size(99, 34);
			this->label12->TabIndex = 42;
			this->label12->Text = L"CantStock:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(51, 400);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label11->Size = System::Drawing::Size(69, 34);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Precio:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(51, 366);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label10->Size = System::Drawing::Size(125, 34);
			this->label10->TabIndex = 40;
			this->label10->Text = L"CantGondola:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(51, 332);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Size = System::Drawing::Size(84, 34);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Nombre:";
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
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(231, 20);
			this->label16->Name = L"label16";
			this->label16->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label16->Size = System::Drawing::Size(116, 34);
			this->label16->TabIndex = 62;
			this->label16->Text = L"Modificacion";
			this->label16->Click += gcnew System::EventHandler(this, &VentanaModificacion::label16_Click);
			// 
			// VentanaModificacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 605);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btnModificar);
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
			this->Name = L"VentanaModificacion";
			this->Text = L"VentanaModificacion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
