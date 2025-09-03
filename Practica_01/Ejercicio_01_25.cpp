// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 25

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    char si_no;
//genera tablas de multiplicar con los numeros que ingresamos
    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        
        cout << "La tabla de multiplicar hasta el 10 es: " << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << numero << " * " << i << " = " << numero*i << endl;
        }
        cout << "¿Desea calcular otra tabla? (s/n)" << endl;
        cin >> si_no;
    } while (si_no == 's');
    
    return 0;
}
