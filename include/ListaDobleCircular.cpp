#include "ListaDobleCircular.h"

ListaDobleCircular::ListaDobleCircular()
{
    //ctor
    this->Primero=0;
    this->Tamanio=0;
}

ListaDobleCircular::~ListaDobleCircular()
{
    //dtor
}

void ListaDobleCircular::InsertarLDC(string nombre, string password){
    NodoListaCircular *nuevo = new NodoListaCircular(nombre, password);
    if (this->Primero == nullptr) {
        nuevo->Anterior = nuevo;
        nuevo->Siguiente = nuevo;
        this->Primero = nuevo;
        this->Tamanio++;
    } else {
        NodoListaCircular *ultimo = this->Primero->Anterior;

        nuevo->Anterior = ultimo;
        nuevo->Siguiente = this->Primero;

        ultimo->Siguiente = nuevo;
        this->Primero->Anterior = nuevo;

        this->Tamanio++;
    }
}

void ListaDobleCircular::VerListaLDC(){
    NodoListaCircular *aux = this->Primero;
    int contador=0;
    cout << "******     Lista de Empleados     *******" << endl;
    while(this->Tamanio>contador){
        cout<< "Nombre: " << aux->EmpleadoSistema->Nombre << ", Password: " << aux->EmpleadoSistema->Password <<endl;
        aux = aux->Siguiente;
        contador++;
    }
        cout << "*******************************************" << endl;
        cout<<""<<endl;
}

void ListaDobleCircular::CargaMasivaLDC(string ruta){
    try{
        ifstream lectura;
        lectura.open(ruta, ios::in);
        bool encabezado = true;
        for (std::string fila; std::getline(lectura, fila);) {
            if (encabezado) {
                encabezado = false;
            } else {
                std::stringstream lineas(fila);
                std::string nombre;
                std::string password;

                getline(lineas, nombre, ',');
                getline(lineas, password, ',');

                this->InsertarLDC(nombre, password);
            }
        }
    } catch(exception) {
        cout << "No se pudo leer el archivo" << endl;
    }
}
