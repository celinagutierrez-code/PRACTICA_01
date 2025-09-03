// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 21


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
    int resultado = 0;
    int signo = 1;

    if (numero1 < 0)
    {
        numero1 = -numero1;
        signo*=-1;
    }
    // usamos el *= para cambiar el signo
    if (numero2 < 0)
    {
        numero2=-numero2;
        signo *= -1;
    }
    
    for (int i = 0; i < numero2; i++)
    {
        resultado+=numero1;
    }
    resultado*=signo;
    cout << "Resultado: " << resultado;

    return 0;
}