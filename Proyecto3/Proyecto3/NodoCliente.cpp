
#include "Proyecto3.h"
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

string NodoCliente::extraerCont() {
    ifstream archivo("contadorF.txt");
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo. " << endl;
        return "NULL";
    }
    string linea;
    getline(archivo, linea);
    archivo.close();
    return linea;
}

void NodoCliente::archivoAumentarCompras(string cedula) {
    string nombreArchivo = "comprasPorCliente.txt";

    // Verifica si el archivo existe
    ifstream archivoLectura(nombreArchivo);
    bool archivoExiste = archivoLectura.is_open();
    archivoLectura.close();

    if (!archivoExiste) {
        // El archivo no existe
        ofstream archivoCreacion(nombreArchivo);
        if (!archivoCreacion.is_open()) {
            cerr << "Error al crear el archivo." << std::endl;
            return;
        }
        archivoCreacion.close();
    }

    // Abrir el archivo en modo lectura
    archivoLectura.open(nombreArchivo);
    if (!archivoLectura.is_open()) {
        cerr << "Error al abrir el archivo para lectura." << std::endl;
        return;
    }

    bool cedulaEncontrada = false;
    string linea;
    while (getline(archivoLectura, linea)) {
        istringstream ss(linea); // Mueve esta línea dentro del bucle
        string cedulaActual;
        while (getline(ss, cedulaActual, ';')) {
            if (cedulaActual == cedula) {
                cedulaEncontrada = true;
                break;
            }
        }
        if (cedulaEncontrada) {
            break; // Sal del bucle exterior si encontraste la cédula
        }
    }

    archivoLectura.close();

    if (!cedulaEncontrada) {
        // Abrir el archivo en modo escritura (append)
        ofstream archivoEscritura(nombreArchivo, std::ios::app);
        if (!archivoEscritura.is_open()) {
            cerr << "Error al abrir el archivo para escritura." << endl;
            return;
        }

        archivoEscritura << cedula + ";1" << endl; // Agrega ";1" al final de la línea
        archivoEscritura.close();
    }
    else {
        // Incrementar el número junto a la cédula
        ifstream archivoLectura2(nombreArchivo);
        ofstream archivoTemporal("temp.txt"); // Archivo temporal para escribir los datos actualizados

        if (!archivoLectura2.is_open() || !archivoTemporal.is_open()) {
            cerr << "Error al abrir archivos para lectura/escritura." << endl;
            return;
        }

        string linea;
        while (getline(archivoLectura2, linea)) {
            istringstream ss(linea);
            string cedulaActual;
            getline(ss, cedulaActual, ';');

            if (cedulaActual == cedula) {
                // Encontramos la cédula, incrementa el número
                int numero;
                ss >> numero; // Lee el número actual
                ++numero; // Incrementa el número
                archivoTemporal << cedula << ";" << numero << endl;
            }
            else {
                // No es la cédula buscada, copia la línea tal cual
                archivoTemporal << linea << endl;
            }
        }

        archivoLectura2.close();
        archivoTemporal.close();

        // Reemplazar el archivo original con el archivo temporal
        remove(nombreArchivo.c_str());
        rename("temp.txt", nombreArchivo.c_str());

        cout << "Número actualizado para la cédula " << cedula << "." << endl;
    }
  
}

void NodoCliente::archivoAumentarFacturas(string cedula) {
    string nombreArchivo = "facturasPorCliente.txt";

    // Verifica si el archivo existe
    ifstream archivoLectura(nombreArchivo);
    bool archivoExiste = archivoLectura.is_open();
    archivoLectura.close();

    if (!archivoExiste) {
        // El archivo no existe
        ofstream archivoCreacion(nombreArchivo);
        if (!archivoCreacion.is_open()) {
            cerr << "Error al crear el archivo." << std::endl;
            return;
        }
        archivoCreacion.close();
    }

    // Abrir el archivo en modo lectura
    archivoLectura.open(nombreArchivo);
    if (!archivoLectura.is_open()) {
        cerr << "Error al abrir el archivo para lectura." << std::endl;
        return;
    }

    bool cedulaEncontrada = false;
    string linea;
    while (getline(archivoLectura, linea)) {
        istringstream ss(linea); // Mueve esta línea dentro del bucle
        string cedulaActual;
        while (getline(ss, cedulaActual, ';')) {
            if (cedulaActual == cedula) {
                cedulaEncontrada = true;
                break;
            }
        }
        if (cedulaEncontrada) {
            break; // Sal del bucle exterior si encontraste la cédula
        }
    }

    archivoLectura.close();

    if (!cedulaEncontrada) {
        // Abrir el archivo en modo escritura (append)
        ofstream archivoEscritura(nombreArchivo, std::ios::app);
        if (!archivoEscritura.is_open()) {
            cerr << "Error al abrir el archivo para escritura." << endl;
            return;
        }

        archivoEscritura << cedula + ";1" << endl; // Agrega ";1" al final de la línea
        archivoEscritura.close();
    }
    else {
        // Incrementar el número junto a la cédula
        ifstream archivoLectura2(nombreArchivo);
        ofstream archivoTemporal("temp.txt"); // Archivo temporal para escribir los datos actualizados

        if (!archivoLectura2.is_open() || !archivoTemporal.is_open()) {
            cerr << "Error al abrir archivos para lectura/escritura." << endl;
            return;
        }

        string linea;
        while (getline(archivoLectura2, linea)) {
            istringstream ss(linea);
            string cedulaActual;
            getline(ss, cedulaActual, ';');

            if (cedulaActual == cedula) {
                // Encontramos la cédula, incrementa el número
                int numero;
                ss >> numero; // Lee el número actual
                ++numero; // Incrementa el número
                archivoTemporal << cedula << ";" << numero << endl;
            }
            else {
                // No es la cédula buscada, copia la línea tal cual
                archivoTemporal << linea << endl;
            }
        }

        archivoLectura2.close();
        archivoTemporal.close();

        // Reemplazar el archivo original con el archivo temporal
        remove(nombreArchivo.c_str());
        rename("temp.txt", nombreArchivo.c_str());

        cout << "Número actualizado para la cédula " << cedula << "." << endl;
    }
}

void NodoCliente::archivoAumentarVentas(string codPasillo) {
    string nombreArchivo = "VentasPorProductoPasillo.txt";

    // Verifica si el archivo existe
    ifstream archivoLectura(nombreArchivo);
    bool archivoExiste = archivoLectura.is_open();
    archivoLectura.close();

    if (!archivoExiste) {
        // El archivo no existe
        ofstream archivoCreacion(nombreArchivo);
        if (!archivoCreacion.is_open()) {
            cerr << "Error al crear el archivo." << std::endl;
            return;
        }
        archivoCreacion.close();
    }

    // Abrir el archivo en modo lectura
    archivoLectura.open(nombreArchivo);
    if (!archivoLectura.is_open()) {
        cerr << "Error al abrir el archivo para lectura." << std::endl;
        return;
    }

    bool codEncontrado = false;
    string linea;
    while (getline(archivoLectura, linea)) {
        istringstream ss(linea); // Mueve esta línea dentro del bucle
        string codActual;
        while (getline(ss, codActual, ';')) {
            if (codActual == codPasillo) {
                codEncontrado = true;
                break;
            }
        }
        if (codEncontrado) {
            break; // Sal del bucle exterior si encontraste el codigo del pasillo
        }
    }

    archivoLectura.close();

    if (!codEncontrado) {
        // Abrir el archivo en modo escritura (append)
        ofstream archivoEscritura(nombreArchivo, std::ios::app);
        if (!archivoEscritura.is_open()) {
            cerr << "Error al abrir el archivo para escritura." << endl;
            return;
        }

        archivoEscritura << codPasillo + ";1" << endl; // Agrega ";1" al final de la línea
        archivoEscritura.close();
    }
    else {
        // Incrementar el número junto a la cédula
        ifstream archivoLectura2(nombreArchivo);
        ofstream archivoTemporal("temp.txt"); // Archivo temporal para escribir los datos actualizados

        if (!archivoLectura2.is_open() || !archivoTemporal.is_open()) {
            cerr << "Error al abrir archivos para lectura/escritura." << endl;
            return;
        }

        string linea;
        while (getline(archivoLectura2, linea)) {
            istringstream ss(linea);
            string codActual;
            getline(ss, codActual, ';');

            if (codActual == codPasillo) {
                // Encontramos el codigo, incrementa el número
                int numero;
                ss >> numero; // Lee el número actual
                ++numero; // Incrementa el número
                archivoTemporal << codPasillo << ";" << numero << endl;
            }
            else {
                // No es la cédula buscada, copia la línea tal cual
                archivoTemporal << linea << endl;
            }
        }

        archivoLectura2.close();
        archivoTemporal.close();

        // Reemplazar el archivo original con el archivo temporal
        remove(nombreArchivo.c_str());
        rename("temp.txt", nombreArchivo.c_str());
    }
}

void NodoCliente::archivoAumentarVentasMarcas(string codMarca) {
    string nombreArchivo = "VentasMarcas.txt";

    // Verifica si el archivo existe
    ifstream archivoLectura(nombreArchivo);
    bool archivoExiste = archivoLectura.is_open();
    archivoLectura.close();

    if (!archivoExiste) {
        // El archivo no existe
        ofstream archivoCreacion(nombreArchivo);
        if (!archivoCreacion.is_open()) {
            cerr << "Error al crear el archivo." << std::endl;
            return;
        }
        archivoCreacion.close();
    }

    // Abrir el archivo en modo lectura
    archivoLectura.open(nombreArchivo);
    if (!archivoLectura.is_open()) {
        cerr << "Error al abrir el archivo para lectura." << std::endl;
        return;
    }

    bool codEncontrado = false;
    string linea;
    while (getline(archivoLectura, linea)) {
        istringstream ss(linea); // Mueve esta línea dentro del bucle
        string codActual;
        while (getline(ss, codActual, ';')) {
            if (codActual == codMarca) {
                codEncontrado = true;
                break;
            }
        }
        if (codEncontrado) {
            break; // Sal del bucle exterior si encontraste el codigo del pasillo
        }
    }

    archivoLectura.close();

    if (!codEncontrado) {
        // Abrir el archivo en modo escritura (append)
        ofstream archivoEscritura(nombreArchivo, std::ios::app);
        if (!archivoEscritura.is_open()) {
            cerr << "Error al abrir el archivo para escritura." << endl;
            return;
        }

        archivoEscritura << codMarca + ";1" << endl; // Agrega ";1" al final de la línea
        archivoEscritura.close();
    }
    else {
        // Incrementar el número junto a la cédula
        ifstream archivoLectura2(nombreArchivo);
        ofstream archivoTemporal("temp.txt"); // Archivo temporal para escribir los datos actualizados

        if (!archivoLectura2.is_open() || !archivoTemporal.is_open()) {
            cerr << "Error al abrir archivos para lectura/escritura." << endl;
            return;
        }

        string linea;
        while (getline(archivoLectura2, linea)) {
            istringstream ss(linea);
            string codActual;
            getline(ss, codActual, ';');

            if (codActual == codMarca) {
                // Encontramos el codigo, incrementa el número
                int numero;
                ss >> numero; // Lee el número actual
                ++numero; // Incrementa el número
                archivoTemporal << codMarca << ";" << numero << endl;
            }
            else {
                // No es la cédula buscada, copia la línea tal cual
                archivoTemporal << linea << endl;
            }
        }

        archivoLectura2.close();
        archivoTemporal.close();

        // Reemplazar el archivo original con el archivo temporal
        remove(nombreArchivo.c_str());
        rename("temp.txt", nombreArchivo.c_str());
    }
}

void NodoCliente::ImprimirFactura(NodoCliente* ComprasClientes, ArbolB*& clientes, ArbolAA*& inventarios, ArbolRN*& marcas) {
    NodoCliente* aux = ComprasClientes;
    int cantFacturasINT;
    double Descuentototal = 0.0;
    double descuentoCanasta = 0.0;
    double total = 0.0;
    double totalAPagar = 0.0;
    string canasta, cedula, data, temp, telefono, correo, codMarca, cantFacturasSTR, cont;
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

            //cantidad de compras por cliente
            archivoAumentarCompras(cedula);


            System::String^ elemento = msclr::interop::marshal_as<System::String^>(auxSL->info.producto);
            System::String^ cantidad = msclr::interop::marshal_as<System::String^>(auxSL->info.cantidad);
           

            int indicePuntoYComa1 = elemento->IndexOf(';');
            int indicePuntoYComa2 = elemento->LastIndexOf(';');

            System::String^ elementoMedio = elemento->Substring(indicePuntoYComa1 + 1, indicePuntoYComa2 - indicePuntoYComa1 - 1)->Trim();

            System::String^ ultimoElemento = elemento->Substring(indicePuntoYComa2 + 1)->Trim();


            string productoStr = msclr::interop::marshal_as<string>(elementoMedio);
            string marcaStr = msclr::interop::marshal_as<string>(ultimoElemento);
            string cantidadStr = msclr::interop::marshal_as<string>(cantidad);

            string pasilloStr = obtenerDato(marcasB->buscarNodo(marcasB->raiz, marcaStr)->dato, 0);

            archivoAumentarVentas(pasilloStr);
            archivoAumentarVentasMarcas(marcaStr);

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
        archivoAumentarFacturas(cedula);
        cont = extraerCont();
        cantFacturasSTR = clientes->conseguirContFacturas(cedula);
        cantFacturasINT = stringAInt(cantFacturasSTR);

        archivo << "Cantidad de Facturas de cliente: " << cantFacturasSTR << endl;
        if (cantFacturasINT >= 4) {
            archivo << "Total a pagar menos descuento por factura: " << totalAPagar * 0.95 << endl;
            totalAPagar = (totalAPagar * 0.95);
        }
        string datosF = cedula + ";" + floatAString(totalAPagar) + ";" + cont;
        archivoDatosFacturas << datosF << endl;
        break;
    }

    // Cerrar el archivo
    archivo.close();
    archivoDatosFacturas.close();
}

void NodoCliente::clienteQueMasCompro() {
    string nombreArchivoEntrada = "comprasPorCliente.txt";
    string nombreArchivoSalida = "ReporteClienteMasCompro.txt";

    // Primero, encontrar el número máximo de compras
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numComprasMax = 0;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, numCompras;
        char separador;
        if (iss >> cedula >> separador >> numCompras) {
            if (numCompras > numComprasMax) {
                numComprasMax = numCompras;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los clientes con el número máximo de compras
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, numCompras;
        char separador;
        if (iss >> cedula >> separador >> numCompras) {
            if (numCompras == numComprasMax) {
                archivoSalida << "Cédula: " << cedula << "\n";
                archivoSalida << "Número de compras: " << numCompras << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

}

void NodoCliente::clienteQueMenosCompro() {
    string nombreArchivoEntrada = "comprasPorCliente.txt";
    string nombreArchivoSalida = "ReporteClienteMenosCompro.txt";

    // Primero, encontrar el número minimo de compras
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numComprasMin = INT_MAX;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, numCompras;
        char separador;
        if (iss >> cedula >> separador >> numCompras) {
            if (numCompras < numComprasMin) {
                numComprasMin = numCompras;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los clientes con el número máximo de compras
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, numCompras;
        char separador;
        if (iss >> cedula >> separador >> numCompras) {
            if (numCompras == numComprasMin) {
                archivoSalida << "Cédula: " << cedula << "\n";
                archivoSalida << "Número de compras: " << numCompras << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();
}



void NodoCliente::clienteQueMasPago() {
    string nombreArchivoEntrada = "datosFacturas.txt";
    string nombreArchivoSalida = "ReporteClienteMasPago.txt";

    // Primero, encontrar el monto máximo pagado
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    double montoMaximoPagado = 0.0;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, factura;
        double montoPagado;
        char separador;
        if (iss >> cedula >> separador >> montoPagado >> separador >> factura) {
            if (montoPagado > montoMaximoPagado) {
                montoMaximoPagado = montoPagado;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los clientes que pagaron el monto máximo
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, factura;
        double montoPagado;
        char separador;
        if (iss >> cedula >> separador >> montoPagado >> separador >> factura) {
            if (montoPagado == montoMaximoPagado) {
                archivoSalida << "Cédula: " << cedula << "\n";
                archivoSalida << "Monto pagado: " << montoPagado << "\n";
                archivoSalida << "Factura: " << factura << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();
}


void NodoCliente::clienteQueMasFacturo() {
    string nombreArchivoEntrada = "facturasPorCliente.txt";
    string nombreArchivoSalida = "ReporteClienteQueMasFacturo.txt";

    // Primero, encontrar el número máximo de facturas
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numFacturasMax = 0;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, numFacturas;
        char separador;
        if (iss >> cedula >> separador >> numFacturas) {
            if (numFacturas > numFacturasMax) {
                numFacturasMax = numFacturas;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los clientes con el número máximo de facturas
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int cedula, numFacturas;
        char separador;
        if (iss >> cedula >> separador >> numFacturas) {
            if (numFacturas == numFacturasMax) {
                archivoSalida << "Cédula: " << cedula << "\n";
                archivoSalida << "Número de facturas: " << numFacturas << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

}

void NodoCliente::productosPorPasilloMasVendidos(string codPasillo) {
    string nombreArchivoEntrada = "VentasPorProductoPasillo.txt";
    string nombreArchivoSalida = "Reporte-ProductosPorPasilloMasVendidos.txt";

    // Primero, encontrar el número máximo de ventas
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numVentasMax = 0;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codPasillo, numVentas;
        char separador;
        if (iss >> codPasillo >> separador >> numVentas) {
            if (numVentas > numVentasMax) {
                numVentasMax = numVentas;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los clientes con el número máximo de ventas
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codPasillo, numVentas;
        char separador;
        if (iss >> codPasillo >> separador >> numVentas) {
            if (numVentas == numVentasMax) {
                archivoSalida << "Código de pasillo: " << codPasillo << "\n";
                //archivoSalida << "Código de producto: " << obtenerDato(productosB->obtenerCodProducto(productosB->raiz, intAString(codPasillo))->dato, 1) << "\n";
                archivoSalida << "Número de ventas: " << numVentas << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();
}

void NodoCliente::marcasMasVendidas() {
    string nombreArchivoEntrada = "VentasMarcas.txt";
    string nombreArchivoSalida = "Reporte-MarcasMasVendidas.txt";

    // Primero, encontrar el número máximo de ventas
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numVentasMax = 0;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codMarca, numVentas;
        char separador;
        if (iss >> codMarca >> separador >> numVentas) {
            if (numVentas > numVentasMax) {
                numVentasMax = numVentas;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos las marcas con el número máximo de ventas
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codMarca, numVentas;
        char separador;
        if (iss >> codMarca >> separador >> numVentas) {
            if (numVentas == numVentasMax) {
                archivoSalida << "Código de marca: " << codMarca << "\n";
                archivoSalida << "Número de ventas: " << numVentas << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();
}
