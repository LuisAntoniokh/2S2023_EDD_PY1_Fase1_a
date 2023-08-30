#ifndef COLAPRIORIDAD_H
#define COLAPRIORIDAD_H
#include "NodoCola.h"
#include "Proyecto.h"
#include <fstream>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;

class ColaPrioridad
{
    public:
        NodoCola *Primero;
        int Tamanio;
        void Encolar(std::string Nombre, std::string Tipo_de_Prioridad);
        void Descolar();
        void VerProyectos();
        void Ordenar();
        void Graficar();
        ColaPrioridad();
        virtual ~ColaPrioridad();

    protected:

    private:
};

#endif // COLAPRIORIDAD_H
