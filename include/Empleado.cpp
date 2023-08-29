#include "Empleado.h"

Empleado::Empleado(string nombre, string password)
{
    //ctor
    this->Codigo ="";
    this->Nombre=nombre;
    this->Password=password;
    this->Puesto="";
}

Empleado::~Empleado()
{
    //dtor
}
