// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void Modificar_Valores(int primer_numero,int&segundo_numero); // se usa void para que no haya return
int main(){
    int primer_numero, segundo_numero;
    system ("cls");
    cout << "Ingrese el primer numero: ";
    cin >> primer_numero;
    cout << "Ingrese el segundo numero: ";
    cin >> segundo_numero;
    Modificar_Valores(primer_numero,segundo_numero);
    cout << "Segundo numero= "<<segundo_numero;
    return 0;
}

void Modificar_Valores(int primer_numero,int&segundo_numero){ 
    primer_numero=primer_numero*2;
    segundo_numero+=10;
    cout <<"primer numero= "<< primer_numero<<endl;
}