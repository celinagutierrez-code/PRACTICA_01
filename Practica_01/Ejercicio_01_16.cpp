// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 16

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "Ingresa un numero: " << endl;
    cin >> N;
//Valida si un numero es primo o no
    bool esPrimo = true;

    if (N < 2) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                esPrimo = false;
            }
        }
    }
    if (esPrimo) {
        cout << "es un numero primo" << endl;
    } else {
        cout << "no es un numero primo" << endl;
    }

    return 0;
}