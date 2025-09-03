#include <iostream>
using namespace std;

//funcion para verificar si el numero es primo o no
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) { 
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}
int main() {
    int contador = 0;   // cuenta cuantos primos llevamos
    int numero = 2;     // empezamos desde el primer primo

    cout << "Los primeros 100 numeros primos son:" << endl;

    while (contador < 100) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    cout << endl;
    return 0;
}
