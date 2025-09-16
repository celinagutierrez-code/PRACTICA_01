// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float calcular_volumen(float radio, float altura); 
int main() {
    float altura = 0.000, radio = 0.000, volumen = 0.000;
    system("cls");
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    if (altura <= 0) {
        // si la altura es inválida, le damos el valor de 10 dentro del main
        altura = 10.000;
    }
    volumen = calcular_volumen(radio, altura);
    cout << "Volumen del cilindro = " << volumen;
    return 0;
}

float calcular_volumen(float radio, float altura) {
    float volumen = 0.000;
    volumen = (3.14159 * radio * radio * altura);
    return volumen;
}
