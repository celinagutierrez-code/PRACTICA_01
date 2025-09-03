// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 22

#include <iostream>

using namespace std;

int main()
{
    int numero1 = 0;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    int numero2 = 0;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
// Verifica si dos numeros son multiplos entre si
    if (numero1==0 || numero2==0)
    {
        cout << "No hay multiplos de 0";
    }
    else
    {
        if (numero1 % numero2 == 0 || numero2 % numero1 == 0)
        {
            cout << "Los numeros son multiplos entre si";
        }
        else
        {
            cout << "Los numeros no son multiplos";
        }
        
    }
    
    return 0;
}

