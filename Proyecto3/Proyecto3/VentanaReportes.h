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
	/// Summary for VentanaReportes
	/// </summary>
	public ref class VentanaReportes : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		int opc;

		VentanaReportes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaReportes(Form^ ventana, int _opc)
		{
			ventana2 = ventana;
			opc = _opc;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			if (opc == 1)
			{
				productosPorPasillo();
			}
			if (opc == 2)
			{
				marcasPorProducto();
			}
			if (opc == 3)
			{
				productosPorPasilloMasVendidos();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaReportes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::Button^ btnConsultar;
	private: System::Windows::Forms::TextBox^ codPasillo;
	private: System::Windows::Forms::TextBox^ codProducto;


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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->codPasillo = (gcnew System::Windows::Forms::TextBox());
			this->codProducto = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(243, 35);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Size = System::Drawing::Size(98, 35);
			this->label9->TabIndex = 74;
			this->label9->Text = L"Reportes";
			// 
			// btnConsultar
			// 
			this->btnConsultar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultar->Location = System::Drawing::Point(410, 102);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(109, 48);
			this->btnConsultar->TabIndex = 73;
			this->btnConsultar->Text = L"Generar";
			this->btnConsultar->UseVisualStyleBackColor = true;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &VentanaReportes::btnConsultar_Click);
			// 
			// codPasillo
			// 
			this->codPasillo->Enabled = false;
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(172, 85);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 22);
			this->codPasillo->TabIndex = 72;
			// 
			// codProducto
			// 
			this->codProducto->Enabled = false;
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(172, 119);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 22);
			this->codProducto->TabIndex = 71;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 116);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Size = System::Drawing::Size(126, 34);
			this->label2->TabIndex = 64;
			this->label2->Text = L"CodProducto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 82);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label1->Size = System::Drawing::Size(104, 34);
			this->label1->TabIndex = 63;
			this->label1->Text = L"CodPasillo:";
			// 
			// VentanaReportes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(553, 176);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->codPasillo);
			this->Controls->Add(this->codProducto);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaReportes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"VentanaReportes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaReportes::VentanaReportes_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void productosPorPasillo(void)
		{
			this->codPasillo->Enabled = true;
			this->codProducto->Enabled = false;
		}

		void marcasPorProducto(void)
		{
			this->codPasillo->Enabled = true;
			this->codProducto->Enabled = true;
		}

		void productosPorPasilloMasVendidos(void)
		{
			this->codPasillo->Enabled = true;
			this->codProducto->Enabled = false;
		}

#pragma endregion
	private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
		string codPasilloStr = msclr::interop::marshal_as<string>(this->codPasillo->Text);
		string codProductoStr = msclr::interop::marshal_as<string>(this->codProducto->Text);

		if (opc == 1)
		{
			productosB->productosPorPasillo(codPasilloStr);
			MessageBox::Show("Reporte generado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}

		if (opc == 2)
		{
			marcasB->marcasPorProducto(codPasilloStr, codProductoStr);

			MessageBox::Show("Reporte generado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}

		if (opc == 3)
		{
			comprasClientes->productosPorPasilloMasVendidos(codPasilloStr);

			MessageBox::Show("Reporte generado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();
			ventana2->Show();
		}
	}
private: System::Void VentanaReportes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
};
}
