#ifndef NODOLISTACIRCULAR_H
#define NODOLISTACIRCULAR_H

class NodoListaCircular
{
    public:
        //Objeto Empleado (sin puesto)
        NodoListaCircular *Siguiente;
        NodoListaCircular *Anterior;
        NodoListaCircular(string nombre, string password);
        virtual ~NodoListaCircular();

    protected:

    private:
};

#endif // NODOLISTACIRCULAR_H
