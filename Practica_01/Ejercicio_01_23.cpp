// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 23

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int digito = 0;
    // imprime el numero al revez
    cout << "Numero al reves: ";
    if (numero < 0)
    {
        cout << "-";
        numero = -numero;
    }
    
    while (numero > 0)
    {
        digito = numero % 10;
        cout << digito;
        numero = numero / 10;
    }
    return 0;
}





