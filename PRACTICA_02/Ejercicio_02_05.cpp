// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int N;
    cout << "¿Cuantos numeros quieres generar? ";
    cin >> N;

    srand(time(NULL)); 

    int suma = 0;
    int mayor = 0;
    int menor = 1001; // se aumenta uno al limite

    for (int i = 0; i < N; i++) {
        int num = rand() % 1000 + 1; 
        cout << num << " "; // mostrar cada número generado

        suma += num;

        if (num > mayor) mayor = num;
        if (num < menor) menor = num;
    }

    double promedio = (double)suma / N;

    cout << "\n\nResultados:\n";
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}



