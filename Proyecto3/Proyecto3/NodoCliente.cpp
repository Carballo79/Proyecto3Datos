
#include "NodoCliente.h"
#include "Utilidades.h"
#include <msclr/marshal_cppstd.h>
#using <System.Windows.Forms.dll>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <string>


NodoCliente::NodoCliente() : siguiente(NULL) {}

NodoCliente* NodoCliente::insertarOrdenado(NodoCliente*& lista, string cedula)
{
    NodoCliente* nuevo = new NodoCliente();
    nuevo->info.cedula = cedula;
    nuevo->siguiente = NULL;

    // Si la lista está vacía, el nuevo nodo se convierte en el primer nodo
    if (lista == NULL) {
        lista = nuevo;
    }
    else {
        // Recorre la lista hasta encontrar el último nodo
        NodoCliente* actual = lista;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        // Inserta el nuevo nodo al final de la lista
        actual->siguiente = nuevo;
    }

    return nuevo;
}

NodoCliente* NodoCliente::buscar(NodoCliente* lista, string cedula)
{
    NodoCliente* aux = lista;

    while (aux != NULL)
    {
        if (aux->info.cedula == cedula)
            return aux;

        aux = aux->siguiente;
    }

    return NULL;
}

NodoCliente* NodoCliente::insertarOrdenadoSinRepetir(NodoCliente*& listaClientes, string cedula, string producto, string cantidad)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        cliente = insertarOrdenado(listaClientes, cedula);

    NodoProducto::insertar(cliente->info.listaProductos, producto, cantidad);

    return cliente;
}

wstring NodoCliente::mostrarListaDeClientes(NodoCliente* lista)
{
    wstring salida;

    while (lista != NULL)
    {
        salida += L"Cliente Cedula: " + strAWstr(lista->info.cedula) + L"\n";
        NodoProducto* listaProductos = lista->info.listaProductos;

        while (listaProductos != NULL)
        {
            salida += L"Producto: " + strAWstr(listaProductos->info.producto) + L" /// Cantidad: " + strAWstr(listaProductos->info.cantidad) + L"\n";
            listaProductos = listaProductos->siguiente;
        }

        lista = lista->siguiente;
    }

    return salida;
}

wstring NodoCliente::mostrarClientePorCedula(NodoCliente* lista, string& cedulaBuscada) {
    wstring salida;

    while (lista != NULL) {
        if (lista->info.cedula == cedulaBuscada) {
            salida += L"Cliente Cedula: " + strAWstr(lista->info.cedula) + L"\n";
            NodoProducto* listaProductos = lista->info.listaProductos;

            while (listaProductos != NULL) {
                salida += L"Producto: " + strAWstr(listaProductos->info.producto) + L" /// Cantidad: " + strAWstr(listaProductos->info.cantidad) + L"\n";
                listaProductos = listaProductos->siguiente;
            }
            break;  // Detener la búsqueda una vez que se encuentra el cliente
        }
        lista = lista->siguiente;
    }

    if (salida.empty()) {
        salida = L"Cliente con cédula " + strAWstr(cedulaBuscada) + L" no encontrado.\n";
    }

    return salida;
}

void NodoCliente::mostrarClientePorcedulaFacturar(NodoCliente* lista, string cedulaBuscada, System::Windows::Forms::CheckedListBox^ checkListBox) {
    checkListBox->Items->Clear();  // Limpiar el CheckListBox antes de agregar nuevos elementos

    while (lista != NULL) {
        if (lista->info.cedula == cedulaBuscada) {

            NodoProducto* listaProductos = lista->info.listaProductos;
            while (listaProductos != NULL) {
                System::String^ productoInfo = L"Producto: " + msclr::interop::marshal_as<System::String^>(listaProductos->info.producto) + L" Cantidad: " + msclr::interop::marshal_as<System::String^>(listaProductos->info.cantidad);
                checkListBox->Items->Add(productoInfo);
                listaProductos = listaProductos->siguiente;
            }
            break;  // Detener la búsqueda una vez que se encuentra el cliente
        }
        lista = lista->siguiente;
    }
    if (checkListBox->Items->Count == 0) {
        System::String^ mensaje = L"No hay productos por facturar. \n";
        checkListBox->Items->Add(mensaje);
    }
}


void NodoCliente::borrarProducto(NodoCliente* listaClientes, string cedula, string producto)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
    {
        cout << "Cliente no encontrado." << endl;
        return;
    }

    NodoProducto* anterior = NULL;
    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.producto == producto)
        {
            if (anterior == NULL)
                cliente->info.listaProductos = actual->siguiente; // Si es el primer nodo de la lista de productos
            else
                anterior->siguiente = actual->siguiente; // Si no es el primer nodo

            delete actual;
            return;
        }

        anterior = actual;
        actual = actual->siguiente;
    }
}

bool NodoCliente::buscarProducto(NodoCliente* listaClientes, string cedula, string producto)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return false;

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.producto == producto)
            return true;

        actual = actual->siguiente;
    }

    return false;
}

void NodoCliente::modificarProducto(NodoCliente* listaClientes, string cedula, string producto, string cantidad)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return;

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL) {
        if (actual->info.producto == producto) {
            actual->info.cantidad = cantidad;
            return;
        }

        actual = actual->siguiente;
    }

    return;

}

NodoCliente* NodoCliente::eliminarPrimero(NodoCliente*& lista)
{
    if (lista == NULL) {
        return NULL;  // La lista ya está vacía, nada que eliminar
    }

    NodoCliente* aux = lista;  // Apuntar al primer nodo
    lista = lista->siguiente;  // Actualizar el puntero de inicio para apuntar al segundo nodo
    delete aux;  // Eliminar el primer nodo

    return lista;  // Devolver la nueva cabeza de la lista
}

string NodoCliente::retornarCantidadDeProducto(NodoCliente* listaClientes, string cedula, string producto)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return "";

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.producto == producto)
            return actual->info.cantidad;

        actual = actual->siguiente;
    }

    return "";
}


void NodoCliente::ImprimirFactura(NodoCliente* ComprasClientes, ArbolB*& clientes, ArbolAA*& inventarios, ArbolRN*& marcas) {
    NodoCliente* aux = ComprasClientes;
    int cantFacturasINT;
    double Descuentototal = 0.0;
    double descuentoCanasta = 0.0;
    double total = 0.0;
    double totalAPagar = 0.0;
    string canasta, cedula, data, temp, telefono, correo, codMarca, cantFacturasSTR;
    // Leer el contador de facturas del archivo
    ifstream archivoContador("contadorF.txt");
    int contadorFacturas;
    archivoContador >> contadorFacturas;
    archivoContador.close();

    // Incrementar el contador de facturas
    contadorFacturas++;

    // Guardar el contador de facturas incrementado en el archivo
    ofstream archivoContadorOut("contadorF.txt");
    archivoContadorOut << contadorFacturas;
    archivoContadorOut.close();

    // Obtener la fecha y hora actual
    time_t now = time(0);
    tm* ltm = localtime(&now);

    // Formatear la fecha y hora en un formato vÃ¡lido para los nombres de archivos
    stringstream ss;
    ss << 1900 + ltm->tm_year << "-" << 1 + ltm->tm_mon << "-" << ltm->tm_mday << "_"
        << 1 + ltm->tm_hour << "-" << 1 + ltm->tm_min << "-" << 1 + ltm->tm_sec;
    string dt = ss.str();

    // Crear un archivo de texto con la fecha y hora en el nombre
    ofstream archivo("Factura_" + dt + ".txt");
    ofstream archivoDatosFacturas("datosFacturas.txt", ofstream::out | ofstream::app);


    while (aux != NULL) {
        totalAPagar = 0;
        cedula = aux->info.cedula;
        archivo << "FACTURA #" << contadorFacturas << endl;
        archivo << "-----------------" << endl;
        archivo << "Cedula Cliente: " << cedula << endl;

        // Llama metodo para imprimir Telefono y Correo en base a la cedula
        data = clientes->buscarMostrarContacto(cedula);
        stringstream ss(data);
        for (int i = 0; i < 3; ++i)
            getline(ss, temp, ';');

        // Obtener el nÃºmero de telÃ©fono y el correo
        getline(ss, telefono, ';');
        getline(ss, correo, ';');

        archivo << "Telefono: " + telefono << endl;
        archivo << "Correo: " + correo << endl;

        NodoProducto* auxSL = aux->info.listaProductos;
        while (auxSL != NULL) {



            //clientes->aumentarNumCompras(cedula); aqui peta
            ////////////////////////////////////////////////////////////////////////////////
            /*
            Crear archivo para que un cliente tenga su respectiva cantidad de compras osea por cada producto es una compra ejemplo
                23232; 16  (16 productos en total)
                45345; 31
                423;22
            */

            System::String^ elemento = msclr::interop::marshal_as<System::String^>(auxSL->info.producto);
            System::String^ cantidad = msclr::interop::marshal_as<System::String^>(auxSL->info.cantidad);
           

            int indicePuntoYComa1 = elemento->IndexOf(';');
            int indicePuntoYComa2 = elemento->LastIndexOf(';');

            System::String^ elementoMedio = elemento->Substring(indicePuntoYComa1 + 1, indicePuntoYComa2 - indicePuntoYComa1 - 1)->Trim();

            System::String^ ultimoElemento = elemento->Substring(indicePuntoYComa2 + 1)->Trim();


            string productoStr = msclr::interop::marshal_as<string>(elementoMedio);
            string marcaStr = msclr::interop::marshal_as<string>(ultimoElemento);
            string cantidadStr = msclr::interop::marshal_as<string>(cantidad);


            System::Windows::Forms::MessageBox::Show(elementoMedio);
            System::Windows::Forms::MessageBox::Show(ultimoElemento);
            System::Windows::Forms::MessageBox::Show(cantidad);
            

            archivo << "CodProducto: " << productoStr << " /// Marca: " << marcaStr << " /// Cantidad: " << cantidadStr
                << " /// Precio Unitario: " << obtenerDato(marcas->buscarNodo(marcas->raiz,marcaStr)->dato,5)
                << " /// Total por producto: " << stringAInt(cantidadStr) * stringAInt(obtenerDato(marcas->buscarNodo(marcas->raiz, marcaStr)->dato, 5)) << endl;

            string codCanasta = inventarios->buscarPorMarca(codMarca);
            archivo << "Codigo de canasta: " + codCanasta << endl;
            if (codCanasta == "0") {
                descuentoCanasta = 0.01;
            }
            else {
                descuentoCanasta = 0.13;
            }
            Descuentototal = Descuentototal + (stringAFloat(cantidadStr) * stringAFloat(obtenerDato(marcas->buscarNodo(marcas->raiz, marcaStr)->dato, 5)) * descuentoCanasta);
            total = total + stringAFloat(cantidadStr) * stringAFloat(obtenerDato(marcas->buscarNodo(marcas->raiz, marcaStr)->dato, 5));

            auxSL = auxSL->siguiente;
        }
        totalAPagar = total - Descuentototal;
        archivo << "______________" << endl;
        archivo << " " << endl;
        archivo << "Total: " << total << endl;
        archivo << "Descuento total: " << Descuentototal << endl;
        archivo << "Total a pagar: " << totalAPagar << endl;
        //clientes->aumentarNumFacturas(cedula); peto
        //cantFacturasSTR = clientes->conseguirContFacturas(cedula);
        //cantFacturasINT = stringAInt(cantFacturasSTR);
        /////////////////////////////////////////////////////////////////////////////////////////////////
        /*
        Crear archivo para que un cliente tenga su respectiva cantidad de facturas ejemplo
         23232; 2 (2 facturas realizadas)
         45345; 5
         423;1
        */

        archivo << "Cantidad de Facturas de cliente: " << cantFacturasSTR << endl;
        if (cantFacturasINT >= 4) {
            archivo << "Total a pagar menos descuento por factura: " << totalAPagar * 0.95 << endl;
        }
        string datosF = cedula + ";" + floatAString(totalAPagar);
        archivoDatosFacturas << datosF << endl;
        /*
        Aqui lo que hago es agregar una linea nueva con lo que pago tal cliente en la factura para hacer el reporte del que mas 
        facturo.

        Cliente que más compro
        Cliente que menos compro
        Cliente que más facturo
        Factura de mayor monto

        Todo eso es para esos reportes.

        */
        break;
    }

    // Cerrar el archivo
    archivo.close();
    archivoDatosFacturas.close();
}
