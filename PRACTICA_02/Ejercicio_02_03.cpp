// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(NULL)); 
    int num = rand() % 10 + 1;
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Mostrar resultado
    cout << "Numero generado: " << num << endl;
    cout << "Factorial de " << num << " es: " << factorial << endl;

    return 0;
}


