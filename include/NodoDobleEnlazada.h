#ifndef NODODOBLEENLAZADA_H
#define NODODOBLEENLAZADA_H
#include <string>

using namespace std;

class NodoDobleEnlazada
{
    public:
        std::string Codigo;
        std::string Nombre_Tarea;
        std::string Codigo_Encargado;
        NodoDobleEnlazada *Siguiente;
        NodoDobleEnlazada *Anterior;
        NodoDobleEnlazada(std::string codigo, std::string nombre_tarea, std::string codigo_encargado);
        virtual ~NodoDobleEnlazada();

    protected:

    private:
};

#endif // NODODOBLEENLAZADA_H
