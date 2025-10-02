// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 29/09/2025
// Número de ejercicio: 4
// Problema planteado: 4. Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>
using namespace std;

// Función para leer un vector
void leerVector(vector<int> &v, int N, string nombre) {
    cout << "Ingrese los elementos del vector " << nombre << ":\n";
    for (int i = 0; i < N; i++) {
        int valor;
        cout << "Elemento " << i + 1 << ": ";
        cin >> valor;
        v.push_back(valor);
    }
}
// Función para multiplicar dos vectores
vector<int> multiplicarVectores(const vector<int> &a, const vector<int> &b, int N) {
    vector<int> resultado;
    for (int i = 0; i < N; i++) {
        resultado.push_back(a[i] * b[i]);
    }
    return resultado;
}
// Función para mostrar un vector
void mostrarVector(const vector<int> &v, string nombre) {
    cout << "Vector " << nombre << ": ";
    for (int valor : v) {
        cout << valor << " ";
    }
    cout << endl;
}
int main() {
    int N;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;

    vector<int> A, B;
    leerVector(A, N, "A");
    leerVector(B, N, "B");

    vector<int> C = multiplicarVectores(A, B, N);
    cout << "\n--- Resultados ---\n";
    mostrarVector(A, "A");
    mostrarVector(B, "B");
    mostrarVector(C, "C (multiplicacion)");
    return 0;
}
