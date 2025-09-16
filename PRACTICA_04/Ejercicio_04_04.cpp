// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

//funcion que convierte celsius a farenheit
float Convertir_Celsius_a_Farenheit(float Celsius) {
    float Farenheit = (Celsius * 9 / 5) + 32; 
}
// Función que devuelve la mayor temperatura
float Mayor_temperatura(float primer_temperatura, float segunda_temperatura) {
    if (primer_temperatura > segunda_temperatura) {
        return primer_temperatura;
    } else {
        return segunda_temperatura;
    }
}

int main() {
    float Celsius = 0.0, Farenheit = 0.0;
    float primer_temperatura = 0.0, segunda_temperatura = 0.0, Mayor = 0.0;
    system("cls");
    cout << "Ingrese una temperatura en Celsius: ";
    cin >> Celsius;
    Farenheit = Convertir_Celsius_a_Farenheit(Celsius);
    cout << "Temperatura en Fahrenheit: " << Farenheit << endl;
    cout << "\nIngrese la primera temperatura: ";
    cin >> primer_temperatura;
    cout << "Ingrese la segunda temperatura: ";
    cin >> segunda_temperatura;
    Mayor = Mayor_temperatura(primer_temperatura, segunda_temperatura);
    cout << "La mayor temperatura es: " << Mayor << endl;

    return 0;
}
