// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 05/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

// Función para calcular el IMC
float calcularIMC(float peso, float altura) {
    float imc = peso / (altura * altura);
    return imc;
}
int main() {
    float peso, altura, imc;
    cout << "Ingresa tu peso: ";
    cin >> peso;
    cout << "Ingresa tu altura: ";
    cin >> altura;
    imc = calcularIMC(peso, altura);
    cout << "Tu IMC es: " << imc << endl;
    return 0;
}
