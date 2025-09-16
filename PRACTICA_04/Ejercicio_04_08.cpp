// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float Calculo_ventas(int n); 
int main(){
    int n;
    float Total_ventas = 0.0;
    float IVA = 0.0;
    system("cls");
    srand(time(0));
    cout << "Ingrese el numero de ventas del dia: ";
    cin >> n;
    Total_ventas = Calculo_ventas(n);
    IVA = Total_ventas * 0.13;
    // Aplicar descuento si se necesita
    if (Total_ventas > 2500) {
        Total_ventas = Total_ventas * 0.95; // 5% de descuento
    }
    cout << "Total ventas= " << Total_ventas << " Bs." << endl;
    cout << "IVA = " << IVA << " Bs." << endl;
    return 0;
}
float Calculo_ventas(int n){
    float suma = 0.0, precio = 0.0;
    int minimo = 20, maximo = 50;
    for (int i = 1; i <= n; i++) {
        precio = rand() % (maximo - minimo + 1) + minimo;
        suma += precio; // suma de ventas del día
    }
    return suma;
}
