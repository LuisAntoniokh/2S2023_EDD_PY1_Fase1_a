#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H
#include "NodoDobleEnlazada.h"
#include <string>
#include <iostream>

using namespace std;

class ListaDobleEnlazada
{
    public:
        NodoDobleEnlazada *Primero;
        int Tamanio;
        void Insertar(std::string codigo, std::string nombre_tarea, std::string codigo_encargado);
        void Asignar(std::string codigo, std::string nombre_tarea, std::string encargado);
        void Mostrar();
        ListaDobleEnlazada();
        virtual ~ListaDobleEnlazada();

    protected:

    private:
};

#endif // LISTADOBLEENLAZADA_H
