#include "ListaDobleEnlazada.h"

ListaDobleEnlazada::ListaDobleEnlazada()
{
    //ctor
    this->Primero=0;
    this->Tamanio=0;
}

ListaDobleEnlazada::~ListaDobleEnlazada()
{
    //dtor
}

void ListaDobleEnlazada::Insertar(std::string codigo, std::string nombre_tarea, std::string codigo_encargado){
    NodoDobleEnlazada *nuevo = new NodoDobleEnlazada(codigo, nombre_tarea, codigo_encargado);
    if(this->Primero==0){
        this->Primero=nuevo;
        this->Tamanio++;
    } else {
        NodoDobleEnlazada *aux = this->Primero;
        while(aux->Siguiente){
            aux = aux->Siguiente;
        }
        nuevo->Anterior = aux;
        aux->Siguiente = nuevo;
        this->Tamanio++;
    }

}

void ListaDobleEnlazada::Asignar(std::string codigo, std::string nombre_tarea, std::string encargado){
    if(this->Primero){
        NodoDobleEnlazada *aux = this->Primero;
        while(aux){
            if(aux->Codigo.compare(codigo)==0 && aux->Nombre_Tarea.compare(nombre_tarea)==0){
                aux->Codigo_Encargado = encargado;
                break;
            }
            aux = aux->Siguiente;
        }
    }
}

void ListaDobleEnlazada::Mostrar(){
    NodoDobleEnlazada *aux = this->Primero;
    int contador=0;
    cout << "********     Lista de Tareas     *********" << endl;
    while(this->Tamanio>contador){
        cout<< "Codigo: " << aux->Codigo << ", Tarea: " << aux->Nombre_Tarea <<endl;
        aux = aux->Siguiente;
        contador++;
    }
    cout << "******************************************" << endl;
    cout<<""<<endl;
}
