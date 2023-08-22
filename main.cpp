#include <iostream>

using namespace std;
/*Cambiar por el objeto, prueba inicial testeo menu.*/
string primerUsuario = "a";
string primeraContra = "a";

string user;
string passw;

void menAdmin();
void menEmpleados();
void menProyecto();
void menTarea();
void asigTarea();

void login(){
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "Usuario: ";
    cin >> user;
    cout << "Password: ";
    cin >> passw;

    if (user == primerUsuario && passw == primeraContra) {
        menuAdministrador();
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
    cout << " 3. Crear Tareas " << endl;
    cout << " 4. Asignar Tareas " << endl;
    cout << " 5. Salir " << endl;


    string opc1 = "";
    cout << "Elige una opcion: " << endl;
    cin >> opc1;

    if (opc1 == "1") {
        menEmpleados();
    } else if (opc1 == "2") {
        menProyecto();
    } else if (opc1 == "3") {
        menTarea();
    } else if (opc1 == "4") {
        asigTarea();
    } else if (opc1 == "5") {
        exit(0);
    } else {
        cout << "Ingrese una opcion valida";
    }
}

void menEmpleados() {
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "****   Bienvenido " << usernameInput << "         ****" << endl;
    cout << "****     Menú de Cargar Usuarios     ****" << endl;
    cout << " 1. Carga manual" << endl;
    cout << " 2. Carga masiva" << endl;
    cout << "Ingrese el número de la opción que desea: " << endl;
    string opc2;
    cin >> opc2;

    if (opc2 == "1"){
        manualCarga();
    } else if (opc2 == "2") {
        menProyecto();
    } else {
        cout << "Ingrese una opcion valida";
    }
}

void menProyecto() {
    cout << "****          EDD ProjectUp          ****" << endl;
    cout << "****   Bienvenido " << usernameInput << "         ****" << endl;
    cout << "****     Menú de proyecto     ****" << endl;
    cout << " Nombre del proyecto: " << endl;
    string nomProyecto;
    cin >> nomProyecto;
    cout << " Tipo de prioridad: " << endl;
    string tipoPriori;
    cin >> tipoPriori;

    /* Falta funcionamiento*/
}

/* Asignar proyecto

    Pedir puesto de trabajo
    Pedir codigo de proyecto a trabajar
*/

/* Crear Tarea

    A cada proyecto se le puede agregar una tarea
    El proyecto debe existir en la cola de prioridad
    Mostrar la cola de prioridad con numerales.
    Solicitar el numeral y escribir la tarea a realizar.
*/

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
