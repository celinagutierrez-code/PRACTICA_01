// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Fecha creación: 29/09/2025
// Número de ejercicio: 1
// Problema planteado:  1. Escriba un programa con 6 funciones utilizando vectores para lo siguiente: 
//a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V) b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
//c. Una lista de 30 caracteres alfanuméricos. d. Una lista de 100 años en número entero (entre 1990 y 2025)
//e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00). f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
// Los datos deben ser generados utilizando numero aleatorios

#include <iostream>
#include <vector>
#include <cstdlib>   
#include <ctime>     
using namespace std;

// Función a: voltajes 
void generarVoltajes(vector<double> &voltajes) {
    for (int i = 0; i < 100; i++) {
        double valor = 20.0 + (rand() % 20001) / 100.0; // entre 20.00 y 220.00
        voltajes.push_back(valor);
    }
}

// Función b: temperaturas 
void generarTemperaturas(vector<double> &temps) {
    for (int i = 0; i < 50; i++) {
        double valor = (rand() % 10001) / 100.0; // entre 0.00 y 100.00
        temps.push_back(valor);
    }
}

// Función c: caracteres alfanuméricos 
void generarCaracteres(vector<char> &caracteres) {
    string alfanumericos = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 30; i++) {
        int indice = rand() % alfanumericos.size();
        caracteres.push_back(alfanumericos[indice]);
    }
}

// Función d: años enteros 
void generarAnios(vector<int> &anios) {
    for (int i = 0; i < 100; i++) {
        int valor = 1990 + rand() % (2025 - 1990 + 1);
        anios.push_back(valor);
    }
}

// Función e: velocidades 
void generarVelocidades(vector<double> &velocidades) {
    for (int i = 0; i < 32; i++) {
        double valor = 10.0 + (rand() % 29001) / 100.0; // entre 10.00 y 300.00
        velocidades.push_back(valor);
    }
}

// Función f: distancias (1000 valores entre 1.00 y 1000.00)
void generarDistancias(vector<double> &distancias) {
    for (int i = 0; i < 1000; i++) {
        double valor = 1.0 + (rand() % 100000) / 100.0; // entre 1.00 y 1000.00
        distancias.push_back(valor);
    }
}

// Función para mostrar un vector (solo unos pocos valores para no saturar)
template <typename T>
void mostrarVector(const vector<T> &v, int cantidad) {
    for (int i = 0; i < cantidad && i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "...\n";
}

int main() {
    srand(time(0)); 
    vector<double> voltajes;
    vector<double> temperaturas;
    vector<char> caracteres;
    vector<int> anios;
    vector<double> velocidades;
    vector<double> distancias;

    // Llamamos a cada función
    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnios(anios);
    generarVelocidades(velocidades);
    generarDistancias(distancias);

    // Mostramos los primeros datos de cada lista
    cout << "Voltajes: "; mostrarVector(voltajes, 10);
    cout << "Temperaturas: "; mostrarVector(temperaturas, 10);
    cout << "Caracteres: "; mostrarVector(caracteres, 10);
    cout << "Anios: "; mostrarVector(anios, 10);
    cout << "Velocidades: "; mostrarVector(velocidades, 10);
    cout << "Distancias: "; mostrarVector(distancias, 10);
    return 0;
}

