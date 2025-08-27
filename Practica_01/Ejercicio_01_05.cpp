// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 5

#include <iostream>

 using namespace std;
 int main()
 {
    int grados = 0;
    cout << "ingrese los grados centigrados: ";
    cin >> grados;

    float Kelvin = grados + 273.15;
    cout << "Los grados en Kelvin son: " << Kelvin << endl;

    return 0;

}