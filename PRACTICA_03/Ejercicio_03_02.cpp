// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 05/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

// Función para convertir Celsius a Fahrenheit
float celsiusAFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    return fahrenheit;
}
int main() {
    float gradosC, gradosF;
    cout << "Ingresa los grados Celsius: ";
    cin >> gradosC;
    gradosF = celsiusAFahrenheit(gradosC);
    cout << gradosC << " Los grados Celsius equivalen a " << gradosF << " grados Fahrenheit." << endl;
    return 0;
}
