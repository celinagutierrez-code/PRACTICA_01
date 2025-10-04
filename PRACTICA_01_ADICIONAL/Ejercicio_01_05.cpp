// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

double ParteFraccionaria(double numero); // Prototipo de la función

int main()
{
    double num;
    cout << "Ingrese un numero con decimales: ";
    cin >> num;
    cout << "La parte fraccionaria es: " << ParteFraccionaria(num);
    return 0;
}

double ParteFraccionaria(double numero) 
{
    int parteEntera = (int)numero; 
    return numero - parteEntera;   
}
