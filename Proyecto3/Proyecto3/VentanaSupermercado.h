#pragma once

//#include "ArbolBB.h"
//#include "ArbolAVL.h"
//#include "ArbolRN.h"
//#include "ArbolAA.h"
//#include "ArbolB.h"
//
//#include <msclr/marshal_cppstd.h>

namespace Proyecto3 {

	//ArbolBB* pasillosI;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaSupermercado
	/// </summary>
	public ref class VentanaSupermercado : public System::Windows::Forms::Form
	{
	public:
		VentanaSupermercado(void)
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
		~VentanaSupermercado()
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
	private: System::Windows::Forms::ToolStripMenuItem^ IPasillo;

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
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem18;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem19;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem20;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem21;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem22;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem23;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem24;

	private: System::Windows::Forms::GroupBox^ gBoxInsercion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombre;


	private: System::Windows::Forms::TextBox^ txtCodPasillo;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::Label^ mensaje;


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
			this->IPasillo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marcasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->gBoxInsercion = (gcnew System::Windows::Forms::GroupBox());
			this->mensaje = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCodPasillo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->gBoxInsercion->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(585, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &VentanaSupermercado::menuStrip1_ItemClicked);
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
				this->IPasillo,
					this->productosToolStripMenuItem, this->marcasToolStripMenuItem, this->inventarioToolStripMenuItem, this->administradorToolStripMenuItem,
					this->clienteToolStripMenuItem, this->vendedorToolStripMenuItem, this->ciudadToolStripMenuItem
			});
			this->insercionToolStripMenuItem->Name = L"insercionToolStripMenuItem";
			this->insercionToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->insercionToolStripMenuItem->Text = L"Inserción";
			this->insercionToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::insercionToolStripMenuItem_Click);
			// 
			// IPasillo
			// 
			this->IPasillo->Name = L"IPasillo";
			this->IPasillo->Size = System::Drawing::Size(150, 22);
			this->IPasillo->Text = L"Pasillo";
			this->IPasillo->Click += gcnew System::EventHandler(this, &VentanaSupermercado::IPasillo_Click);
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
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem1->Text = L"Pasillo";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem2->Text = L"Producto";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem3->Text = L"Marca";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem4->Text = L"Inventario";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem5->Text = L"Administrador";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem6->Text = L"Cliente";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem7->Text = L"Vendedor";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem8->Text = L"Ciudad";
			// 
			// modificacionToolStripMenuItem
			// 
			this->modificacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem9,
					this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->toolStripMenuItem16
			});
			this->modificacionToolStripMenuItem->Name = L"modificacionToolStripMenuItem";
			this->modificacionToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->modificacionToolStripMenuItem->Text = L"Modificación";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem9->Text = L"Pasillo";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem10->Text = L"Producto";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem11->Text = L"Marca";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem12->Text = L"Inventario";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem13->Text = L"Administrador";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem14->Text = L"Cliente";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem15->Text = L"Vendedor";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem16->Text = L"Ciudad";
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem17,
					this->toolStripMenuItem18, this->toolStripMenuItem19, this->toolStripMenuItem20, this->toolStripMenuItem21, this->toolStripMenuItem22,
					this->toolStripMenuItem23, this->toolStripMenuItem24
			});
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->eliminarToolStripMenuItem->Text = L"Eliminación";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem17->Text = L"Pasillo";
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem18->Text = L"Producto";
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem19->Text = L"Marca";
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem20->Text = L"Inventario";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem21->Text = L"Administrador";
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem22->Text = L"Cliente";
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem23->Text = L"Vendedor";
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem24->Text = L"Ciudad";
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
			this->pasilloMasVisitadoToolStripMenuItem->Size = System::Drawing::Size(177, 22);
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
			// gBoxInsercion
			// 
			this->gBoxInsercion->Controls->Add(this->mensaje);
			this->gBoxInsercion->Controls->Add(this->label2);
			this->gBoxInsercion->Controls->Add(this->txtNombre);
			this->gBoxInsercion->Controls->Add(this->txtCodPasillo);
			this->gBoxInsercion->Controls->Add(this->label1);
			this->gBoxInsercion->Controls->Add(this->btnInsertar);
			this->gBoxInsercion->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gBoxInsercion->Location = System::Drawing::Point(35, 85);
			this->gBoxInsercion->Name = L"gBoxInsercion";
			this->gBoxInsercion->Size = System::Drawing::Size(500, 314);
			this->gBoxInsercion->TabIndex = 5;
			this->gBoxInsercion->TabStop = false;
			this->gBoxInsercion->Text = L"Insertar pasillo";
			this->gBoxInsercion->Visible = false;
			// 
			// mensaje
			// 
			this->mensaje->AutoSize = true;
			this->mensaje->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mensaje->ForeColor = System::Drawing::Color::Brown;
			this->mensaje->Location = System::Drawing::Point(247, 167);
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(0, 18);
			this->mensaje->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(93, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre:";
			// 
			// txtNombre
			// 
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtNombre->Location = System::Drawing::Point(250, 124);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(145, 27);
			this->txtNombre->TabIndex = 4;
			// 
			// txtCodPasillo
			// 
			this->txtCodPasillo->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCodPasillo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtCodPasillo->Location = System::Drawing::Point(250, 91);
			this->txtCodPasillo->Name = L"txtCodPasillo";
			this->txtCodPasillo->Size = System::Drawing::Size(145, 27);
			this->txtCodPasillo->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(93, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Codigo de pasillo:";
			this->label1->Click += gcnew System::EventHandler(this, &VentanaSupermercado::label1_Click);
			// 
			// btnInsertar
			// 
			this->btnInsertar->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInsertar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnInsertar->Location = System::Drawing::Point(346, 243);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(110, 39);
			this->btnInsertar->TabIndex = 0;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &VentanaSupermercado::btnInsertar_Click);
			// 
			// VentanaSupermercado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 461);
			this->Controls->Add(this->gBoxInsercion);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"VentanaSupermercado";
			this->Text = L"VentanaSupermercado";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->gBoxInsercion->ResumeLayout(false);
			this->gBoxInsercion->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insercionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IPasillo_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ flag = "pasillo";

		VentanaInsercion^ ventanaInsercion = gcnew VentanaInsercion();
		ventanaInsercion->Valor = flag;
		ventanaInsercion->Show();*/

		gBoxInsercion->Visible = true;
	}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	/*String^ codString = this->txtCodPasillo->Text;
	string nombre = msclr::interop::marshal_as<string>(this->txtNombre->Text);
	if (!String::IsNullOrEmpty(codString) && !nombre.empty()) {
		string strCodigo = msclr::interop::marshal_as<string>(codString);
		if (!pasillosI->existeNodo(strCodigo)) {
			string pasillo = strCodigo + ";" + nombre;
			pasillosI->insertarNodo(pasillo);
			MessageBox::Show(L"Pasillo insertado exitosamente.");
			Close();
		}
		else {
			this->mensaje->Text = "El codigo ya existe";
		}
	}
	else {
		this->mensaje->Text = "Campos vacíos";
	}*/
}
};
}
