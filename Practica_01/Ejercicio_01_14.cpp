// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 14

#include <iostream>

using namespace std;

int main ()
{
    
    int N;
    cout << " Ingrese un numero: " << endl;
    cin >> N;
    cout << " El triangulo es: " << endl;
    //Formamos un triangulo con asteriscos
    for(int i = 1; i <= N; i++){
        for(int j = 0 ; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
