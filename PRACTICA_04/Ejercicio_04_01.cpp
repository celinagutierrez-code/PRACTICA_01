// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;
// usamos la funcion de intercmabiar valores 
void intercambiar_valores(int&primer_numero,int&segundo_numero);
int main()
{
    int primer_numero,segundo_numero;
    system ("cls");
    cout << "Ingrese el primer numero: ";
    cin >> primer_numero;
    cout << "Ingrese el segundo numero: ";
    cin >> segundo_numero;
    intercambiar_valores(primer_numero,segundo_numero);
    cout << "Primer numero: "<<primer_numero<<endl;
    cout << "Segundo numero: "<<segundo_numero<<endl;
    return 0;
}

void intercambiar_valores(int&primer_numero,int&segundo_numero){
    int auxiliar=0;
    auxiliar=primer_numero; 
    primer_numero=segundo_numero;
    segundo_numero=auxiliar;
}