// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int main()
{
    int base = 0;
    int altura = 0;
    cout << "ingrese la base del triangulo: ";
    cin >> base;
    cout << "ingrese la altura del triangulo: ";
    cin >> altura;
    // se pide la base y la altura del triangulo
    
    float area = (base * altura) / 2;
    cout << "el area del triangulo es: " << area << endl;

    return 0;
}