#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H
#include "NodoListaCircular.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>
#include <sstream>
#include <stdlib.h>

using namespace std;

class ListaDobleCircular
{
    public:
        NodoListaCircular *Primero;
        int Tamanio;
        void InsertarLDC(string nombre, string password);
        void VerListaLDC();
        void CargaMasivaLDC(string ruta);
        ListaDobleCircular();
        virtual ~ListaDobleCircular();

    protected:

    private:
};

#endif // LISTADOBLECIRCULAR_H
