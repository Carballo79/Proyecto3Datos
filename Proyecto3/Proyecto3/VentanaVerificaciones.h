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
	/// Resumen de VentanaVerificaciones
	/// </summary>
	public ref class VentanaVerificaciones : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		int opc;
		VentanaVerificaciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		VentanaVerificaciones(Form^ ventana, int _opc)
		{
			ventana2 = ventana;
			opc = _opc;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			if (opc == 1)
			{
				VerificarGondolas();
			}
			if (opc == 2)
			{
				VerificarInventarios();
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaVerificaciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnVerificarInventarios;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnVerificarGondolas;

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
			this->btnVerificarInventarios = (gcnew System::Windows::Forms::Button());
			this->btnVerificarGondolas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnVerificarInventarios
			// 
			this->btnVerificarInventarios->Enabled = false;
			this->btnVerificarInventarios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnVerificarInventarios->Location = System::Drawing::Point(118, 88);
			this->btnVerificarInventarios->Name = L"btnVerificarInventarios";
			this->btnVerificarInventarios->Size = System::Drawing::Size(237, 31);
			this->btnVerificarInventarios->TabIndex = 58;
			this->btnVerificarInventarios->Text = L"Verificar Inventarios";
			this->btnVerificarInventarios->UseVisualStyleBackColor = true;
			this->btnVerificarInventarios->Click += gcnew System::EventHandler(this, &VentanaVerificaciones::btnVerificarInventarios_Click);
			// 
			// btnVerificarGondolas
			// 
			this->btnVerificarGondolas->Enabled = false;
			this->btnVerificarGondolas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnVerificarGondolas->Location = System::Drawing::Point(118, 35);
			this->btnVerificarGondolas->Name = L"btnVerificarGondolas";
			this->btnVerificarGondolas->Size = System::Drawing::Size(237, 31);
			this->btnVerificarGondolas->TabIndex = 59;
			this->btnVerificarGondolas->Text = L"Verificar Gondolas";
			this->btnVerificarGondolas->UseVisualStyleBackColor = true;
			this->btnVerificarGondolas->Click += gcnew System::EventHandler(this, &VentanaVerificaciones::btnVerificarGondolas_Click);
			// 
			// VentanaVerificaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 148);
			this->Controls->Add(this->btnVerificarGondolas);
			this->Controls->Add(this->btnVerificarInventarios);
			this->Name = L"VentanaVerificaciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaVerificaciones";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaVerificaciones::VentanaVerificaciones_FormClosing);
			this->ResumeLayout(false);

		}
		void VerificarGondolas(void)
		{
			this->btnVerificarGondolas->Enabled = true;
		}

		void VerificarInventarios(void)
		{
			this->btnVerificarInventarios->Enabled = true;
		}

#pragma endregion
	private: System::Void btnVerificarGondolas_Click(System::Object^ sender, System::EventArgs^ e) {
		string mensaje = "";
		marcasB->recorrerMarcas(marcasB->raiz,mensaje);
		String^ mensajeFinal = gcnew String(mensaje.c_str());
		MessageBox::Show(mensajeFinal, "Resultado del Recorrido", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void btnVerificarInventarios_Click(System::Object^ sender, System::EventArgs^ e) {
		///////////////////CODIGO
	}
	private: System::Void VentanaVerificaciones_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->Hide();
		ventana2->Show();
	}
};
}
