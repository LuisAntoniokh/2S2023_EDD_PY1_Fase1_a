#ifndef PROYECTO_H
#define PROYECTO_H
#include <string>

using namespace std;

class Proyecto
{
    public:
        std::string Codigo;
        std::string Nombre;
        Proyecto(std::string codigo, std::string nombre);
        virtual ~Proyecto();

    protected:

    private:
};

#endif // PROYECTO_H
