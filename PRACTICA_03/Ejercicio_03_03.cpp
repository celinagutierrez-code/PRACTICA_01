// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 05/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

// Función para verificar si un número es capicúa
bool esCapicua(int numero) {
    int original = numero;
    int invertido = 0;
    int digito;
    while (numero > 0) {
        digito = numero % 10;            
        invertido = invertido * 10 + digito; 
        numero = numero / 10;           
    }
    if (original == invertido) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    if (esCapicua(num)) {
        cout << "El numero " << num << " SI es capicua." << endl;
    } else {
        cout << "El numero " << num << " NO es capicua." << endl;
    }
    return 0;
}
