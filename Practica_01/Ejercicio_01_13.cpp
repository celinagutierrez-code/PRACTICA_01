// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 13

#include <iostream>

using namespace std;

int main()
{
    int N, suma = 0;

    cout << "Ingrese un numero N: ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        suma += i;
    }

    cout << "La suma de los enteros desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}