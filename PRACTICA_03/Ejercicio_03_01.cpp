// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 05/09/2025
// Número de ejercicio: 1

#include <iostream>   
using namespace std;

// Función para verificar si un número es par o impar
void esParoImpar(int numero) {
    if (numero % 2 == 0) {   
        cout << "El numero " << numero << " es par" << endl;
    } else {
        cout << "El numero " << numero << " es impar" << endl;
    }
}
int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;   
    esParoImpar(num);
    return 0;  
}



