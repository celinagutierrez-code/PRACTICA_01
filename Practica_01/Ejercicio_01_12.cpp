// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 12

#include <iostream>

using namespace std;

int main()
{    
    int numero;
    system("chcp 65001");
    system("cls");
    cout << "Ingrese un numero del 1 al 5:" << endl;
    cin >> numero;
// usamos break porque si no lo usamos el codigo sigue ejecutandose,  el break solo lo usamos con switch
    switch (numero)
    {
            case 1:
                cout << " Tu numero es 1 " << endl;
                break;
            case 2:
                cout << " Tu numero es 2 " << endl;
                break;
            case 3:
                cout << " Tu numero es 3 " << endl;
                break;
            case 4:
                cout << " Tu numero es 4 " << endl;
                break;
            case 5:
                cout << " Tu numero es 5 " << endl;
                break;
            default:
                cout << " Numero no valido. Debe ser entre 1 y 5 " << endl;
               

        }

    return 0;

}