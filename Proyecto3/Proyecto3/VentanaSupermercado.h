#pragma once

#include "Proyecto3.h"
#include "VentanaInsercion.h"
#include "VentanaConsultas.h"
#include "VentanaModificacion.h"

namespace Proyecto3 {

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
		Form^ ventana1;

		VentanaSupermercado(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaSupermercado(Form^ ventana, ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
			ArbolB& admins, ArbolB& clientes, ArbolB& vendedores, ArbolBB& ciudades)
		{
			ventana1 = ventana;

			pasillosB = &pasillos;
			productosB = &productos;
			marcasB = &marcas;
			inventariosB = &inventarios;
			adminsB = &admins;
			clientesB = &clientes;
			vendedoresB = &vendedores;
			ciudadesB = &ciudades;

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
	private: System::Windows::Forms::ToolStripMenuItem^ verTodoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem25;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem26;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem27;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem28;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem29;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem30;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem31;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem32;
private: System::Windows::Forms::ToolStripMenuItem^ consultarPrecioToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ consultarDescuentoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ consultarProductosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ consultarDescuentoDeUnToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ consultarMarcasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ pasilloMenosVisitadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ productosPorPasilloMásVendidosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ marcasMásVendidosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ clienteQueMásComproToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ clienteQueMenosComproToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ clienteQueMásFacturoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ marcasDeUnProductoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ facturaDeMayorMontoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ productosDeUnPasilloToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ clientesDelSupermercadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ pasillosDelSupermercadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ inventarioDelSupermercadoToolStripMenuItem;


















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
			this->verTodoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem32 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasilloMasVisitadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasilloMenosVisitadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosPorPasilloMásVendidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marcasMásVendidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteQueMásComproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteQueMenosComproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteQueMásFacturoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marcasDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaDeMayorMontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosDeUnPasilloToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesDelSupermercadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasillosDelSupermercadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventarioDelSupermercadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónInventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->controlesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verificarInventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revisarGóndolasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarPrecioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarDescuentoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarMarcasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarDescuentoDeUnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Size = System::Drawing::Size(771, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &VentanaSupermercado::menuStrip1_ItemClicked);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->insercionToolStripMenuItem,
					this->consultasToolStripMenuItem, this->modificacionToolStripMenuItem, this->eliminarToolStripMenuItem, this->verTodoToolStripMenuItem
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
			this->insercionToolStripMenuItem->Size = System::Drawing::Size(144, 22);
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
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::productosToolStripMenuItem_Click);
			// 
			// marcasToolStripMenuItem
			// 
			this->marcasToolStripMenuItem->Name = L"marcasToolStripMenuItem";
			this->marcasToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->marcasToolStripMenuItem->Text = L"Marca";
			this->marcasToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::marcasToolStripMenuItem_Click);
			// 
			// inventarioToolStripMenuItem
			// 
			this->inventarioToolStripMenuItem->Name = L"inventarioToolStripMenuItem";
			this->inventarioToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->inventarioToolStripMenuItem->Text = L"Inventario";
			this->inventarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::inventarioToolStripMenuItem_Click);
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			this->administradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::administradorToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::clienteToolStripMenuItem_Click);
			// 
			// vendedorToolStripMenuItem
			// 
			this->vendedorToolStripMenuItem->Name = L"vendedorToolStripMenuItem";
			this->vendedorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->vendedorToolStripMenuItem->Text = L"Vendedor";
			this->vendedorToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::vendedorToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::ciudadToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem1->Text = L"Pasillo";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem2->Text = L"Producto";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem3->Text = L"Marca";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem4->Text = L"Inventario";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem5->Text = L"Administrador";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem6->Text = L"Cliente";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem7->Text = L"Vendedor";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem8->Text = L"Ciudad";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem8_Click);
			// 
			// modificacionToolStripMenuItem
			// 
			this->modificacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem9,
					this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->toolStripMenuItem16
			});
			this->modificacionToolStripMenuItem->Name = L"modificacionToolStripMenuItem";
			this->modificacionToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->modificacionToolStripMenuItem->Text = L"Modificación";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem9->Text = L"Pasillo";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem10->Text = L"Producto";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem11->Text = L"Marca";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem12->Text = L"Inventario";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem13->Text = L"Administrador";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem14->Text = L"Cliente";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem15->Text = L"Vendedor";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem15_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem16->Text = L"Ciudad";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem16_Click);
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem17,
					this->toolStripMenuItem18, this->toolStripMenuItem19, this->toolStripMenuItem20, this->toolStripMenuItem21, this->toolStripMenuItem22,
					this->toolStripMenuItem23, this->toolStripMenuItem24
			});
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(144, 22);
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
			// verTodoToolStripMenuItem
			// 
			this->verTodoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem25,
					this->toolStripMenuItem26, this->toolStripMenuItem27, this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30,
					this->toolStripMenuItem31, this->toolStripMenuItem32
			});
			this->verTodoToolStripMenuItem->Name = L"verTodoToolStripMenuItem";
			this->verTodoToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->verTodoToolStripMenuItem->Text = L"Ver Arboles";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem25->Text = L"Pasillo";
			this->toolStripMenuItem25->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem25_Click);
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem26->Text = L"Producto";
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem27->Text = L"Marca";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem28->Text = L"Inventario";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem29->Text = L"Administrador";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem30->Text = L"Cliente";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem31->Text = L"Vendedor";
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			this->toolStripMenuItem32->Size = System::Drawing::Size(150, 22);
			this->toolStripMenuItem32->Text = L"Ciudad";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->pasilloMasVisitadoToolStripMenuItem,
					this->pasilloMenosVisitadoToolStripMenuItem, this->productosPorPasilloMásVendidosToolStripMenuItem, this->marcasMásVendidosToolStripMenuItem,
					this->clienteQueMásComproToolStripMenuItem, this->clienteQueMenosComproToolStripMenuItem, this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1,
					this->clienteQueMásFacturoToolStripMenuItem, this->marcasDeUnProductoToolStripMenuItem, this->facturaDeMayorMontoToolStripMenuItem,
					this->productosDeUnPasilloToolStripMenuItem, this->clientesDelSupermercadoToolStripMenuItem, this->pasillosDelSupermercadoToolStripMenuItem,
					this->inventarioDelSupermercadoToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// pasilloMasVisitadoToolStripMenuItem
			// 
			this->pasilloMasVisitadoToolStripMenuItem->Name = L"pasilloMasVisitadoToolStripMenuItem";
			this->pasilloMasVisitadoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->pasilloMasVisitadoToolStripMenuItem->Text = L"Pasillo mas visitado";
			// 
			// pasilloMenosVisitadoToolStripMenuItem
			// 
			this->pasilloMenosVisitadoToolStripMenuItem->Name = L"pasilloMenosVisitadoToolStripMenuItem";
			this->pasilloMenosVisitadoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->pasilloMenosVisitadoToolStripMenuItem->Text = L"Pasillo menos visitado";
			// 
			// productosPorPasilloMásVendidosToolStripMenuItem
			// 
			this->productosPorPasilloMásVendidosToolStripMenuItem->Name = L"productosPorPasilloMásVendidosToolStripMenuItem";
			this->productosPorPasilloMásVendidosToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->productosPorPasilloMásVendidosToolStripMenuItem->Text = L"Productos por pasillo más vendidos";
			// 
			// marcasMásVendidosToolStripMenuItem
			// 
			this->marcasMásVendidosToolStripMenuItem->Name = L"marcasMásVendidosToolStripMenuItem";
			this->marcasMásVendidosToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->marcasMásVendidosToolStripMenuItem->Text = L"Marcas más vendidos";
			// 
			// clienteQueMásComproToolStripMenuItem
			// 
			this->clienteQueMásComproToolStripMenuItem->Name = L"clienteQueMásComproToolStripMenuItem";
			this->clienteQueMásComproToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->clienteQueMásComproToolStripMenuItem->Text = L"Cliente que más compro";
			// 
			// clienteQueMenosComproToolStripMenuItem
			// 
			this->clienteQueMenosComproToolStripMenuItem->Name = L"clienteQueMenosComproToolStripMenuItem";
			this->clienteQueMenosComproToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->clienteQueMenosComproToolStripMenuItem->Text = L"Cliente que menos compro";
			// 
			// productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1
			// 
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1->Name = L"productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1";
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1->Size = System::Drawing::Size(304, 22);
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1->Text = L"Producto que más se cargó en las Góndolas";
			// 
			// clienteQueMásFacturoToolStripMenuItem
			// 
			this->clienteQueMásFacturoToolStripMenuItem->Name = L"clienteQueMásFacturoToolStripMenuItem";
			this->clienteQueMásFacturoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->clienteQueMásFacturoToolStripMenuItem->Text = L"Cliente que más facturo";
			// 
			// marcasDeUnProductoToolStripMenuItem
			// 
			this->marcasDeUnProductoToolStripMenuItem->Name = L"marcasDeUnProductoToolStripMenuItem";
			this->marcasDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->marcasDeUnProductoToolStripMenuItem->Text = L"Marcas de un producto";
			// 
			// facturaDeMayorMontoToolStripMenuItem
			// 
			this->facturaDeMayorMontoToolStripMenuItem->Name = L"facturaDeMayorMontoToolStripMenuItem";
			this->facturaDeMayorMontoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->facturaDeMayorMontoToolStripMenuItem->Text = L"Factura de mayor monto";
			// 
			// productosDeUnPasilloToolStripMenuItem
			// 
			this->productosDeUnPasilloToolStripMenuItem->Name = L"productosDeUnPasilloToolStripMenuItem";
			this->productosDeUnPasilloToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->productosDeUnPasilloToolStripMenuItem->Text = L"Productos de un pasillo";
			// 
			// clientesDelSupermercadoToolStripMenuItem
			// 
			this->clientesDelSupermercadoToolStripMenuItem->Name = L"clientesDelSupermercadoToolStripMenuItem";
			this->clientesDelSupermercadoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->clientesDelSupermercadoToolStripMenuItem->Text = L"Clientes del supermercado";
			// 
			// pasillosDelSupermercadoToolStripMenuItem
			// 
			this->pasillosDelSupermercadoToolStripMenuItem->Name = L"pasillosDelSupermercadoToolStripMenuItem";
			this->pasillosDelSupermercadoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->pasillosDelSupermercadoToolStripMenuItem->Text = L"Pasillos del supermercado";
			// 
			// inventarioDelSupermercadoToolStripMenuItem
			// 
			this->inventarioDelSupermercadoToolStripMenuItem->Name = L"inventarioDelSupermercadoToolStripMenuItem";
			this->inventarioDelSupermercadoToolStripMenuItem->Size = System::Drawing::Size(304, 22);
			this->inventarioDelSupermercadoToolStripMenuItem->Text = L"Inventario del supermercado";
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->facturaciónClienteToolStripMenuItem,
					this->facturaciónInventarioToolStripMenuItem
			});
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// facturaciónClienteToolStripMenuItem
			// 
			this->facturaciónClienteToolStripMenuItem->Name = L"facturaciónClienteToolStripMenuItem";
			this->facturaciónClienteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->facturaciónClienteToolStripMenuItem->Text = L"Facturación Cliente";
			// 
			// facturaciónInventarioToolStripMenuItem
			// 
			this->facturaciónInventarioToolStripMenuItem->Name = L"facturaciónInventarioToolStripMenuItem";
			this->facturaciónInventarioToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->facturaciónInventarioToolStripMenuItem->Text = L"Comprar Inventario";
			// 
			// controlesToolStripMenuItem
			// 
			this->controlesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->verificarInventarioToolStripMenuItem,
					this->revisarGóndolasToolStripMenuItem, this->consultarPrecioToolStripMenuItem, this->consultarDescuentoToolStripMenuItem, this->consultarProductosToolStripMenuItem,
					this->consultarMarcasToolStripMenuItem, this->consultarDescuentoDeUnToolStripMenuItem, this->comprasToolStripMenuItem
			});
			this->controlesToolStripMenuItem->Name = L"controlesToolStripMenuItem";
			this->controlesToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->controlesToolStripMenuItem->Text = L"Controles";
			// 
			// verificarInventarioToolStripMenuItem
			// 
			this->verificarInventarioToolStripMenuItem->Name = L"verificarInventarioToolStripMenuItem";
			this->verificarInventarioToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->verificarInventarioToolStripMenuItem->Text = L"Verificar inventario";
			// 
			// revisarGóndolasToolStripMenuItem
			// 
			this->revisarGóndolasToolStripMenuItem->Name = L"revisarGóndolasToolStripMenuItem";
			this->revisarGóndolasToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->revisarGóndolasToolStripMenuItem->Text = L"Verificar góndolas";
			// 
			// consultarPrecioToolStripMenuItem
			// 
			this->consultarPrecioToolStripMenuItem->Name = L"consultarPrecioToolStripMenuItem";
			this->consultarPrecioToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->consultarPrecioToolStripMenuItem->Text = L"Consultar precio";
			// 
			// consultarDescuentoToolStripMenuItem
			// 
			this->consultarDescuentoToolStripMenuItem->Name = L"consultarDescuentoToolStripMenuItem";
			this->consultarDescuentoToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->consultarDescuentoToolStripMenuItem->Text = L"Consultar descuento";
			// 
			// consultarProductosToolStripMenuItem
			// 
			this->consultarProductosToolStripMenuItem->Name = L"consultarProductosToolStripMenuItem";
			this->consultarProductosToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->consultarProductosToolStripMenuItem->Text = L"Consultar productos";
			// 
			// consultarMarcasToolStripMenuItem
			// 
			this->consultarMarcasToolStripMenuItem->Name = L"consultarMarcasToolStripMenuItem";
			this->consultarMarcasToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->consultarMarcasToolStripMenuItem->Text = L"Consultar marcas";
			// 
			// consultarDescuentoDeUnToolStripMenuItem
			// 
			this->consultarDescuentoDeUnToolStripMenuItem->Name = L"consultarDescuentoDeUnToolStripMenuItem";
			this->consultarDescuentoDeUnToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->consultarDescuentoDeUnToolStripMenuItem->Text = L"Consultar descuento clientes";
			// 
			// comprasToolStripMenuItem
			// 
			this->comprasToolStripMenuItem->Name = L"comprasToolStripMenuItem";
			this->comprasToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->comprasToolStripMenuItem->Text = L"Comprar";
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
			// VentanaSupermercado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 522);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"VentanaSupermercado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaSupermercado";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaSupermercado::VentanaSupermercado_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insercionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IPasillo_Click(System::Object^ sender, System::EventArgs^ e) {
		int opc = 1;

		this->Hide();
		VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
			*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
		ventana->ShowDialog();
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

	this->Hide();
	//obj->Show();
}
private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void marcasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void inventarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void vendedorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();

}
private: System::Void toolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;
	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}

private: System::Void salirToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void VentanaSupermercado_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	ventana1->Show();
}
private: System::Void toolStripMenuItem25_Click(System::Object^ sender, System::EventArgs^ e) {
	wstring salida = L"";

	pasillosB->mostrarArbol(pasillosB->raiz, 0, salida);

	LPCWSTR sw = salida.c_str();

	OutputDebugString(sw);
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
};
}
