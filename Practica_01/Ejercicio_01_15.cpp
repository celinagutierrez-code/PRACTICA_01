// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 15


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese la cantidad de notas" << endl;
    cin >> n;
    
    double nota;
    double suma = 0.0;
    for(int i = 0; i < n; i++){ //(int i = 1; i <= n; i++)
        cout << "Ingrese la nota " << i + 1 << endl;
        cin >> nota;
        suma = suma + nota;
    }
    
    double promedio;
    promedio = suma / n;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}