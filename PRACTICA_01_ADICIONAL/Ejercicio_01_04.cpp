// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025

#include <iostream>

using namespace std;

int EncontrarMax(int num1, int num2); 

int main()
{
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "El numero mayor es: " << EncontrarMax(a, b);

    return 0;
}

int EncontrarMax(int num1, int num2) 
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
