// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 20

#include <iostream>

using namespace std;

int main()
{
    // Contador de digitos de un numero
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int cantidad_digitos = 0;

    while (numero != 0)
    {
        numero = numero / 10;
        cantidad_digitos +=1;
    }
    cout << "Cantidad de digitos: " << cantidad_digitos;
    return 0;
}