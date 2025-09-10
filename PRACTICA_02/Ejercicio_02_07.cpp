// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 03/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de ninos: ";
    cin >> N;

    srand(time(NULL));
// hacemos que nos genere una ditribucion de ninos
    int n1 = rand() % (N + 1); 
    int n2 = rand() % (N - n1 + 1); 
    int n3 = N - (n1 + n2);
    int consumo = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "\nDistribucion generada:" << endl;
    cout << "Ninos de 1 año: " << n1 << endl;
    cout << "Ninos de 2 años: " << n2 << endl;
    cout << "Ninos de 3 años: " << n3 << endl;

    cout << "\nConsumo total de panales por dia: " << consumo << " panales" << endl;

    return 0;
}
