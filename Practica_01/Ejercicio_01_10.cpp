// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int main()
{
    int nota;
    cout << "Ingrese la nota del estudiante: " << endl;
    cin >> nota;
//si la nota es > a 51 muestra directamente que el estudiante esta reprobado
    if(nota >= 51){
        if(nota < 60){
            cout << " Tiene la calificacion de C" << endl;
        } else if (nota < 70) {
            cout << " Tiene la calificacion de C+" << endl;   
        } else if (nota < 80) {
            cout << " Tiene la calificacion de B" << endl;
        } else if (nota < 90) {
            cout << " Tiene la calificacion de B+" << endl;
        } else if (nota < 95) {
            cout << " Tiene la calificacion de A" << endl;
        } else if (nota <= 100) {
            cout << " Tiene la calificacion de A+" << endl;
        }

    } else {
        cout << " Reprobado " << endl;
    }

    return 0;


}
        