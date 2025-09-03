// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 24

#include <iostream>

using namespace std;

int main()
{
    int opcion = 0;
//nos da un menu de opciones y deja de darnos el menu hasta que le demos salir
    do
    {
        cout << "1. Opcion 1 \n2. Opcion 2 \n3. Opcion 3 \n0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;


        switch (opcion)
        {
        case 1:
            cout << "Selecciono la opcion 1" << endl;
            break;;
        case 2:
            cout << "Selecciono la opcion 2" << endl;
            break;
        case 3:
            cout << "Selecciono la opcion 3" << endl;
            break;;
        case 0:
            cout << "Saliendo...";
            break;
        default:
            cout << "Opcion no válida";
            break;
        }
    } while (opcion != 0);
    
    return 0;
}