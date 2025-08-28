// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;

int main()
{
    int mes;
    cout << "Ingrese un numero del 1 al 12: " << endl;
    cin >> mes;

    if(mes >= 1 && mes <= 12){
        if(mes == 1){
            cout << " Enero " << endl;
        } else if (mes == 2){
            cout << " Febrero " << endl;
        } else if (mes == 3){
            cout << " Marzo " << endl;
        } else if (mes == 4){
            cout << " Abril " << endl;
        } else if (mes == 5){
            cout << " Mayo " << endl;        
        } else if (mes == 6){
            cout << " Junio " << endl;
        } else if (mes == 7){
            cout << " Julio " << endl;
        } else if (mes == 8){
            cout << " Agosto " << endl;
        } else if (mes == 9){
            cout << " Septiembre " << endl;
        } else if (mes == 10){
            cout << " Octubre " << endl;
        } else if (mes == 11){
            cout << " Noviembre " << endl;
        } else if (mes == 12){
            cout << " Diciembre " << endl;
        }
       
    } else {
        cout << " Mes invalido " << endl;
    }
        
    return 0;

}
