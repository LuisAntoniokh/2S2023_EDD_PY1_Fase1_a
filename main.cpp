#include <iostream>
#include "ListaDobleCircular.h"
#include "ListaDobleEnlazada.h"
#include "ColaPrioridad.h"
#include "MatrizDispersa.h"

using namespace std;
/*Cambiar por el objeto, prueba inicial testeo menu.*/
string primerUsuario = "a";
string primeraContra = "a";

string user;
string passw;

ListaDobleCircular *LDC = new ListaDobleCircular();
ListaDobleEnlazada *LED = new ListaDobleEnlazada();
ColaPrioridad *cola = new ColaPrioridad();
MatrizDispersa *matriz = new MatrizDispersa();

void menAdmin();
void regmenEmpleados();
void manualCarga();
void menEmpleados();
void crearProyecto();
void menTarea();
void asignarProyectos();
void asigTarea();

void login(){
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "Usuario: ";
    cin >> user;
    cout << "Password: ";
    cin >> passw;
    cout<<""<<endl;
    if (user == primerUsuario && passw == primeraContra) {
        menAdmin();
    } else {
        cout << "Usuario o password incorrecto" << endl;
        login();
    }
}

void menAdmin(){
    cout << "****   EDD ProjectUp - 202109750         ****" << endl;
    cout << "****   Bienvenido " << user << "         ****" << endl;
    cout << " 1. Cargar empleados " << endl;
    cout << " 2. Crear Proyecto " << endl;
    cout << " 3. Asignar proyecto " << endl;
    cout << " 4. Crear Tareas " << endl;
    cout << " 5. Asignar Tareas " << endl;
    cout << " 6. Salir " << endl;

    string opc1 = "";
    cout << "Elige una opcion: ";
    cin >> opc1;

    cout<<""<<endl;

    if (opc1 == "1") {
        menEmpleados();
    } else if (opc1 == "2") {
        crearProyecto();
    } else if (opc1 == "3") {
        asignarProyectos();
    } else if (opc1 == "4") {
        menTarea();
    } else if (opc1 == "5") {
        cout<<"asigTarea()";
    } else if (opc1 == "6") {
        exit(0);
    } else {
        cout << "Ingrese una opcion valida";
    }
}

void regmenEmpleados(){
    cout << "Desea agregar un nuevo empleado?"<< endl;
    cout << "1. Si"<< endl;
    cout << "2. No"<< endl;
    string opmE;
    cin >> opmE;
    cout<<""<<endl;
    if (opmE == "1"){
        menEmpleados();
    } else if (opmE == "2"){
        menAdmin();
    } else {
        cout << "Elija una opcion valida";
        regmenEmpleados();
    }
}

void regcrearProyecto(){
    cout << "Desea agregar un nuevo proyecto?"<< endl;
    cout << "1. Si"<< endl;
    cout << "2. No"<< endl;
    string opmP;
    cin >> opmP;
    cout<<""<<endl;
    if (opmP == "1"){
        crearProyecto();
    } else if (opmP == "2"){
        menAdmin();
    } else {
        cout << "Elija una opcion valida";
        regcrearProyecto();
    }
}

void regasignarProyecto(){
    cout << "Desea asignar un nuevo proyecto?"<< endl;
    cout << "1. Si"<< endl;
    cout << "2. No"<< endl;
    string opmA;
    cin >> opmA;
    cout<<""<<endl;
    if (opmA == "1"){
        asignarProyectos();
    } else if (opmA == "2"){
        menAdmin();
    } else {
        cout << "Elija una opcion valida";
        regasignarProyecto();
    }
}

void regmenTarea(){
    cout << "Desea crear una nueva tarea?"<< endl;
    cout << "1. Si"<< endl;
    cout << "2. No"<< endl;
    string opmT;
    cin >> opmT;
    cout<<""<<endl;
    if (opmT == "1"){
        menTarea();
    } else if (opmT == "2"){
        menAdmin();
    } else {
        cout << "Elija una opcion valida";
        regmenTarea();
    }
}

void manualCarga(){
    cout << "****     Carga Manual de Empleados     ****" << endl;
    std::string nuevoNom, nuevaPassw;
    cout << "Nombre: ";
    cin.ignore();
    std::getline(std::cin, nuevoNom);
    cout << "Password: ";
    cin>>nuevaPassw;
    LDC->InsertarLDC(nuevoNom, nuevaPassw);
    cout << "*******************************************" << endl;
    cout<<""<<endl;
    LDC->VerListaLDC();
    regmenEmpleados();
}

void menEmpleados() {
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "****   Bienvenido " << user << "         ****" << endl;
    cout << "****     Menú de Cargar Empleados     ****" << endl;
    cout << " 1. Carga manual" << endl;
    cout << " 2. Carga masiva" << endl;
    cout << "Ingrese el número de la opción que desea: ";
    string opc2;
    cin >> opc2;
    cout<<""<<endl;

    if (opc2 == "1"){
        manualCarga();
    } else if (opc2 == "2") {
        LDC->CargaMasivaLDC("empleados.csv");
        LDC->VerListaLDC();
        regmenEmpleados();
    } else {
        cout << "Ingrese una opcion valida";
        menEmpleados();
    }
}

void crearProyecto(){
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "****   Bienvenido " << user << "         ****" << endl;
    cout << "****     Menú de proyecto     ****" << endl;
    std::string nomProyecto, tipoPriori;
    cout << " Nombre del proyecto: ";
    cin.ignore();
    std::getline(std::cin, nomProyecto);
    cout << " Tipo de prioridad: ";
    cin >> tipoPriori;
    cola->Encolar(nomProyecto,tipoPriori);
    cout<<""<<endl;
    cola->Ordenar();
    cola->VerProyectos();
    cout<<""<<endl;
    regcrearProyecto();
}

/* Asignar proyecto
    Pedir puesto de trabajo
    Pedir codigo de proyecto a trabajar
*/

void asignarProyectos(){
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "****   Bienvenido " << user << "         ****" << endl;
    cout << "****     Asignacion de proyecto     ****" << endl;
    std::string nomEmployee, opcWork, opcProy;
    cin.ignore(); // Limpiar el búfer antes de la primera entrada

    cout << " Nombre del empleado: ";
    std::getline(cin, nomEmployee);
    cout << " Trabajo del empleado: ";
    std::getline(cin, opcWork);
    cout << " Asignado al proyecto: ";
    std::getline(cin, opcProy);

    while(cola->Primero){
        matriz->insertar_proyecto(cola);
        cola->Descolar();
    }
    matriz->insertar_empleado(LDC);

    matriz->asignarProyecto(nomEmployee, opcProy);

    matriz->Graficar();

    cout<<"Asignado correctamente"<<endl;
    cout<<""<<endl;
    regasignarProyecto();
}

void menTarea(){
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "****   Bienvenido " << user << "         ****" << endl;
    cout << "****     Menu de Tareas     ****" << endl;
    string opcTProy, nomTarea;
    cola->VerProyectos();
    cout << "Elija un proyecto: ";
    cin >> opcTProy;
    cout << "Nombre de la tarea: ";
    cin.ignore();
    std::getline(std::cin, nomTarea);
    LED->Insertar(opcTProy, nomTarea, "");
    LED->Mostrar();
    regmenTarea();
}

/*
    Asignar tarea(?
*/

/*
    Reportes(?
*/

int main()
{
    login();
    return 0;
}
