// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool EsPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int numero, suma = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int temp = numero;
 // Sumar los dígitos distintos de cero
    while (temp != 0) {
        int digito = temp % 10;
        if (digito != 0) {
            suma += digito;
        }
        temp /= 10;
    }
    cout << "Suma de los digitos distintos de cero: " << suma << endl;
    if (EsPrimo(suma)) {
        cout << "La suma es un numero primo." << endl;
    } else {
        cout << "La suma no es un numero primo." << endl;
    }

    return 0;
}
