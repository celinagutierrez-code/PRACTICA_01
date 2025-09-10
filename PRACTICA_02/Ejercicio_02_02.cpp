// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int n; 
    int caras = 0, cruces = 0;

    cout << "¿Cuantas veces lanzaras la moneda? ";
    cin >> n;

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        int moneda = rand() % 2; // 0 o 1

        if (moneda == 0)
            caras++;
        else
            cruces++;
    }

    // Calcular porcentajes
    double porc_caras = (caras * 100.0) / n;
    double porc_cruces = (cruces * 100.0) / n;

    cout << "\nResultados:\n";
    cout << "Caras: " << caras << " veces (" << porc_caras << "%)\n";
    cout << "Cruces: " << cruces << " veces (" << porc_cruces << "%)\n";

    return 0;
}
