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
	/// Resumen de VentanaEliminación
	/// </summary>
	public ref class VentanaEliminación : public System::Windows::Forms::Form
	{
	public:
		Form^ ventana2;
		int opc;

		VentanaEliminación(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		VentanaEliminación(Form^ ventana, int _opc, ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
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
				EliminarPasillo();
			}
			if (opc == 2)
			{
				EliminarProducto();
			}
			if (opc == 3)
			{
				EliminarMarca();
			}
			if (opc == 4)
			{
				EliminarInventario();
			}
			if (opc == 5)
			{
				EliminarAdministrador();
			}
			if (opc == 6)
			{
				EliminarCliente();
			}
			if (opc == 7)
			{
				EliminarVendedor();
			}
			if (opc == 8)
			{
				EliminarCiudad();
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaEliminación()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnEliminar;
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(241, 38);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Size = System::Drawing::Size(91, 35);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Eliminar";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(424, 206);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(109, 48);
			this->btnEliminar->TabIndex = 79;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &VentanaEliminación::btnEliminar_Click);
			// 
			// codPasillo
			// 
			this->codPasillo->Enabled = false;
			this->codPasillo->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codPasillo->Location = System::Drawing::Point(183, 104);
			this->codPasillo->Name = L"codPasillo";
			this->codPasillo->Size = System::Drawing::Size(200, 26);
			this->codPasillo->TabIndex = 78;
			// 
			// codProducto
			// 
			this->codProducto->Enabled = false;
			this->codProducto->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codProducto->Location = System::Drawing::Point(183, 138);
			this->codProducto->Name = L"codProducto";
			this->codProducto->Size = System::Drawing::Size(200, 26);
			this->codProducto->TabIndex = 77;
			// 
			// codMarca
			// 
			this->codMarca->Enabled = false;
			this->codMarca->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codMarca->Location = System::Drawing::Point(183, 172);
			this->codMarca->Name = L"codMarca";
			this->codMarca->Size = System::Drawing::Size(200, 26);
			this->codMarca->TabIndex = 76;
			// 
			// codInventario
			// 
			this->codInventario->Enabled = false;
			this->codInventario->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codInventario->Location = System::Drawing::Point(183, 206);
			this->codInventario->Name = L"codInventario";
			this->codInventario->Size = System::Drawing::Size(200, 26);
			this->codInventario->TabIndex = 75;
			// 
			// codCliente
			// 
			this->codCliente->Enabled = false;
			this->codCliente->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCliente->Location = System::Drawing::Point(183, 240);
			this->codCliente->Name = L"codCliente";
			this->codCliente->Size = System::Drawing::Size(200, 26);
			this->codCliente->TabIndex = 74;
			// 
			// codAdmin
			// 
			this->codAdmin->Enabled = false;
			this->codAdmin->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codAdmin->Location = System::Drawing::Point(183, 274);
			this->codAdmin->Name = L"codAdmin";
			this->codAdmin->Size = System::Drawing::Size(200, 26);
			this->codAdmin->TabIndex = 73;
			// 
			// codVendedor
			// 
			this->codVendedor->Enabled = false;
			this->codVendedor->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codVendedor->Location = System::Drawing::Point(183, 308);
			this->codVendedor->Name = L"codVendedor";
			this->codVendedor->Size = System::Drawing::Size(200, 26);
			this->codVendedor->TabIndex = 72;
			// 
			// codCiudad
			// 
			this->codCiudad->Enabled = false;
			this->codCiudad->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codCiudad->Location = System::Drawing::Point(183, 342);
			this->codCiudad->Name = L"codCiudad";
			this->codCiudad->Size = System::Drawing::Size(200, 26);
			this->codCiudad->TabIndex = 71;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(41, 339);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Size = System::Drawing::Size(108, 33);
			this->label8->TabIndex = 70;
			this->label8->Text = L"CodCiudad:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(41, 305);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label7->Size = System::Drawing::Size(130, 33);
			this->label7->TabIndex = 69;
			this->label7->Text = L"CodVendedor:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(41, 271);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label6->Size = System::Drawing::Size(104, 33);
			this->label6->TabIndex = 68;
			this->label6->Text = L"CodAdmin:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(41, 237);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label5->Size = System::Drawing::Size(107, 33);
			this->label5->TabIndex = 67;
			this->label5->Text = L"CodCliente:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 203);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label4->Size = System::Drawing::Size(131, 33);
			this->label4->TabIndex = 66;
			this->label4->Text = L"CodInventario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 169);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label3->Size = System::Drawing::Size(102, 33);
			this->label3->TabIndex = 65;
			this->label3->Text = L"CodMarca:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 135);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Size = System::Drawing::Size(126, 33);
			this->label2->TabIndex = 64;
			this->label2->Text = L"CodProducto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 101);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label1->Size = System::Drawing::Size(107, 33);
			this->label1->TabIndex = 63;
			this->label1->Text = L"CodPasillo:";
			// 
			// VentanaEliminación
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 416);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnEliminar);
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
			this->Name = L"VentanaEliminación";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaEliminación";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaEliminación::VentanaEliminación_FormClosing);
			this->Load += gcnew System::EventHandler(this, &VentanaEliminación::VentanaEliminación_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void EliminarPasillo(void)
		{
			this->codPasillo->Enabled = true;
		}

		void EliminarProducto(void)
		{
			this->codProducto->Enabled = true;
		}

		void EliminarMarca(void)
		{
			this->codMarca->Enabled = true;
		}

		void EliminarInventario(void)
		{
			this->codInventario->Enabled = true;
		}

		void EliminarAdministrador(void)
		{
			this->codAdmin->Enabled = true;

		}

		void EliminarCliente(void)
		{
			this->codCliente->Enabled = true;
		}

		void EliminarVendedor(void)
		{
			this->codVendedor->Enabled = true;
		}

		void EliminarCiudad(void)
		{
			this->codCiudad->Enabled = true;
		}

#pragma endregion
private: System::Void VentanaEliminación_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana2->Show();
}
private: System::Void VentanaEliminación_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
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
				int cod = stringAInt(codPasilloStr);
				pasillosB->eliminarNodo(cod);
				MessageBox::Show("Pasillo Eliminado: " + pasilloStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				/////////ELIMINAR PRODUCTOS, MARCAS Y INVENTARIOS CON EL PASILLO ELIMINADO////////////////
				productosB->recorrerArbol(productosB->raiz, cod, 0);
				inventariosB->recorrerArbol(inventariosB->raiz, cod, 0);
				marcasB->recorrerArbol(marcasB->raiz, cod, 0);

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
				int cod = stringAInt(codProductoStr);
				productosB->eliminarNodo(productosB->raiz, cod);
				MessageBox::Show("Producto Eliminado: " + productoStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				/////////ELIMINAR MARCAS Y INVENTARIOS CON EL PRODUCTO ELIMINADO/////////////////
				marcasB->recorrerArbol(marcasB->raiz, cod, 1);
				inventariosB->recorrerArbol(inventariosB->raiz, cod, 1);

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
				int cod = stringAInt(codMarcaStr);
				marcasB->eliminarNodo(cod);
				MessageBox::Show("Marca Eliminada: " + marcaStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				/////////ELIMINAR INVENTARIOS CON LA MARCA ELIMINADA/////////////////
				inventariosB->recorrerArbol(inventariosB->raiz, cod, 2);

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
				int cod = stringAInt(codInventarioStr);
				inventariosB->eliminarNodo(cod);

				MessageBox::Show("Inventario Eliminado: " + inventarioStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
				adminsB->eliminar(codAdminStr);
				MessageBox::Show("Administador Eliminado: " + adminStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
				clientesB->eliminar(codClienteStr);
				MessageBox::Show("Cliente Eliminado: " + clienteStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
				vendedoresB->eliminar(codVendedorStr);
				MessageBox::Show("Vendedor Eliminado: " + vendedorStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
				int cod = stringAInt(codCiudadStr);
				ciudadesB->eliminarNodo(cod);
				/////////ELIMINAR ADMINISTRADORES Y CLIENTES CON LA CIUDAD ELIMINADA/////////////////
				adminsB->recorrerArbol(adminsB->raiz, cod);
				clientesB->recorrerArbol(clientesB->raiz, cod);

				MessageBox::Show("Ciudad Eliminada: " + ciudadStr, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
};
}
