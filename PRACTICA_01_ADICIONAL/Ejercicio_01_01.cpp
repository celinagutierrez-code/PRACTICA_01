// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069
// Carrera del estudiante: Ingernieria Biomedica
// Fecha creación: 01/10/2025


#include <iostream>

using namespace std;

bool estaEnListaHonor(float n1, float n2, float n3, float n4, float n5);

int main()
{
    float n1, n2, n3, n4, n5;
    cout << "Ingrese 5 calificaciones: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if (estaEnListaHonor(n1, n2, n3, n4, n5))
        cout << "El estudiante ESTA en la lista de honor";
    else
        cout << "El estudiante NO esta en la lista de honor";

    return 0;
}

bool estaEnListaHonor(float n1, float n2, float n3, float n4, float n5)
{
    float promedio = (n1 + n2 + n3 + n4 + n5) / 5;
    if (promedio >= 85 && n1 >= 80 && n2 >= 80 && n3 >= 80 && n4 >= 80 && n5 >= 80)
        return true;
    else
        return false;
}
