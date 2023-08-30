#ifndef MATRIZDISPERSA_H
#define MATRIZDISPERSA_H
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include "ListaDobleCircular.h"
#include "NodoMatrizDispersa.h"
#include "NodoDobleEnlazada.h"
#include "ColaPrioridad.h"
#include "Proyecto.h"
#include "Empleado.h"

class MatrizDispersa
{
    public:
        NodoMatrizDispersa *Raiz;
        int CoordenadaX;
        int CoordenadaY;
        void insertar_elemento(std::string proyecto, std::string encargado, int x, int y);
        NodoMatrizDispersa *nueva_columna(int x);
        NodoMatrizDispersa *nueva_fila(int y);
        NodoMatrizDispersa *insertar_fila(NodoMatrizDispersa *nuevo, NodoMatrizDispersa *cabeza_fila);
        NodoMatrizDispersa *insertar_columna(NodoMatrizDispersa *nuevo, NodoMatrizDispersa *cabeza_columna);
        NodoMatrizDispersa *buscarF(int y);
        NodoMatrizDispersa *buscarC(int x);
        void Graficar();

        /** Nuevos Metodos **/
        void insertar_proyecto(ColaPrioridad *cola);
        void insertar_empleado(ListaDobleCircular *lista);
        NodoMatrizDispersa *nueva_columna_1(int x, Proyecto *proyecto);
        NodoMatrizDispersa *nueva_fila_1(int y, Empleado *empleado);
        void asignarProyecto(std::string nombre_empleado, std::string codigo_proyecto);
        NodoMatrizDispersa *buscarF_1(std::string nombre);
        NodoMatrizDispersa *buscarC_1(std::string codigo);
        void BuscarProyecto(std::string codigo, std::string nombre_tarea);
        void BuscarEmpleado(std::string codigo, std::string nombre_tarea, std::string nombre_empleado);


        MatrizDispersa();
        virtual ~MatrizDispersa();

    protected:

    private:
};

#endif // MATRIZDISPERSA_H
