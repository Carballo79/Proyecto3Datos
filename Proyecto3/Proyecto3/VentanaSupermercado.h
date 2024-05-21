#pragma once

#include "Proyecto3.h"
#include "VentanaInsercion.h"
#include "VentanaConsultas.h"
#include "VentanaModificacion.h"
#include "VentanaEliminación.h"

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
	private: System::Windows::Forms::ToolStripMenuItem^ mMantenimiento1;
	public:

	public:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem33;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem34;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem35;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem36;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem37;




	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem42;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem51;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem60;








	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::MenuStrip^ menuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ mReportes1;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem106;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem107;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem108;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem109;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem110;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem111;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem112;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem113;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem114;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem115;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem116;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem117;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem118;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem119;
	private: System::Windows::Forms::MenuStrip^ menuStrip4;
	private: System::Windows::Forms::ToolStripMenuItem^ mControles1;
	private: System::Windows::Forms::ToolStripMenuItem^ mVerificarInventario1;
	private: System::Windows::Forms::ToolStripMenuItem^ mRevisarGondolas1;

	private: System::Windows::Forms::ToolStripMenuItem^ mConsultarPrecio1;
	private: System::Windows::Forms::ToolStripMenuItem^ mConsultarDescuento1;
	private: System::Windows::Forms::ToolStripMenuItem^ mConsultarProductos1;
	private: System::Windows::Forms::ToolStripMenuItem^ mConsultarMarcas1;
	private: System::Windows::Forms::ToolStripMenuItem^ mConsultarDescuentoClientes1;
	private: System::Windows::Forms::ToolStripMenuItem^ mComprar1;










	private: System::Windows::Forms::MenuStrip^ menuStrip5;
	private: System::Windows::Forms::ToolStripMenuItem^ mUsuarios;


	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem72;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem89;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem98;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem121;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem99;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem123;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem132;








	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem141;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem73;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem74;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem75;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem76;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem77;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem78;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem79;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem88;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem90;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem91;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem92;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem93;
private: System::Windows::Forms::MenuStrip^ menuStrip6;
private: System::Windows::Forms::ToolStripMenuItem^ mFacturacion1;

private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem95;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem96;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem43;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem44;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem45;





private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem61;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem62;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem63;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem64;




private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem52;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem53;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem54;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem55;




private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem46;
private: System::Windows::Forms::ToolStripMenuItem^ datosToolStripMenuItem;








































































































	public:

































































	public:


		   int opc;

		VentanaSupermercado(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VentanaSupermercado(Form^ ventana, int _opc, ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
			ArbolB& admins, ArbolB& clientes, ArbolB& vendedores, ArbolBB& ciudades)
		{
			ventana1 = ventana;
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
			//
			//TODO: Add the constructor code here
			//

			if (opc == 1)
			{
				VistaAdmin();
			}
			if (opc == 2)
			{
				VistaCteReg();
			}
			if (opc == 3)
			{
				VistaCteNoReg();
			}
			if (opc == 4)
			{
				VistaVendedor();
			}
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
private: System::Windows::Forms::ToolStripMenuItem^ mMantenimiento;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ menuInsercion;

	private: System::Windows::Forms::ToolStripMenuItem^ IPasillo;

	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ marcasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inventarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuConsultas;
	private: System::Windows::Forms::ToolStripMenuItem^ menuModificacion;
	private: System::Windows::Forms::ToolStripMenuItem^ menuEliminacion;
private: System::Windows::Forms::ToolStripMenuItem^ mReportes;






private: System::Windows::Forms::ToolStripMenuItem^ mPasilloMasVisitado;
private: System::Windows::Forms::ToolStripMenuItem^ mFacturacion;





	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónClienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónInventarioToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ mControles;
private: System::Windows::Forms::ToolStripMenuItem^ mVerificarInventario;
private: System::Windows::Forms::ToolStripMenuItem^ mComprar;




private: System::Windows::Forms::ToolStripMenuItem^ mRevisarGondolas;

private: System::Windows::Forms::ToolStripMenuItem^ mAcercaDe;
private: System::Windows::Forms::ToolStripMenuItem^ mContactos;


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
private: System::Windows::Forms::ToolStripMenuItem^ menuVerTodo;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem25;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem26;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem27;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem28;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem29;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem30;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem31;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem32;
private: System::Windows::Forms::ToolStripMenuItem^ mConsultarPrecio;
private: System::Windows::Forms::ToolStripMenuItem^ mConsultarDescuento;
private: System::Windows::Forms::ToolStripMenuItem^ mConsultarProductos;
private: System::Windows::Forms::ToolStripMenuItem^ mConsultarDescuentoClientes;




private: System::Windows::Forms::ToolStripMenuItem^ mConsultarMarcas;

private: System::Windows::Forms::ToolStripMenuItem^ mPasilloMenosVisitado;
private: System::Windows::Forms::ToolStripMenuItem^ mProductosPorPasilloMasVendidos;
private: System::Windows::Forms::ToolStripMenuItem^ mMarcasMasVendidos;
private: System::Windows::Forms::ToolStripMenuItem^ mClienteQueMasCompro;
private: System::Windows::Forms::ToolStripMenuItem^ mClienteQueMenosCompro;









private: System::Windows::Forms::ToolStripMenuItem^ productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ clienteQueMásFacturoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ marcasDeUnProductoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ facturaDeMayorMontoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ productosDeUnPasilloToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ clientesDelSupermercadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ pasillosDelSupermercadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ inventarioDelSupermercadoToolStripMenuItem;
private: System::ComponentModel::IContainer^ components;


















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaSupermercado::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mMantenimiento = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuInsercion = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->IPasillo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marcasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuConsultas = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuModificacion = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuEliminacion = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuVerTodo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem32 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mReportes = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mPasilloMasVisitado = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mPasilloMenosVisitado = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mProductosPorPasilloMasVendidos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mMarcasMasVendidos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mClienteQueMasCompro = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mClienteQueMenosCompro = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteQueMásFacturoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marcasDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaDeMayorMontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosDeUnPasilloToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesDelSupermercadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasillosDelSupermercadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventarioDelSupermercadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mFacturacion = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónInventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mControles = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mVerificarInventario = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mRevisarGondolas = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarPrecio = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarDescuento = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarProductos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarMarcas = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mComprar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarDescuentoClientes = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mAcercaDe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mContactos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mMantenimiento1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem33 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem34 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem35 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem36 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem37 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem42 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem43 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem44 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem45 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem46 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem51 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem52 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem53 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem54 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem55 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem60 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem61 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem62 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem63 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem64 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->mReportes1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem119 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem118 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem117 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem116 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem115 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem114 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem113 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem112 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem111 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem110 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem109 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem108 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem107 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem106 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip4 = (gcnew System::Windows::Forms::MenuStrip());
			this->mControles1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mVerificarInventario1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mRevisarGondolas1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarPrecio1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarDescuento1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarProductos1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarMarcas1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mConsultarDescuentoClientes1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mComprar1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip5 = (gcnew System::Windows::Forms::MenuStrip());
			this->mUsuarios = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem72 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem99 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem123 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem132 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem141 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem89 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem73 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem74 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem75 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem76 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem98 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem77 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem78 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem79 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem88 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem121 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem90 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem91 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem92 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem93 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip6 = (gcnew System::Windows::Forms::MenuStrip());
			this->mFacturacion1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem95 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem96 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->menuStrip3->SuspendLayout();
			this->menuStrip4->SuspendLayout();
			this->menuStrip5->SuspendLayout();
			this->menuStrip6->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mMantenimiento, this->mReportes,
					this->mFacturacion, this->mControles, this->mAcercaDe, this->mContactos
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1264, 32);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &VentanaSupermercado::menuStrip1_ItemClicked);
			// 
			// mMantenimiento
			// 
			this->mMantenimiento->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->menuInsercion,
					this->menuConsultas, this->menuModificacion, this->menuEliminacion, this->menuVerTodo
			});
			this->mMantenimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mMantenimiento->Name = L"mMantenimiento";
			this->mMantenimiento->Size = System::Drawing::Size(146, 28);
			this->mMantenimiento->Text = L"Mantenimiento";
			// 
			// menuInsercion
			// 
			this->menuInsercion->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->IPasillo,
					this->productosToolStripMenuItem, this->marcasToolStripMenuItem, this->inventarioToolStripMenuItem, this->administradorToolStripMenuItem,
					this->clienteToolStripMenuItem, this->vendedorToolStripMenuItem, this->ciudadToolStripMenuItem
			});
			this->menuInsercion->Name = L"menuInsercion";
			this->menuInsercion->Size = System::Drawing::Size(186, 28);
			this->menuInsercion->Text = L"Inserción";
			this->menuInsercion->Click += gcnew System::EventHandler(this, &VentanaSupermercado::insercionToolStripMenuItem_Click);
			// 
			// IPasillo
			// 
			this->IPasillo->Name = L"IPasillo";
			this->IPasillo->Size = System::Drawing::Size(196, 28);
			this->IPasillo->Text = L"Pasillo";
			this->IPasillo->Click += gcnew System::EventHandler(this, &VentanaSupermercado::IPasillo_Click);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->productosToolStripMenuItem->Text = L"Producto";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::productosToolStripMenuItem_Click);
			// 
			// marcasToolStripMenuItem
			// 
			this->marcasToolStripMenuItem->Name = L"marcasToolStripMenuItem";
			this->marcasToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->marcasToolStripMenuItem->Text = L"Marca";
			this->marcasToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::marcasToolStripMenuItem_Click);
			// 
			// inventarioToolStripMenuItem
			// 
			this->inventarioToolStripMenuItem->Name = L"inventarioToolStripMenuItem";
			this->inventarioToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->inventarioToolStripMenuItem->Text = L"Inventario";
			this->inventarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::inventarioToolStripMenuItem_Click);
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			this->administradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::administradorToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::clienteToolStripMenuItem_Click);
			// 
			// vendedorToolStripMenuItem
			// 
			this->vendedorToolStripMenuItem->Name = L"vendedorToolStripMenuItem";
			this->vendedorToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->vendedorToolStripMenuItem->Text = L"Vendedor";
			this->vendedorToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::vendedorToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(196, 28);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaSupermercado::ciudadToolStripMenuItem_Click);
			// 
			// menuConsultas
			// 
			this->menuConsultas->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->menuConsultas->Name = L"menuConsultas";
			this->menuConsultas->Size = System::Drawing::Size(186, 28);
			this->menuConsultas->Text = L"Consultas";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem1->Text = L"Pasillo";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem2->Text = L"Producto";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem3->Text = L"Marca";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem4->Text = L"Inventario";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem5->Text = L"Administrador";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem6->Text = L"Cliente";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem7->Text = L"Vendedor";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem8->Text = L"Ciudad";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem8_Click);
			// 
			// menuModificacion
			// 
			this->menuModificacion->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem9,
					this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->toolStripMenuItem16
			});
			this->menuModificacion->Name = L"menuModificacion";
			this->menuModificacion->Size = System::Drawing::Size(186, 28);
			this->menuModificacion->Text = L"Modificación";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem9->Text = L"Pasillo";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem10->Text = L"Producto";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem11->Text = L"Marca";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem12->Text = L"Inventario";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem13->Text = L"Administrador";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem14->Text = L"Cliente";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem15->Text = L"Vendedor";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem15_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem16->Text = L"Ciudad";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem16_Click);
			// 
			// menuEliminacion
			// 
			this->menuEliminacion->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem17,
					this->toolStripMenuItem18, this->toolStripMenuItem19, this->toolStripMenuItem20, this->toolStripMenuItem21, this->toolStripMenuItem22,
					this->toolStripMenuItem23, this->toolStripMenuItem24
			});
			this->menuEliminacion->Name = L"menuEliminacion";
			this->menuEliminacion->Size = System::Drawing::Size(186, 28);
			this->menuEliminacion->Text = L"Eliminación";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem17->Text = L"Pasillo";
			this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem17_Click);
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem18->Text = L"Producto";
			this->toolStripMenuItem18->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem18_Click);
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem19->Text = L"Marca";
			this->toolStripMenuItem19->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem19_Click);
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem20->Text = L"Inventario";
			this->toolStripMenuItem20->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem20_Click);
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem21->Text = L"Administrador";
			this->toolStripMenuItem21->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem21_Click);
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem22->Text = L"Cliente";
			this->toolStripMenuItem22->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem22_Click);
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem23->Text = L"Vendedor";
			this->toolStripMenuItem23->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem23_Click);
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem24->Text = L"Ciudad";
			this->toolStripMenuItem24->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem24_Click);
			// 
			// menuVerTodo
			// 
			this->menuVerTodo->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem25,
					this->toolStripMenuItem26, this->toolStripMenuItem27, this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30,
					this->toolStripMenuItem31, this->toolStripMenuItem32
			});
			this->menuVerTodo->Name = L"menuVerTodo";
			this->menuVerTodo->Size = System::Drawing::Size(186, 28);
			this->menuVerTodo->Text = L"Ver Arboles";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem25->Text = L"Pasillo";
			this->toolStripMenuItem25->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem25_Click);
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem26->Text = L"Producto";
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem27->Text = L"Marca";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem28->Text = L"Inventario";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem29->Text = L"Administrador";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem30->Text = L"Cliente";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem31->Text = L"Vendedor";
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			this->toolStripMenuItem32->Size = System::Drawing::Size(196, 28);
			this->toolStripMenuItem32->Text = L"Ciudad";
			// 
			// mReportes
			// 
			this->mReportes->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->mPasilloMasVisitado,
					this->mPasilloMenosVisitado, this->mProductosPorPasilloMasVendidos, this->mMarcasMasVendidos, this->mClienteQueMasCompro, this->mClienteQueMenosCompro,
					this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1, this->clienteQueMásFacturoToolStripMenuItem, this->marcasDeUnProductoToolStripMenuItem,
					this->facturaDeMayorMontoToolStripMenuItem, this->productosDeUnPasilloToolStripMenuItem, this->clientesDelSupermercadoToolStripMenuItem,
					this->pasillosDelSupermercadoToolStripMenuItem, this->inventarioDelSupermercadoToolStripMenuItem
			});
			this->mReportes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mReportes->Name = L"mReportes";
			this->mReportes->Size = System::Drawing::Size(98, 28);
			this->mReportes->Text = L"Reportes";
			// 
			// mPasilloMasVisitado
			// 
			this->mPasilloMasVisitado->Name = L"mPasilloMasVisitado";
			this->mPasilloMasVisitado->Size = System::Drawing::Size(453, 28);
			this->mPasilloMasVisitado->Text = L"Pasillo mas visitado";
			// 
			// mPasilloMenosVisitado
			// 
			this->mPasilloMenosVisitado->Name = L"mPasilloMenosVisitado";
			this->mPasilloMenosVisitado->Size = System::Drawing::Size(453, 28);
			this->mPasilloMenosVisitado->Text = L"Pasillo menos visitado";
			// 
			// mProductosPorPasilloMasVendidos
			// 
			this->mProductosPorPasilloMasVendidos->Name = L"mProductosPorPasilloMasVendidos";
			this->mProductosPorPasilloMasVendidos->Size = System::Drawing::Size(453, 28);
			this->mProductosPorPasilloMasVendidos->Text = L"Productos por pasillo más vendidos";
			// 
			// mMarcasMasVendidos
			// 
			this->mMarcasMasVendidos->Name = L"mMarcasMasVendidos";
			this->mMarcasMasVendidos->Size = System::Drawing::Size(453, 28);
			this->mMarcasMasVendidos->Text = L"Marcas más vendidos";
			// 
			// mClienteQueMasCompro
			// 
			this->mClienteQueMasCompro->Name = L"mClienteQueMasCompro";
			this->mClienteQueMasCompro->Size = System::Drawing::Size(453, 28);
			this->mClienteQueMasCompro->Text = L"Cliente que más compro";
			// 
			// mClienteQueMenosCompro
			// 
			this->mClienteQueMenosCompro->Name = L"mClienteQueMenosCompro";
			this->mClienteQueMenosCompro->Size = System::Drawing::Size(453, 28);
			this->mClienteQueMenosCompro->Text = L"Cliente que menos compro";
			// 
			// productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1
			// 
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1->Name = L"productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1";
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1->Size = System::Drawing::Size(453, 28);
			this->productoQueMásSeCargóEnLasGóndolasToolStripMenuItem1->Text = L"Producto que más se cargó en las Góndolas";
			// 
			// clienteQueMásFacturoToolStripMenuItem
			// 
			this->clienteQueMásFacturoToolStripMenuItem->Name = L"clienteQueMásFacturoToolStripMenuItem";
			this->clienteQueMásFacturoToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->clienteQueMásFacturoToolStripMenuItem->Text = L"Cliente que más facturo";
			// 
			// marcasDeUnProductoToolStripMenuItem
			// 
			this->marcasDeUnProductoToolStripMenuItem->Name = L"marcasDeUnProductoToolStripMenuItem";
			this->marcasDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->marcasDeUnProductoToolStripMenuItem->Text = L"Marcas de un producto";
			// 
			// facturaDeMayorMontoToolStripMenuItem
			// 
			this->facturaDeMayorMontoToolStripMenuItem->Name = L"facturaDeMayorMontoToolStripMenuItem";
			this->facturaDeMayorMontoToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->facturaDeMayorMontoToolStripMenuItem->Text = L"Factura de mayor monto";
			// 
			// productosDeUnPasilloToolStripMenuItem
			// 
			this->productosDeUnPasilloToolStripMenuItem->Name = L"productosDeUnPasilloToolStripMenuItem";
			this->productosDeUnPasilloToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->productosDeUnPasilloToolStripMenuItem->Text = L"Productos de un pasillo";
			// 
			// clientesDelSupermercadoToolStripMenuItem
			// 
			this->clientesDelSupermercadoToolStripMenuItem->Name = L"clientesDelSupermercadoToolStripMenuItem";
			this->clientesDelSupermercadoToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->clientesDelSupermercadoToolStripMenuItem->Text = L"Clientes del supermercado";
			// 
			// pasillosDelSupermercadoToolStripMenuItem
			// 
			this->pasillosDelSupermercadoToolStripMenuItem->Name = L"pasillosDelSupermercadoToolStripMenuItem";
			this->pasillosDelSupermercadoToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->pasillosDelSupermercadoToolStripMenuItem->Text = L"Pasillos del supermercado";
			// 
			// inventarioDelSupermercadoToolStripMenuItem
			// 
			this->inventarioDelSupermercadoToolStripMenuItem->Name = L"inventarioDelSupermercadoToolStripMenuItem";
			this->inventarioDelSupermercadoToolStripMenuItem->Size = System::Drawing::Size(453, 28);
			this->inventarioDelSupermercadoToolStripMenuItem->Text = L"Inventario del supermercado";
			// 
			// mFacturacion
			// 
			this->mFacturacion->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->facturaciónInventarioToolStripMenuItem,
					this->facturaciónClienteToolStripMenuItem
			});
			this->mFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mFacturacion->Name = L"mFacturacion";
			this->mFacturacion->Size = System::Drawing::Size(121, 28);
			this->mFacturacion->Text = L"Facturación";
			// 
			// facturaciónInventarioToolStripMenuItem
			// 
			this->facturaciónInventarioToolStripMenuItem->Name = L"facturaciónInventarioToolStripMenuItem";
			this->facturaciónInventarioToolStripMenuItem->Size = System::Drawing::Size(242, 28);
			this->facturaciónInventarioToolStripMenuItem->Text = L"Comprar Inventario";
			// 
			// facturaciónClienteToolStripMenuItem
			// 
			this->facturaciónClienteToolStripMenuItem->Name = L"facturaciónClienteToolStripMenuItem";
			this->facturaciónClienteToolStripMenuItem->Size = System::Drawing::Size(242, 28);
			this->facturaciónClienteToolStripMenuItem->Text = L"Facturación Cliente";
			// 
			// mControles
			// 
			this->mControles->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->mVerificarInventario,
					this->mRevisarGondolas, this->mConsultarPrecio, this->mConsultarDescuento, this->mConsultarProductos, this->mConsultarMarcas,
					this->mComprar, this->mConsultarDescuentoClientes
			});
			this->mControles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mControles->Name = L"mControles";
			this->mControles->Size = System::Drawing::Size(102, 28);
			this->mControles->Text = L"Controles";
			// 
			// mVerificarInventario
			// 
			this->mVerificarInventario->Name = L"mVerificarInventario";
			this->mVerificarInventario->Size = System::Drawing::Size(322, 28);
			this->mVerificarInventario->Text = L"Verificar inventario";
			// 
			// mRevisarGondolas
			// 
			this->mRevisarGondolas->Name = L"mRevisarGondolas";
			this->mRevisarGondolas->Size = System::Drawing::Size(322, 28);
			this->mRevisarGondolas->Text = L"Verificar góndolas";
			// 
			// mConsultarPrecio
			// 
			this->mConsultarPrecio->Name = L"mConsultarPrecio";
			this->mConsultarPrecio->Size = System::Drawing::Size(322, 28);
			this->mConsultarPrecio->Text = L"Consultar precio";
			// 
			// mConsultarDescuento
			// 
			this->mConsultarDescuento->Name = L"mConsultarDescuento";
			this->mConsultarDescuento->Size = System::Drawing::Size(322, 28);
			this->mConsultarDescuento->Text = L"Consultar descuento";
			// 
			// mConsultarProductos
			// 
			this->mConsultarProductos->Name = L"mConsultarProductos";
			this->mConsultarProductos->Size = System::Drawing::Size(322, 28);
			this->mConsultarProductos->Text = L"Consultar productos";
			// 
			// mConsultarMarcas
			// 
			this->mConsultarMarcas->Name = L"mConsultarMarcas";
			this->mConsultarMarcas->Size = System::Drawing::Size(322, 28);
			this->mConsultarMarcas->Text = L"Consultar marcas";
			// 
			// mComprar
			// 
			this->mComprar->Name = L"mComprar";
			this->mComprar->Size = System::Drawing::Size(322, 28);
			this->mComprar->Text = L"Comprar";
			// 
			// mConsultarDescuentoClientes
			// 
			this->mConsultarDescuentoClientes->Name = L"mConsultarDescuentoClientes";
			this->mConsultarDescuentoClientes->Size = System::Drawing::Size(322, 28);
			this->mConsultarDescuentoClientes->Text = L"Consultar descuento clientes";
			// 
			// mAcercaDe
			// 
			this->mAcercaDe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mAcercaDe->Name = L"mAcercaDe";
			this->mAcercaDe->Size = System::Drawing::Size(109, 28);
			this->mAcercaDe->Text = L"Acerca de";
			// 
			// mContactos
			// 
			this->mContactos->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->datosToolStripMenuItem });
			this->mContactos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mContactos->Name = L"mContactos";
			this->mContactos->Size = System::Drawing::Size(105, 28);
			this->mContactos->Text = L"Contactos";
			// 
			// datosToolStripMenuItem
			// 
			this->datosToolStripMenuItem->Name = L"datosToolStripMenuItem";
			this->datosToolStripMenuItem->Size = System::Drawing::Size(127, 28);
			this->datosToolStripMenuItem->Text = L"Datos";
			// 
			// mMantenimiento1
			// 
			this->mMantenimiento1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mMantenimiento1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem33,
					this->toolStripMenuItem42, this->toolStripMenuItem51, this->toolStripMenuItem60
			});
			this->mMantenimiento1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mMantenimiento1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mMantenimiento1.Image")));
			this->mMantenimiento1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mMantenimiento1->Name = L"mMantenimiento1";
			this->mMantenimiento1->Size = System::Drawing::Size(145, 156);
			this->mMantenimiento1->Text = L"Mantenimiento";
			this->mMantenimiento1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->mMantenimiento1->Click += gcnew System::EventHandler(this, &VentanaSupermercado::pasillosToolStripMenuItem_Click);
			// 
			// toolStripMenuItem33
			// 
			this->toolStripMenuItem33->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem34,
					this->toolStripMenuItem35, this->toolStripMenuItem36, this->toolStripMenuItem37
			});
			this->toolStripMenuItem33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem33.Image")));
			this->toolStripMenuItem33->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem33->Name = L"toolStripMenuItem33";
			this->toolStripMenuItem33->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem33->Size = System::Drawing::Size(234, 70);
			this->toolStripMenuItem33->Text = L"Inserción";
			this->toolStripMenuItem33->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem34.Image")));
			this->toolStripMenuItem34->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem34->Text = L"Pasillo";
			this->toolStripMenuItem34->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem34->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem34_Click);
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem35.Image")));
			this->toolStripMenuItem35->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem35->Text = L"Producto";
			this->toolStripMenuItem35->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem35->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem35_Click);
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem36.Image")));
			this->toolStripMenuItem36->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem36->Text = L"Marca";
			this->toolStripMenuItem36->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem36->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem36_Click);
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem37.Image")));
			this->toolStripMenuItem37->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem37->Text = L"Inventario";
			this->toolStripMenuItem37->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem37->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem37_Click);
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem43,
					this->toolStripMenuItem44, this->toolStripMenuItem45, this->toolStripMenuItem46
			});
			this->toolStripMenuItem42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem42.Image")));
			this->toolStripMenuItem42->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(234, 70);
			this->toolStripMenuItem42->Text = L"Consultas";
			this->toolStripMenuItem42->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem43.Image")));
			this->toolStripMenuItem43->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem43->Text = L"Pasillo";
			this->toolStripMenuItem43->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem43->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem43_Click);
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem44.Image")));
			this->toolStripMenuItem44->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem44->Text = L"Producto";
			this->toolStripMenuItem44->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem44->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem44_Click);
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem45.Image")));
			this->toolStripMenuItem45->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem45->Text = L"Marca";
			this->toolStripMenuItem45->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem45->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem45_Click);
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem46.Image")));
			this->toolStripMenuItem46->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem46->Text = L"Inventario";
			this->toolStripMenuItem46->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem46->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem46_Click);
			// 
			// toolStripMenuItem51
			// 
			this->toolStripMenuItem51->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem52,
					this->toolStripMenuItem53, this->toolStripMenuItem54, this->toolStripMenuItem55
			});
			this->toolStripMenuItem51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem51.Image")));
			this->toolStripMenuItem51->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem51->Name = L"toolStripMenuItem51";
			this->toolStripMenuItem51->Size = System::Drawing::Size(234, 70);
			this->toolStripMenuItem51->Text = L"Modificación";
			this->toolStripMenuItem51->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem52
			// 
			this->toolStripMenuItem52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem52.Image")));
			this->toolStripMenuItem52->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem52->Name = L"toolStripMenuItem52";
			this->toolStripMenuItem52->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem52->Text = L"Pasillo";
			this->toolStripMenuItem52->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem52->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem52_Click);
			// 
			// toolStripMenuItem53
			// 
			this->toolStripMenuItem53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem53.Image")));
			this->toolStripMenuItem53->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem53->Name = L"toolStripMenuItem53";
			this->toolStripMenuItem53->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem53->Text = L"Producto";
			this->toolStripMenuItem53->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem53->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem53_Click);
			// 
			// toolStripMenuItem54
			// 
			this->toolStripMenuItem54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem54.Image")));
			this->toolStripMenuItem54->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem54->Name = L"toolStripMenuItem54";
			this->toolStripMenuItem54->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem54->Text = L"Marca";
			this->toolStripMenuItem54->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem54->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem54_Click);
			// 
			// toolStripMenuItem55
			// 
			this->toolStripMenuItem55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem55.Image")));
			this->toolStripMenuItem55->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem55->Name = L"toolStripMenuItem55";
			this->toolStripMenuItem55->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem55->Text = L"Inventario";
			this->toolStripMenuItem55->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem55->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem55_Click);
			// 
			// toolStripMenuItem60
			// 
			this->toolStripMenuItem60->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem61,
					this->toolStripMenuItem62, this->toolStripMenuItem63, this->toolStripMenuItem64
			});
			this->toolStripMenuItem60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem60.Image")));
			this->toolStripMenuItem60->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem60->Name = L"toolStripMenuItem60";
			this->toolStripMenuItem60->Size = System::Drawing::Size(234, 70);
			this->toolStripMenuItem60->Text = L"Eliminación";
			this->toolStripMenuItem60->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem61
			// 
			this->toolStripMenuItem61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem61.Image")));
			this->toolStripMenuItem61->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem61->Name = L"toolStripMenuItem61";
			this->toolStripMenuItem61->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem61->Text = L"Pasillo";
			this->toolStripMenuItem61->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem61->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem61_Click);
			// 
			// toolStripMenuItem62
			// 
			this->toolStripMenuItem62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem62.Image")));
			this->toolStripMenuItem62->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem62->Name = L"toolStripMenuItem62";
			this->toolStripMenuItem62->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem62->Text = L"Producto";
			this->toolStripMenuItem62->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem62->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem62_Click);
			// 
			// toolStripMenuItem63
			// 
			this->toolStripMenuItem63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem63.Image")));
			this->toolStripMenuItem63->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem63->Name = L"toolStripMenuItem63";
			this->toolStripMenuItem63->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem63->Text = L"Marca";
			this->toolStripMenuItem63->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem63->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem63_Click);
			// 
			// toolStripMenuItem64
			// 
			this->toolStripMenuItem64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem64.Image")));
			this->toolStripMenuItem64->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem64->Name = L"toolStripMenuItem64";
			this->toolStripMenuItem64->Size = System::Drawing::Size(169, 30);
			this->toolStripMenuItem64->Text = L"Inventario";
			this->toolStripMenuItem64->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem64->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem64_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mMantenimiento1 });
			this->menuStrip2->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip2->Location = System::Drawing::Point(326, 165);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(152, 162);
			this->menuStrip2->TabIndex = 5;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// menuStrip3
			// 
			this->menuStrip3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip3->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mReportes1 });
			this->menuStrip3->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip3->Location = System::Drawing::Point(565, 165);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Size = System::Drawing::Size(146, 162);
			this->menuStrip3->TabIndex = 6;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// mReportes1
			// 
			this->mReportes1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mReportes1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->toolStripMenuItem119,
					this->toolStripMenuItem118, this->toolStripMenuItem117, this->toolStripMenuItem116, this->toolStripMenuItem115, this->toolStripMenuItem114,
					this->toolStripMenuItem113, this->toolStripMenuItem112, this->toolStripMenuItem111, this->toolStripMenuItem110, this->toolStripMenuItem109,
					this->toolStripMenuItem108, this->toolStripMenuItem107, this->toolStripMenuItem106
			});
			this->mReportes1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mReportes1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mReportes1.Image")));
			this->mReportes1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mReportes1->Name = L"mReportes1";
			this->mReportes1->Size = System::Drawing::Size(139, 156);
			this->mReportes1->Text = L"Reportes";
			this->mReportes1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem119
			// 
			this->toolStripMenuItem119->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem119.Image")));
			this->toolStripMenuItem119->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem119->Name = L"toolStripMenuItem119";
			this->toolStripMenuItem119->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem119->Text = L"Inventario del supermercado";
			this->toolStripMenuItem119->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem118
			// 
			this->toolStripMenuItem118->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem118.Image")));
			this->toolStripMenuItem118->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem118->Name = L"toolStripMenuItem118";
			this->toolStripMenuItem118->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem118->Text = L"Pasillos del supermercado";
			this->toolStripMenuItem118->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem117
			// 
			this->toolStripMenuItem117->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem117.Image")));
			this->toolStripMenuItem117->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem117->Name = L"toolStripMenuItem117";
			this->toolStripMenuItem117->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem117->Text = L"Clientes del supermercado";
			this->toolStripMenuItem117->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem116
			// 
			this->toolStripMenuItem116->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem116.Image")));
			this->toolStripMenuItem116->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem116->Name = L"toolStripMenuItem116";
			this->toolStripMenuItem116->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem116->Text = L"Productos de un pasillo";
			this->toolStripMenuItem116->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem115
			// 
			this->toolStripMenuItem115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem115.Image")));
			this->toolStripMenuItem115->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem115->Name = L"toolStripMenuItem115";
			this->toolStripMenuItem115->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem115->Text = L"Factura de mayor monto";
			this->toolStripMenuItem115->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem114
			// 
			this->toolStripMenuItem114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem114.Image")));
			this->toolStripMenuItem114->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem114->Name = L"toolStripMenuItem114";
			this->toolStripMenuItem114->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem114->Text = L"Marcas de un producto";
			this->toolStripMenuItem114->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem113
			// 
			this->toolStripMenuItem113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem113.Image")));
			this->toolStripMenuItem113->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem113->Name = L"toolStripMenuItem113";
			this->toolStripMenuItem113->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem113->Text = L"Cliente que más facturo";
			this->toolStripMenuItem113->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem112
			// 
			this->toolStripMenuItem112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem112.Image")));
			this->toolStripMenuItem112->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem112->Name = L"toolStripMenuItem112";
			this->toolStripMenuItem112->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem112->Text = L"Producto que más se cargó en las Góndolas";
			this->toolStripMenuItem112->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem111
			// 
			this->toolStripMenuItem111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem111.Image")));
			this->toolStripMenuItem111->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem111->Name = L"toolStripMenuItem111";
			this->toolStripMenuItem111->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem111->Text = L"Cliente que menos compro";
			this->toolStripMenuItem111->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem110
			// 
			this->toolStripMenuItem110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem110.Image")));
			this->toolStripMenuItem110->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem110->Name = L"toolStripMenuItem110";
			this->toolStripMenuItem110->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem110->Text = L"Cliente que más compro";
			this->toolStripMenuItem110->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem109
			// 
			this->toolStripMenuItem109->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem109.Image")));
			this->toolStripMenuItem109->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem109->Name = L"toolStripMenuItem109";
			this->toolStripMenuItem109->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem109->Text = L"Marcas más vendidos";
			this->toolStripMenuItem109->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem108
			// 
			this->toolStripMenuItem108->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem108.Image")));
			this->toolStripMenuItem108->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem108->Name = L"toolStripMenuItem108";
			this->toolStripMenuItem108->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem108->Text = L"Productos por pasillo más vendidos";
			this->toolStripMenuItem108->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem107
			// 
			this->toolStripMenuItem107->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem107.Image")));
			this->toolStripMenuItem107->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem107->Name = L"toolStripMenuItem107";
			this->toolStripMenuItem107->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem107->Text = L"Pasillo menos visitado";
			this->toolStripMenuItem107->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem106
			// 
			this->toolStripMenuItem106->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem106.Image")));
			this->toolStripMenuItem106->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem106->Name = L"toolStripMenuItem106";
			this->toolStripMenuItem106->Size = System::Drawing::Size(461, 30);
			this->toolStripMenuItem106->Text = L"Pasillo mas visitado";
			this->toolStripMenuItem106->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// menuStrip4
			// 
			this->menuStrip4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip4->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mControles1 });
			this->menuStrip4->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip4->Location = System::Drawing::Point(672, 388);
			this->menuStrip4->Name = L"menuStrip4";
			this->menuStrip4->Size = System::Drawing::Size(146, 162);
			this->menuStrip4->TabIndex = 7;
			this->menuStrip4->Text = L"menuStrip4";
			// 
			// mControles1
			// 
			this->mControles1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mControles1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->mVerificarInventario1,
					this->mRevisarGondolas1, this->mConsultarPrecio1, this->mConsultarDescuento1, this->mConsultarProductos1, this->mConsultarMarcas1,
					this->mConsultarDescuentoClientes1, this->mComprar1
			});
			this->mControles1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mControles1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mControles1.Image")));
			this->mControles1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mControles1->Name = L"mControles1";
			this->mControles1->Size = System::Drawing::Size(139, 156);
			this->mControles1->Text = L"Controles";
			this->mControles1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mVerificarInventario1
			// 
			this->mVerificarInventario1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mVerificarInventario1.Image")));
			this->mVerificarInventario1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mVerificarInventario1->Name = L"mVerificarInventario1";
			this->mVerificarInventario1->Size = System::Drawing::Size(330, 30);
			this->mVerificarInventario1->Text = L"Verificar inventario";
			this->mVerificarInventario1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mRevisarGondolas1
			// 
			this->mRevisarGondolas1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRevisarGondolas1.Image")));
			this->mRevisarGondolas1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mRevisarGondolas1->Name = L"mRevisarGondolas1";
			this->mRevisarGondolas1->Size = System::Drawing::Size(330, 30);
			this->mRevisarGondolas1->Text = L"Verificar góndolas";
			this->mRevisarGondolas1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mConsultarPrecio1
			// 
			this->mConsultarPrecio1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mConsultarPrecio1.Image")));
			this->mConsultarPrecio1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mConsultarPrecio1->Name = L"mConsultarPrecio1";
			this->mConsultarPrecio1->Size = System::Drawing::Size(330, 30);
			this->mConsultarPrecio1->Text = L"Consultar precio";
			this->mConsultarPrecio1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mConsultarDescuento1
			// 
			this->mConsultarDescuento1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mConsultarDescuento1.Image")));
			this->mConsultarDescuento1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mConsultarDescuento1->Name = L"mConsultarDescuento1";
			this->mConsultarDescuento1->Size = System::Drawing::Size(330, 30);
			this->mConsultarDescuento1->Text = L"Consultar descuento";
			this->mConsultarDescuento1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mConsultarProductos1
			// 
			this->mConsultarProductos1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mConsultarProductos1.Image")));
			this->mConsultarProductos1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mConsultarProductos1->Name = L"mConsultarProductos1";
			this->mConsultarProductos1->Size = System::Drawing::Size(330, 30);
			this->mConsultarProductos1->Text = L"Consultar productos";
			this->mConsultarProductos1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mConsultarMarcas1
			// 
			this->mConsultarMarcas1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mConsultarMarcas1.Image")));
			this->mConsultarMarcas1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mConsultarMarcas1->Name = L"mConsultarMarcas1";
			this->mConsultarMarcas1->Size = System::Drawing::Size(330, 30);
			this->mConsultarMarcas1->Text = L"Consultar marcas";
			this->mConsultarMarcas1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mConsultarDescuentoClientes1
			// 
			this->mConsultarDescuentoClientes1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mConsultarDescuentoClientes1.Image")));
			this->mConsultarDescuentoClientes1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mConsultarDescuentoClientes1->Name = L"mConsultarDescuentoClientes1";
			this->mConsultarDescuentoClientes1->Size = System::Drawing::Size(330, 30);
			this->mConsultarDescuentoClientes1->Text = L"Consultar descuento clientes";
			this->mConsultarDescuentoClientes1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// mComprar1
			// 
			this->mComprar1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mComprar1.Image")));
			this->mComprar1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mComprar1->Name = L"mComprar1";
			this->mComprar1->Size = System::Drawing::Size(330, 30);
			this->mComprar1->Text = L"Comprar";
			this->mComprar1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// menuStrip5
			// 
			this->menuStrip5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip5->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mUsuarios });
			this->menuStrip5->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip5->Location = System::Drawing::Point(447, 388);
			this->menuStrip5->Name = L"menuStrip5";
			this->menuStrip5->Size = System::Drawing::Size(146, 181);
			this->menuStrip5->TabIndex = 8;
			this->menuStrip5->Text = L"menuStrip5";
			// 
			// mUsuarios
			// 
			this->mUsuarios->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mUsuarios->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem72,
					this->toolStripMenuItem89, this->toolStripMenuItem98, this->toolStripMenuItem121
			});
			this->mUsuarios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mUsuarios->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mUsuarios.Image")));
			this->mUsuarios->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mUsuarios->Name = L"mUsuarios";
			this->mUsuarios->Size = System::Drawing::Size(139, 156);
			this->mUsuarios->Text = L"Usuarios";
			this->mUsuarios->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem72
			// 
			this->toolStripMenuItem72->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem99,
					this->toolStripMenuItem123, this->toolStripMenuItem132, this->toolStripMenuItem141
			});
			this->toolStripMenuItem72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem72.Image")));
			this->toolStripMenuItem72->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem72->Name = L"toolStripMenuItem72";
			this->toolStripMenuItem72->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem72->Size = System::Drawing::Size(264, 70);
			this->toolStripMenuItem72->Text = L"Administradores";
			this->toolStripMenuItem72->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem99
			// 
			this->toolStripMenuItem99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem99.Image")));
			this->toolStripMenuItem99->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem99->Name = L"toolStripMenuItem99";
			this->toolStripMenuItem99->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem99->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem99->Text = L"Inserción";
			this->toolStripMenuItem99->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem99->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem99_Click);
			// 
			// toolStripMenuItem123
			// 
			this->toolStripMenuItem123->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem123.Image")));
			this->toolStripMenuItem123->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem123->Name = L"toolStripMenuItem123";
			this->toolStripMenuItem123->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem123->Text = L"Consultas";
			this->toolStripMenuItem123->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem123->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem123_Click);
			// 
			// toolStripMenuItem132
			// 
			this->toolStripMenuItem132->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem132.Image")));
			this->toolStripMenuItem132->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem132->Name = L"toolStripMenuItem132";
			this->toolStripMenuItem132->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem132->Text = L"Modificación";
			this->toolStripMenuItem132->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem132->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem132_Click);
			// 
			// toolStripMenuItem141
			// 
			this->toolStripMenuItem141->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem141.Image")));
			this->toolStripMenuItem141->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem141->Name = L"toolStripMenuItem141";
			this->toolStripMenuItem141->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem141->Text = L"Eliminación";
			this->toolStripMenuItem141->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem141->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem141_Click);
			// 
			// toolStripMenuItem89
			// 
			this->toolStripMenuItem89->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem73,
					this->toolStripMenuItem74, this->toolStripMenuItem75, this->toolStripMenuItem76
			});
			this->toolStripMenuItem89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem89.Image")));
			this->toolStripMenuItem89->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem89->Name = L"toolStripMenuItem89";
			this->toolStripMenuItem89->Size = System::Drawing::Size(264, 70);
			this->toolStripMenuItem89->Text = L"Clientes";
			this->toolStripMenuItem89->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem73
			// 
			this->toolStripMenuItem73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem73.Image")));
			this->toolStripMenuItem73->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem73->Name = L"toolStripMenuItem73";
			this->toolStripMenuItem73->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem73->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem73->Text = L"Inserción";
			this->toolStripMenuItem73->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem73->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem73_Click);
			// 
			// toolStripMenuItem74
			// 
			this->toolStripMenuItem74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem74.Image")));
			this->toolStripMenuItem74->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem74->Name = L"toolStripMenuItem74";
			this->toolStripMenuItem74->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem74->Text = L"Consultas";
			this->toolStripMenuItem74->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem74->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem74_Click);
			// 
			// toolStripMenuItem75
			// 
			this->toolStripMenuItem75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem75.Image")));
			this->toolStripMenuItem75->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem75->Name = L"toolStripMenuItem75";
			this->toolStripMenuItem75->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem75->Text = L"Modificación";
			this->toolStripMenuItem75->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem75->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem75_Click);
			// 
			// toolStripMenuItem76
			// 
			this->toolStripMenuItem76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem76.Image")));
			this->toolStripMenuItem76->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem76->Name = L"toolStripMenuItem76";
			this->toolStripMenuItem76->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem76->Text = L"Eliminación";
			this->toolStripMenuItem76->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem76->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem76_Click);
			// 
			// toolStripMenuItem98
			// 
			this->toolStripMenuItem98->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem77,
					this->toolStripMenuItem78, this->toolStripMenuItem79, this->toolStripMenuItem88
			});
			this->toolStripMenuItem98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem98.Image")));
			this->toolStripMenuItem98->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem98->Name = L"toolStripMenuItem98";
			this->toolStripMenuItem98->Size = System::Drawing::Size(264, 70);
			this->toolStripMenuItem98->Text = L"Vendedores";
			this->toolStripMenuItem98->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem77
			// 
			this->toolStripMenuItem77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem77.Image")));
			this->toolStripMenuItem77->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem77->Name = L"toolStripMenuItem77";
			this->toolStripMenuItem77->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem77->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem77->Text = L"Inserción";
			this->toolStripMenuItem77->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem77->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem77_Click);
			// 
			// toolStripMenuItem78
			// 
			this->toolStripMenuItem78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem78.Image")));
			this->toolStripMenuItem78->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem78->Name = L"toolStripMenuItem78";
			this->toolStripMenuItem78->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem78->Text = L"Consultas";
			this->toolStripMenuItem78->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem78->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem78_Click);
			// 
			// toolStripMenuItem79
			// 
			this->toolStripMenuItem79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem79.Image")));
			this->toolStripMenuItem79->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem79->Name = L"toolStripMenuItem79";
			this->toolStripMenuItem79->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem79->Text = L"Modificación";
			this->toolStripMenuItem79->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem79->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem79_Click);
			// 
			// toolStripMenuItem88
			// 
			this->toolStripMenuItem88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem88.Image")));
			this->toolStripMenuItem88->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem88->Name = L"toolStripMenuItem88";
			this->toolStripMenuItem88->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem88->Text = L"Eliminación";
			this->toolStripMenuItem88->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem88->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem88_Click);
			// 
			// toolStripMenuItem121
			// 
			this->toolStripMenuItem121->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem90,
					this->toolStripMenuItem91, this->toolStripMenuItem92, this->toolStripMenuItem93
			});
			this->toolStripMenuItem121->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem121.Image")));
			this->toolStripMenuItem121->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem121->Name = L"toolStripMenuItem121";
			this->toolStripMenuItem121->Size = System::Drawing::Size(264, 70);
			this->toolStripMenuItem121->Text = L"Ciudades";
			this->toolStripMenuItem121->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem90
			// 
			this->toolStripMenuItem90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem90.Image")));
			this->toolStripMenuItem90->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem90->Name = L"toolStripMenuItem90";
			this->toolStripMenuItem90->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem90->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem90->Text = L"Inserción";
			this->toolStripMenuItem90->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem90->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem90_Click);
			// 
			// toolStripMenuItem91
			// 
			this->toolStripMenuItem91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem91.Image")));
			this->toolStripMenuItem91->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem91->Name = L"toolStripMenuItem91";
			this->toolStripMenuItem91->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem91->Text = L"Consultas";
			this->toolStripMenuItem91->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem91->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem91_Click);
			// 
			// toolStripMenuItem92
			// 
			this->toolStripMenuItem92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem92.Image")));
			this->toolStripMenuItem92->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem92->Name = L"toolStripMenuItem92";
			this->toolStripMenuItem92->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem92->Text = L"Modificación";
			this->toolStripMenuItem92->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem92->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem92_Click);
			// 
			// toolStripMenuItem93
			// 
			this->toolStripMenuItem93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem93.Image")));
			this->toolStripMenuItem93->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem93->Name = L"toolStripMenuItem93";
			this->toolStripMenuItem93->Size = System::Drawing::Size(194, 30);
			this->toolStripMenuItem93->Text = L"Eliminación";
			this->toolStripMenuItem93->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem93->Click += gcnew System::EventHandler(this, &VentanaSupermercado::toolStripMenuItem93_Click);
			// 
			// menuStrip6
			// 
			this->menuStrip6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip6->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip6->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mFacturacion1 });
			this->menuStrip6->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip6->Location = System::Drawing::Point(791, 165);
			this->menuStrip6->Name = L"menuStrip6";
			this->menuStrip6->Size = System::Drawing::Size(146, 162);
			this->menuStrip6->TabIndex = 9;
			this->menuStrip6->Text = L"menuStrip6";
			// 
			// mFacturacion1
			// 
			this->mFacturacion1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mFacturacion1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem95,
					this->toolStripMenuItem96
			});
			this->mFacturacion1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mFacturacion1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mFacturacion1.Image")));
			this->mFacturacion1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mFacturacion1->Name = L"mFacturacion1";
			this->mFacturacion1->Size = System::Drawing::Size(139, 156);
			this->mFacturacion1->Text = L"Facturación";
			this->mFacturacion1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem95
			// 
			this->toolStripMenuItem95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem95.Image")));
			this->toolStripMenuItem95->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem95->Name = L"toolStripMenuItem95";
			this->toolStripMenuItem95->Size = System::Drawing::Size(250, 30);
			this->toolStripMenuItem95->Text = L"Facturación Cliente";
			this->toolStripMenuItem95->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem96
			// 
			this->toolStripMenuItem96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem96.Image")));
			this->toolStripMenuItem96->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem96->Name = L"toolStripMenuItem96";
			this->toolStripMenuItem96->Size = System::Drawing::Size(250, 30);
			this->toolStripMenuItem96->Text = L"Comprar Inventario";
			this->toolStripMenuItem96->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// VentanaSupermercado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->menuStrip6);
			this->Controls->Add(this->menuStrip5);
			this->Controls->Add(this->menuStrip4);
			this->Controls->Add(this->menuStrip3);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Name = L"VentanaSupermercado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaSupermercado";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &VentanaSupermercado::VentanaSupermercado_FormClosing);
			this->Load += gcnew System::EventHandler(this, &VentanaSupermercado::VentanaSupermercado_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->menuStrip4->ResumeLayout(false);
			this->menuStrip4->PerformLayout();
			this->menuStrip5->ResumeLayout(false);
			this->menuStrip5->PerformLayout();
			this->menuStrip6->ResumeLayout(false);
			this->menuStrip6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void VistaAdmin(void) {

		}

		void VistaCteReg(void) {
			this->mMantenimiento->Enabled = false;
			this->mMantenimiento1->Enabled = false;
			this->mReportes->Enabled = false;
			this->mReportes1->Enabled = false;
			this->mFacturacion->Enabled = false;
			this->mFacturacion1->Enabled = false;
			this->mVerificarInventario->Enabled = false;
			this->mVerificarInventario1->Enabled = false;
			this->mRevisarGondolas->Enabled = false;
			this->mRevisarGondolas1->Enabled = false;
			this->mConsultarMarcas->Enabled = false;
			this->mConsultarMarcas1->Enabled = false;
			this->mConsultarDescuentoClientes->Enabled = false;
			this->mConsultarDescuentoClientes1->Enabled = false;
			this->mUsuarios->Enabled = false;
		}

		void VistaCteNoReg(void) {
			this->mMantenimiento->Enabled = false;
			this->mMantenimiento1->Enabled = false;
			this->mReportes->Enabled = false;
			this->mReportes1->Enabled = false;
			this->mFacturacion->Enabled = false;
			this->mFacturacion1->Enabled = false;
			this->mVerificarInventario->Enabled = false;
			this->mVerificarInventario1->Enabled = false;
			this->mConsultarDescuento->Enabled = false;
			this->mConsultarDescuento1->Enabled = false;
			this->mComprar->Enabled = false;
			this->mComprar1->Enabled = false;
			this->mRevisarGondolas->Enabled = false;
			this->mRevisarGondolas1->Enabled = false;
			this->mConsultarMarcas->Enabled = false;
			this->mConsultarMarcas1->Enabled = false;
			this->mConsultarDescuentoClientes->Enabled = false;
			this->mConsultarDescuentoClientes1->Enabled = false;
			this->mUsuarios->Enabled = false;
		}

		void VistaVendedor(void) {
			this->mMantenimiento->Enabled = false;
			this->mMantenimiento1->Enabled = false;
			this->mReportes->Enabled = false;
			this->mReportes1->Enabled = false;
			this->mFacturacion->Enabled = false;
			this->mFacturacion1->Enabled = false;
			this->mVerificarInventario->Enabled = false;
			this->mVerificarInventario1->Enabled = false;
			this->mConsultarDescuento->Enabled = false;
			this->mConsultarDescuento1->Enabled = false;
			this->mComprar->Enabled = false;
			this->mComprar1->Enabled = false;
			this->mRevisarGondolas->Enabled = false;
			this->mRevisarGondolas1->Enabled = false;
			this->mUsuarios->Enabled = false;
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
private: System::Void VentanaSupermercado_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pasillosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripMenuItem34_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem35_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem36_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem37_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}

private: System::Void toolStripMenuItem99_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem73_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem77_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem90_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaInsercion^ ventana = gcnew VentanaInsercion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem43_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem44_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem45_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem46_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem123_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem74_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem78_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem91_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaConsultas^ ventana = gcnew VentanaConsultas(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem52_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem53_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem54_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem55_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem132_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem75_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem79_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem92_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaModificacion^ ventana = gcnew VentanaModificacion(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem18_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem19_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem20_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem21_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem22_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem23_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem24_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem61_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 1;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem62_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 2;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem63_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 3;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem64_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 4;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem141_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 5;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem76_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 6;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem88_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 7;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
private: System::Void toolStripMenuItem93_Click(System::Object^ sender, System::EventArgs^ e) {
	int opc = 8;

	this->Hide();
	VentanaEliminación^ ventana = gcnew VentanaEliminación(this, opc, *pasillosB, *productosB, *marcasB,
		*inventariosB, *adminsB, *clientesB, *vendedoresB, *ciudadesB);
	ventana->ShowDialog();
}
};
}
