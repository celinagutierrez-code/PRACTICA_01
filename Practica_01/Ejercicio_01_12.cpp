// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 12

#include <iostream>
using namespace std;

int main() 
{
    int numero;
    do 
    { 
        cout << "Ingrese un numero del 1 al 5" << endl;
        cin >> numero;

        if (numero > 1 || numero < 5) {
            cout << "Numero no valido, ingrese uno valido" << endl;
        }

    } while (numero > 1 && numero < 5); // repetir mientras NO esté en [1,5]

    cout << "Correcto, numero valido: " << numero << endl;
    return 0;
}
