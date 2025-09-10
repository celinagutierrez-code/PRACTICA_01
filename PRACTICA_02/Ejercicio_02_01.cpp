// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int n; 
    int cont2 = 0, cont4 = 0, cont6 = 0; // Contadores de caras pares

    cout << "¿Cuantas veces quieres lanzar el dado? ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        int dado = rand() % 6 + 1; 

        // Contar solo si es par
        if (dado == 2) cont2++;
        else if (dado == 4) cont4++;
        else if (dado == 6) cont6++;
    }

    cout << "\nResultados de los lanzamientos:\n";
    cout << "Cara 2 salio: " << cont2 << " veces\n";
    cout << "Cara 4 salio: " << cont4 << " veces\n";
    cout << "Cara 6 salio: " << cont6 << " veces\n";

    return 0;
}
