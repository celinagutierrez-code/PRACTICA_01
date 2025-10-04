// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

bool esPrimo(int numero);      
void generarNumeros(int N);    

int main()
{
    int n;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;
    generarNumeros(n);
    return 0;
}

void generarNumeros(int N)
{
    int suma = 0;
    srand(time(0)); 
    cout << "Lista de numeros generados:" << endl;
    for (int i = 0; i < N; i++)
    {
        int num = 1 + rand() % 1000; 
        suma += num;
        cout << num;
        if (esPrimo(num))
            cout << " *"; // Marca con * si es primo
        cout << endl;
    }

    float promedio = (float)suma / N;
    cout << "\nLa sumatoria total es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
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
