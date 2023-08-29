#ifndef NODOLISTACIRCULAR_H
#define NODOLISTACIRCULAR_H
#include "Empleado.h"
class NodoListaCircular
{
    public:
        Empleado *EmpleadoSistema;
        NodoListaCircular *Siguiente;
        NodoListaCircular *Anterior;
        NodoListaCircular(string nombre, string password);
        virtual ~NodoListaCircular();

    protected:

    private:
};

#endif // NODOLISTACIRCULAR_H
