// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 9


#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "ingrese su edad: ",
    cin >> edad;
//con la edad determinamos si es niño, adolescente, mayor de edad o adulto mayor
    if (edad <= 12) {
        cout << " Usted es un niño" << endl;
  }
    else if (edad <= 18) {
        cout << " Usted es un adolescente" << endl;
    }
    else if (edad > 18 && edad < 60){
        cout << " Usted es mayor de edad" << endl;
    }
    else {
        cout << " Usted es un adulto mayor" << endl;
    }
}