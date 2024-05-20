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
	/// Summary for VentanaConsultas
	/// </summary>
	public ref class VentanaConsultas : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		int opc;

		VentanaConsultas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaConsultas(Form^ ventana, int _opc, ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
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
				ConsultarPasillo();
			}
			if (opc == 2)
			{
				ConsultarProducto();
			}
			if (opc == 3)
			{
				ConsultarMarca();
			}
			if (opc == 4)
			{
				ConsultarInventario();
			}
			if (opc == 5)
			{
				ConsultarAdministrador();
			}
			if (opc == 6)
			{
				ConsultarCliente();
			}
			if (opc == 7)
			{
				ConsultarVendedor();
			}
			if (opc == 8)
			{
				ConsultarCiudad();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaConsultas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnConsultar;
	protected:
	private: System::Windows::Forms::TextBox^ codPasillo;
	private: System::Windows::Forms::TextBox^ codProducto;
	private: System::Windows::Forms::TextBox^ codMarca;
	private: System::Windows::Forms::TextBox^ codInventario;
	private: System::Windows::Forms::TextBox^ codCliente;
	private: System::Windows::Forms::TextBox^ codAdmin;
	private: System::Windows::Forms::TextBox^ codVendedor;
	private: System::Windows::Forms::TextBox^ codCiudad;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;

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
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->codPasillo = (gcnew System::Windows::Forms::TextBox());
			this->codProducto = (gcnew System::Windows::Forms::TextBox());
			this->codMarca = (gcnew System::Windows::Forms::TextBox());
			this->codInventario = (gcnew System::Windows::Forms::TextBox());
			this->codCliente = (gcnew System::Windows::Forms::TextBox());
			this->codAdmin = (gcnew System::Windows::Forms::TextBox());
			this->codVendedor = (gcnew System::Windows::Forms::TextBox());
			this->codCiudad = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnConsultar
			// 
			this->btnConsultar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultar->Location = System::Drawing::Point(363, 163);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(109, 48);
			this->btnConsultar->TabIndex = 61;
			this->btnConsultar->Text = L"Consultar";
			this->btnConsultar->UseVisualStyleBackColor = true;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &VentanaConsultas::btnConsultar_Click);
			// 
			// codPasillo
			// 
			this->codPasillo->Enabled = false;
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(157, 61);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 22);
			this->codPasillo->TabIndex = 56;
			// 
			// codProducto
			// 
			this->codProducto->Enabled = false;
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(157, 95);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 22);
			this->codProducto->TabIndex = 55;
			// 
			// codMarca
			// 
			this->codMarca->Enabled = false;
			this->codMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codMarca->Location = System::Drawing::Point(157, 129);
			this->codMarca->Name = L"codMarca";
			this->codMarca->Size = System::Drawing::Size(200, 22);
			this->codMarca->TabIndex = 54;
			// 
			// codInventario
			// 
			this->codInventario->Enabled = false;
			this->codInventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codInventario->Location = System::Drawing::Point(157, 163);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(200, 22);
			this->codInventario->TabIndex = 53;
			// 
			// codCliente
			// 
			this->codCliente->Enabled = false;
			this->codCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCliente->Location = System::Drawing::Point(157, 197);
			this->codCliente->Name = L"codCliente";
			this->codCliente->Size = System::Drawing::Size(200, 22);
			this->codCliente->TabIndex = 52;
			// 
			// codAdmin
			// 
			this->codAdmin->Enabled = false;
			this->codAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codAdmin->Location = System::Drawing::Point(157, 231);
			this->codAdmin->Name = L"codAdmin";
			this->codAdmin->Size = System::Drawing::Size(200, 22);
			this->codAdmin->TabIndex = 51;
			// 
			// codVendedor
			// 
			this->codVendedor->Enabled = false;
			this->codVendedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codVendedor->Location = System::Drawing::Point(157, 265);
			this->codVendedor->Name = L"codVendedor";
			this->codVendedor->Size = System::Drawing::Size(200, 22);
			this->codVendedor->TabIndex = 50;
			// 
			// codCiudad
			// 
			this->codCiudad->Enabled = false;
			this->codCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCiudad->Location = System::Drawing::Point(157, 299);
			this->codCiudad->Name = L"codCiudad";
			this->codCiudad->Size = System::Drawing::Size(200, 22);
			this->codCiudad->TabIndex = 49;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(15, 296);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Size = System::Drawing::Size(110, 34);
			this->label8->TabIndex = 38;
			this->label8->Text = L"CodCiudad:";
			this->label8->Click += gcnew System::EventHandler(this, &VentanaConsultas::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 262);
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
			this->label6->Location = System::Drawing::Point(15, 228);
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
			this->label5->Location = System::Drawing::Point(15, 194);
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
			this->label4->Location = System::Drawing::Point(15, 160);
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
			this->label3->Location = System::Drawing::Point(15, 126);
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
			this->label2->Location = System::Drawing::Point(15, 92);
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
			this->label1->Location = System::Drawing::Point(15, 58);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label1->Size = System::Drawing::Size(104, 34);
			this->label1->TabIndex = 31;
			this->label1->Text = L"CodPasillo:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(207, 23);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Size = System::Drawing::Size(105, 35);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Consultar";
			// 
			// VentanaConsultas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 439);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->codPasillo);
			this->Controls->Add(this->codProducto);
			this->Controls->Add(this->codMarca);
			this->Controls->Add(this->codInventario);
			this->Controls->Add(this->codCliente);
			this->Controls->Add(this->codAdmin);
			this->Controls->Add(this->codVendedor);
			this->Controls->Add(this->codCiudad);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaConsultas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaConsultas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaConsultas::VentanaConsultas_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void ConsultarPasillo(void)
		{
			this->codPasillo->Enabled = true;
		}

		void ConsultarProducto(void)
		{
			this->codProducto->Enabled = true;
		}

		void ConsultarMarca(void)
		{
			this->codMarca->Enabled = true;
		}

		void ConsultarInventario(void)
		{
			this->codInventario->Enabled = true;
		}

		void ConsultarAdministrador(void)
		{
			this->codAdmin->Enabled = true;

		}

		void ConsultarCliente(void)
		{
			this->codCliente->Enabled = true;
		}

		void ConsultarVendedor(void)
		{
			this->codVendedor->Enabled = true;
		}

		void ConsultarCiudad(void)
		{
			this->codCiudad->Enabled = true;
		}

#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
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

				this->Hide();
				ventana2->Show();
			}
			else
			{
				MessageBox::Show("Pasillo no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Campos sin rellenar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (opc == 2) {
		if (!codProductoStr.empty()) {
			if (productosB->existeNodo(msclr::interop::marshal_as<string>(this->codProducto->Text)))
			{
				string producto = productosB->buscarNodo(productosB->raiz, codProductoStr)->dato;
				String^ productoStr = msclr::interop::marshal_as<String^>(producto);
				MessageBox::Show("Producto encontrado: " + productoStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->Hide();
				ventana2->Show();
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

				this->Hide();
				ventana2->Show();
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

				this->Hide();
				ventana2->Show();
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

				this->Hide();
				ventana2->Show();
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

				this->Hide();
				ventana2->Show();
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

				this->Hide();
				ventana2->Show();
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

				this->Hide();
				ventana2->Show();
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
private: System::Void VentanaConsultas_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
};
}
