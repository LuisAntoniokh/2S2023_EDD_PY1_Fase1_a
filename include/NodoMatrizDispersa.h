#ifndef NODOMATRIZDISPERSA_H
#define NODOMATRIZDISPERSA_H
#include <string>
#include "Proyecto.h"
#include "Empleado.h"
#include "ListaDobleEnlazada.h"

class NodoMatrizDispersa
{
    public:
        NodoMatrizDispersa *Siguiente;
        NodoMatrizDispersa *Anterior;
        NodoMatrizDispersa *Abajo;
        NodoMatrizDispersa *Arriba;

        int PosY;
        int PosX;

        Proyecto *Proyecto_c;
        Empleado *Encargado_c;
        ListaDobleEnlazada *Tareas;

        NodoMatrizDispersa(Proyecto *proyecto, Empleado *encargado, int posy, int posx);
        virtual ~NodoMatrizDispersa();

    protected:

    private:
};

#endif // NODOMATRIZDISPERSA_H
