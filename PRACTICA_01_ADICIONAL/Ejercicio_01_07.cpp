// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

void lanzarMoneda(int N); // Prototipo de la función

int main()
{
    int n;
    cout << "Ingrese el numero de lanzamientos: ";
    cin >> n;
    lanzarMoneda(n);
    return 0;
}

void lanzarMoneda(int N) // Simula N lanzamientos de moneda
{
    int caras = 0, cruces = 0;
    srand(time(0)); 
    for (int i = 0; i < N; i++)
    {
        int resultado = rand() % 2; 
        if (resultado == 0)
            caras++;
        else
            cruces++;
    }
    float porcentajeCaras = (caras * 100.0) / N;
    float porcentajeCruces = (cruces * 100.0) / N;

    cout << "Caras: " << porcentajeCaras << "%" << endl;
    cout << "Cruces: " << porcentajeCruces << "%" << endl;
}
