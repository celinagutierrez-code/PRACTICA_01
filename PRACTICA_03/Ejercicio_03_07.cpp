// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 05/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int numeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}
int main() {
    int N;
    cout << "Ingresa la cantidad de alumnos: ";
    cin >> N;
    int sumaEdades = 0, mayores18 = 0;
    int sumaAlturas = 0, masDe175 = 0;
    srand(time(NULL));

    for (int i = 1; i <= N; i++) {
        int edad = numeroAleatorio(1, 35);     // Edad entre 1 y 35
        int altura = numeroAleatorio(120, 200); // Altura entre 120 y 200

        cout << "Alumno " << i << ": Edad = " << edad << " anios, Altura = " << altura << " cm" << endl;
        sumaEdades += edad;
        sumaAlturas += altura;
        if (edad > 18) {
            mayores18++;
        }
        if (altura > 175) {
            masDe175++;
        }
    }
    float edadMedia = (float)sumaEdades / N;
    float alturaMedia = (float)sumaAlturas / N;
    cout << "\nEdad media: " << edadMedia << " anios" << endl;
    cout << "Estatura media: " << alturaMedia << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores18 << endl;
    cout << "Cantidad de alumnos con altura > 175 cm: " << masDe175 << endl;
    return 0;
}
