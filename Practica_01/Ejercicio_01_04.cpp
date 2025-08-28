// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 4

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radio = 0;
    cout << "ingrese el radio de la esfera: ";
    cin >> radio;
    //se pide el radio para calcular el volumen de la esfera
    
    float volumen = (4/3.0) * 3.1416 * (radio * radio * radio);
    cout << " el volumen de la esfera es: " << volumen << endl;

    return 0;

}