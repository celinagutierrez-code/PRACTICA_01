// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

bool esPrimo(int numero); // Función para verificar si un número es primo

int main()
{
    int numero;
    int sumaPrimos = 0;
    int contadorPrimos = 0;

    cout << "Ingrese numeros : " << endl;

    while (true)
    {
        cin >> numero;
        if (numero <= 0) break; 

        if (esPrimo(numero))
        {
            sumaPrimos += numero;
            contadorPrimos++;
        }
    }

    if (contadorPrimos > 0)
    {
        float promedio = (float)sumaPrimos / contadorPrimos;
        cout << "El promedio de los numeros primos es: " << promedio;
    }
    else
        cout << "No se ingresaron numeros primos.";

    return 0;
}

bool esPrimo(int numero) 
{
    if (numero < 2) return false; 
    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0) return false;
    }
    return true;
}
