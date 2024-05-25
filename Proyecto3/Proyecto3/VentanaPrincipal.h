#pragma once

#include <string>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>
#include "VentanaSupermercado.h"
#include "Utilidades.h"

namespace Proyecto3 {

	ArbolBB pasillosA, ciudadesA;
	ArbolAVL productosA;
	ArbolRN marcasA;
	ArbolAA inventariosA;
	ArbolB clientesA, adminsA, vendedoresA;

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
		int op;

		VentanaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			pasillosA.crearPasillos();
			productosA.crearProductos(pasillosA);
			marcasA.crearMarcas(pasillosA, productosA);
			inventariosA.crearInventarios(pasillosA, productosA, marcasA);
			ciudadesA.crearCiudades();
			clientesA.crearClientes(ciudadesA);
			adminsA.crearAdmins(ciudadesA);
			vendedoresA.crearVendedores();
		}

		void ReiniciarComponentes(void) {
			// Reinicia los componentes de la ventana
			this->stringCedula->Text = "";
			this->mensaje->Text = "";
			this->btnAdmin->Checked = false;
			this->btnCliente->Checked = false;
			this->btnVendedor->Checked = false;
			this->panel1->Visible = true;
			this->panel2->Visible = false;
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
	public: System::Windows::Forms::TextBox^ stringCedula;
	protected:


	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ mensaje;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::RadioButton^ btnVendedor;
	private: System::Windows::Forms::RadioButton^ btnCliente;
	private: System::Windows::Forms::RadioButton^ btnAdmin;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnCteReg;
	private: System::Windows::Forms::Button^ btnCteNoReg;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaPrincipal::typeid));
			this->stringCedula = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->mensaje = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnVendedor = (gcnew System::Windows::Forms::RadioButton());
			this->btnCliente = (gcnew System::Windows::Forms::RadioButton());
			this->btnAdmin = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnCteReg = (gcnew System::Windows::Forms::Button());
			this->btnCteNoReg = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// stringCedula
			// 
			this->stringCedula->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stringCedula->Location = System::Drawing::Point(12, 40);
			this->stringCedula->Name = L"stringCedula";
			this->stringCedula->Size = System::Drawing::Size(148, 27);
			this->stringCedula->TabIndex = 4;
			this->stringCedula->TextChanged += gcnew System::EventHandler(this, &VentanaPrincipal::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Digite su cédula:";
			this->label1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(47, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 77);
			this->button2->TabIndex = 11;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::button2_Click);
			// 
			// mensaje
			// 
			this->mensaje->AutoSize = true;
			this->mensaje->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mensaje->ForeColor = System::Drawing::Color::Brown;
			this->mensaje->Location = System::Drawing::Point(11, 75);
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(0, 18);
			this->mensaje->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(120, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 33);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Inicio de sesión";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(44, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 23);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Tipo de usuario";
			this->label3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(182, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(95, 95);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->stringCedula);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->mensaje);
			this->panel1->Location = System::Drawing::Point(238, 204);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(173, 202);
			this->panel1->TabIndex = 16;
			// 
			// btnVendedor
			// 
			this->btnVendedor->AutoSize = true;
			this->btnVendedor->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVendedor->Location = System::Drawing::Point(48, 340);
			this->btnVendedor->Name = L"btnVendedor";
			this->btnVendedor->Size = System::Drawing::Size(94, 23);
			this->btnVendedor->TabIndex = 20;
			this->btnVendedor->TabStop = true;
			this->btnVendedor->Text = L"Vendedor";
			this->btnVendedor->UseVisualStyleBackColor = true;
			this->btnVendedor->CheckedChanged += gcnew System::EventHandler(this, &VentanaPrincipal::btnVendedor_CheckedChanged);
			// 
			// btnCliente
			// 
			this->btnCliente->AutoSize = true;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->Location = System::Drawing::Point(48, 311);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(75, 23);
			this->btnCliente->TabIndex = 19;
			this->btnCliente->TabStop = true;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->UseVisualStyleBackColor = true;
			this->btnCliente->CheckedChanged += gcnew System::EventHandler(this, &VentanaPrincipal::btnCliente_CheckedChanged);
			// 
			// btnAdmin
			// 
			this->btnAdmin->AutoSize = true;
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->Location = System::Drawing::Point(48, 282);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(127, 23);
			this->btnAdmin->TabIndex = 18;
			this->btnAdmin->TabStop = true;
			this->btnAdmin->Text = L"Administrador";
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->CheckedChanged += gcnew System::EventHandler(this, &VentanaPrincipal::btnAdmin_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnCteReg);
			this->panel2->Controls->Add(this->btnCteNoReg);
			this->panel2->Location = System::Drawing::Point(216, 277);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 93);
			this->panel2->TabIndex = 21;
			this->panel2->Visible = false;
			// 
			// btnCteReg
			// 
			this->btnCteReg->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCteReg->Location = System::Drawing::Point(17, 7);
			this->btnCteReg->Name = L"btnCteReg";
			this->btnCteReg->Size = System::Drawing::Size(166, 33);
			this->btnCteReg->TabIndex = 23;
			this->btnCteReg->Text = L"Cliente registrado";
			this->btnCteReg->UseVisualStyleBackColor = true;
			this->btnCteReg->Click += gcnew System::EventHandler(this, &VentanaPrincipal::btnCteReg_Click);
			// 
			// btnCteNoReg
			// 
			this->btnCteNoReg->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCteNoReg->Location = System::Drawing::Point(17, 54);
			this->btnCteNoReg->Name = L"btnCteNoReg";
			this->btnCteNoReg->Size = System::Drawing::Size(166, 33);
			this->btnCteNoReg->TabIndex = 24;
			this->btnCteNoReg->Text = L"Cliente no registrado";
			this->btnCteNoReg->UseVisualStyleBackColor = true;
			this->btnCteNoReg->Click += gcnew System::EventHandler(this, &VentanaPrincipal::btnCteNoReg_Click);
			// 
			// VentanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(444, 431);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnVendedor);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnAdmin);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"VentanaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaPrincipal";
			this->Load += gcnew System::EventHandler(this, &VentanaPrincipal::VentanaPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void VistaAdmin(void) {

		}

		void VistaCteReg(void) {

		}

		void VistaCteNoReg(void) {

		}

		void VistaVendedor(void) {

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
		string strCedula = msclr::interop::marshal_as<string>(stringCedula);
		
		if (btnCliente->Checked && !btnAdmin->Checked && !btnVendedor->Checked) {
			if (clientesA.buscar(strCedula)) {
				this->Hide();
				this->ReiniciarComponentes();
				VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado(this, 2, pasillosA, productosA, marcasA,
					inventariosA, adminsA, clientesA, vendedoresA, ciudadesA);
				ventanaSuper->ShowDialog();
			} else {
				this->mensaje->Text = "La cédula no existe";
			}
		} else if (!btnCliente->Checked && btnAdmin->Checked && !btnVendedor->Checked) {
			if (adminsA.buscar(strCedula)) {
				this->Hide();
				this->ReiniciarComponentes();
				VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado(this, 1, pasillosA, productosA, marcasA,
					inventariosA, adminsA, clientesA, vendedoresA, ciudadesA);
				ventanaSuper->ShowDialog();
			} else {
				this->mensaje->Text = "La cédula no existe";
			}
		} else if (!btnCliente->Checked && !btnAdmin->Checked && btnVendedor->Checked) {
			if (vendedoresA.buscar(strCedula)) {
				this->Hide();
				this->ReiniciarComponentes();
				VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado(this, 4, pasillosA, productosA, marcasA,
					inventariosA, adminsA, clientesA, vendedoresA, ciudadesA);
				ventanaSuper->ShowDialog();
			} else {
				this->mensaje->Text = "La cédula no existe";
			}
		}
	} else {
		this->mensaje->Text = "Campo vacío";
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCliente_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//while (this->btnCteReg->MouseClick == false)
	this->panel1->Visible = false;
	this->panel2->Visible = true;

}
private: System::Void btnAdmin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->stringCedula->Text = "";
	this->mensaje->Text = "";
	this->panel1->Visible = true;
	this->panel2->Visible = false;
}
private: System::Void btnVendedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->stringCedula->Text = "";
	this->mensaje->Text = "";
	this->panel1->Visible = true;
	this->panel2->Visible = false;
}
private: System::Void btnCteReg_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stringCedula->Text = "";
	this->mensaje->Text = "";
	this->panel1->Visible = true;
	this->panel2->Visible = false;
}
private: System::Void btnCteNoReg_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->ReiniciarComponentes();
	VentanaSupermercado^ ventanaSuper = gcnew VentanaSupermercado(this, 3, pasillosA, productosA, marcasA,
		inventariosA, adminsA, clientesA, vendedoresA, ciudadesA);
	ventanaSuper->ShowDialog();
}
};
}
