// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 29/09/2025
// Número de ejercicio: 2
// Problema planteado: 2. Escriba un programa para introducir los siguientes valores en un arreglo nombrado
//voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan
//introducido los datos, haga que su programa despliegue los valores.
//11.95 16.32 12.15
//8.22 15.98 26.22
//13.54 6.45 17.59

#include <iostream>
using namespace std;
int main() {
    // Declarar el arreglo con los valores dados
    double voltios[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    // Mostrar los valores en 3 filas de 3 columnas
    for (int i = 0; i < 9; i++) {
        cout << voltios[i] << "  ";
        if ((i + 1) % 3 == 0) { 
            cout << endl;
        }
    }
    return 0;
}
