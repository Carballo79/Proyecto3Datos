#pragma once

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaContacto
	/// </summary>
	public ref class VentanaContacto : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;

		VentanaContacto(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaContacto(Form^ ventana)
		{
			ventana2 = ventana;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaContacto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::Label^ avisoNombre;
	private: System::Windows::Forms::Label^ avisoCorreo;
	private: System::Windows::Forms::Label^ avisoNumero;
	private: System::Windows::Forms::Button^ btnEnviar;
	private: System::Windows::Forms::TextBox^ txtComentario;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->avisoNombre = (gcnew System::Windows::Forms::Label());
			this->avisoCorreo = (gcnew System::Windows::Forms::Label());
			this->avisoNumero = (gcnew System::Windows::Forms::Label());
			this->btnEnviar = (gcnew System::Windows::Forms::Button());
			this->txtComentario = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(39, 264);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 14);
			this->label8->TabIndex = 25;
			this->label8->Text = L"(Opcional)";
			// 
			// avisoNombre
			// 
			this->avisoNombre->AutoSize = true;
			this->avisoNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->avisoNombre->Location = System::Drawing::Point(128, 59);
			this->avisoNombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->avisoNombre->Name = L"avisoNombre";
			this->avisoNombre->Size = System::Drawing::Size(0, 13);
			this->avisoNombre->TabIndex = 24;
			// 
			// avisoCorreo
			// 
			this->avisoCorreo->AutoSize = true;
			this->avisoCorreo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->avisoCorreo->Location = System::Drawing::Point(128, 110);
			this->avisoCorreo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->avisoCorreo->Name = L"avisoCorreo";
			this->avisoCorreo->Size = System::Drawing::Size(0, 13);
			this->avisoCorreo->TabIndex = 23;
			// 
			// avisoNumero
			// 
			this->avisoNumero->AutoSize = true;
			this->avisoNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->avisoNumero->Location = System::Drawing::Point(128, 163);
			this->avisoNumero->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->avisoNumero->Name = L"avisoNumero";
			this->avisoNumero->Size = System::Drawing::Size(0, 13);
			this->avisoNumero->TabIndex = 22;
			// 
			// btnEnviar
			// 
			this->btnEnviar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnviar->Location = System::Drawing::Point(174, 310);
			this->btnEnviar->Margin = System::Windows::Forms::Padding(2);
			this->btnEnviar->Name = L"btnEnviar";
			this->btnEnviar->Size = System::Drawing::Size(82, 40);
			this->btnEnviar->TabIndex = 21;
			this->btnEnviar->Text = L"Enviar";
			this->btnEnviar->UseVisualStyleBackColor = true;
			this->btnEnviar->Click += gcnew System::EventHandler(this, &VentanaContacto::btnEnviar_Click);
			// 
			// txtComentario
			// 
			this->txtComentario->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtComentario->Location = System::Drawing::Point(145, 197);
			this->txtComentario->Margin = System::Windows::Forms::Padding(2);
			this->txtComentario->Multiline = true;
			this->txtComentario->Name = L"txtComentario";
			this->txtComentario->Size = System::Drawing::Size(230, 68);
			this->txtComentario->TabIndex = 20;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTelefono->Location = System::Drawing::Point(145, 143);
			this->txtTelefono->Margin = System::Windows::Forms::Padding(2);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(155, 27);
			this->txtTelefono->TabIndex = 19;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCorreo->Location = System::Drawing::Point(145, 90);
			this->txtCorreo->Margin = System::Windows::Forms::Padding(2);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(155, 27);
			this->txtCorreo->TabIndex = 18;
			// 
			// txtNombre
			// 
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(145, 39);
			this->txtNombre->Margin = System::Windows::Forms::Padding(2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(155, 27);
			this->txtNombre->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 243);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Comentario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 143);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Telefono:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 90);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 19);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Correo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 39);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 19);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Nombre:";
			// 
			// VentanaContacto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 381);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->avisoNombre);
			this->Controls->Add(this->avisoCorreo);
			this->Controls->Add(this->avisoNumero);
			this->Controls->Add(this->btnEnviar);
			this->Controls->Add(this->txtComentario);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtCorreo);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaContacto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaContacto";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaContacto::VentanaContacto_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void VentanaContacto_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
private: System::Void btnEnviar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = this->txtNombre->Text;
	String^ correo = this->txtCorreo->Text;
	String^ telefono = this->txtTelefono->Text;
	String^ comentario = this->txtComentario->Text;
	
	if (!String::IsNullOrEmpty(nombre) && !String::IsNullOrEmpty(correo) && !String::IsNullOrEmpty(telefono)) {
		MessageBox::Show("Contacto guardado con exitosamente", "Informacion de contacto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Close();
	}
	else
	{
		MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
