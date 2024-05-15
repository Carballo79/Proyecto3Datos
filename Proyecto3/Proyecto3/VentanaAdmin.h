#pragma once

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaAdmin
	/// </summary>
	public ref class VentanaAdmin : public System::Windows::Forms::Form
	{
	public:
		VentanaAdmin(void)
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
		~VentanaAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insercionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasillosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ marcasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inventarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasilloMasVisitadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónClienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónInventarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ controlesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verificarInventarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comprasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ revisarGóndolasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactosToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insercionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasillosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marcasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasilloMasVisitadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónInventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->controlesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verificarInventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revisarGóndolasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturaciónToolStripMenuItem, this->controlesToolStripMenuItem, this->acercaDeToolStripMenuItem,
					this->contactosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insercionToolStripMenuItem,
					this->consultasToolStripMenuItem, this->modificacionToolStripMenuItem, this->eliminarToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// insercionToolStripMenuItem
			// 
			this->insercionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->pasillosToolStripMenuItem,
					this->productosToolStripMenuItem, this->marcasToolStripMenuItem, this->inventarioToolStripMenuItem, this->administradorToolStripMenuItem,
					this->clienteToolStripMenuItem, this->vendedorToolStripMenuItem, this->ciudadToolStripMenuItem
			});
			this->insercionToolStripMenuItem->Name = L"insercionToolStripMenuItem";
			this->insercionToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->insercionToolStripMenuItem->Text = L"Inserción";
			// 
			// pasillosToolStripMenuItem
			// 
			this->pasillosToolStripMenuItem->Name = L"pasillosToolStripMenuItem";
			this->pasillosToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->pasillosToolStripMenuItem->Text = L"Pasillo";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->productosToolStripMenuItem->Text = L"Producto";
			// 
			// marcasToolStripMenuItem
			// 
			this->marcasToolStripMenuItem->Name = L"marcasToolStripMenuItem";
			this->marcasToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->marcasToolStripMenuItem->Text = L"Marca";
			// 
			// inventarioToolStripMenuItem
			// 
			this->inventarioToolStripMenuItem->Name = L"inventarioToolStripMenuItem";
			this->inventarioToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->inventarioToolStripMenuItem->Text = L"Inventario";
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			// 
			// vendedorToolStripMenuItem
			// 
			this->vendedorToolStripMenuItem->Name = L"vendedorToolStripMenuItem";
			this->vendedorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->vendedorToolStripMenuItem->Text = L"Vendedor";
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// modificacionToolStripMenuItem
			// 
			this->modificacionToolStripMenuItem->Name = L"modificacionToolStripMenuItem";
			this->modificacionToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->modificacionToolStripMenuItem->Text = L"Modificación";
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->eliminarToolStripMenuItem->Text = L"Eliminación";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->pasilloMasVisitadoToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// pasilloMasVisitadoToolStripMenuItem
			// 
			this->pasilloMasVisitadoToolStripMenuItem->Name = L"pasilloMasVisitadoToolStripMenuItem";
			this->pasilloMasVisitadoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pasilloMasVisitadoToolStripMenuItem->Text = L"Pasillo mas visitado";
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->descuentosToolStripMenuItem,
					this->facturaciónClienteToolStripMenuItem, this->facturaciónInventarioToolStripMenuItem
			});
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// facturaciónClienteToolStripMenuItem
			// 
			this->facturaciónClienteToolStripMenuItem->Name = L"facturaciónClienteToolStripMenuItem";
			this->facturaciónClienteToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->facturaciónClienteToolStripMenuItem->Text = L"Facturación Cliente";
			// 
			// facturaciónInventarioToolStripMenuItem
			// 
			this->facturaciónInventarioToolStripMenuItem->Name = L"facturaciónInventarioToolStripMenuItem";
			this->facturaciónInventarioToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->facturaciónInventarioToolStripMenuItem->Text = L"Facturación Inventario";
			// 
			// controlesToolStripMenuItem
			// 
			this->controlesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->verificarInventarioToolStripMenuItem,
					this->comprasToolStripMenuItem, this->revisarGóndolasToolStripMenuItem
			});
			this->controlesToolStripMenuItem->Name = L"controlesToolStripMenuItem";
			this->controlesToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->controlesToolStripMenuItem->Text = L"Controles";
			// 
			// verificarInventarioToolStripMenuItem
			// 
			this->verificarInventarioToolStripMenuItem->Name = L"verificarInventarioToolStripMenuItem";
			this->verificarInventarioToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->verificarInventarioToolStripMenuItem->Text = L"Verificar inventario";
			// 
			// comprasToolStripMenuItem
			// 
			this->comprasToolStripMenuItem->Name = L"comprasToolStripMenuItem";
			this->comprasToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->comprasToolStripMenuItem->Text = L"Compras";
			// 
			// revisarGóndolasToolStripMenuItem
			// 
			this->revisarGóndolasToolStripMenuItem->Name = L"revisarGóndolasToolStripMenuItem";
			this->revisarGóndolasToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->revisarGóndolasToolStripMenuItem->Text = L"Revisar góndolas";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// contactosToolStripMenuItem
			// 
			this->contactosToolStripMenuItem->Name = L"contactosToolStripMenuItem";
			this->contactosToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->contactosToolStripMenuItem->Text = L"Contactos";
			// 
			// VentanaAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 461);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"VentanaAdmin";
			this->Text = L"VentanaAdmin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
