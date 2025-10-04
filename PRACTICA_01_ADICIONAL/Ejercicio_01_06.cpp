// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

bool esPar(int numero); 

int main()
{
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if (esPar(num) == true)
        cout << "El numero es PAR";
    else
        cout << "El numero es IMPAR";
    return 0;
}

bool esPar(int numero) // Devuelve true si es par, false si es impar
{
    if (numero % 2 == 0)
        return true;
    else
        return false;
}
