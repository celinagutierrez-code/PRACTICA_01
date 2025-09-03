// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 17

#include <iostream>
using namespace std;

// Función que calcula la suma de los divisores propios de un número
int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) { 
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (sumaDivisores(num1) == num2 && sumaDivisores(num2) == num1) {
        cout << num1 << " y " << num2 << " son amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " no son amigos." << endl;
    }

    return 0;
}
