// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 6


#include <iostream>

using namespace std;

int main()
{
    int numero;
    system("chcp 65001");
    system("cls");
    cout << " ingrese un numero: "; 
    cin >> numero; 
    
    if (numero > 0) 
    {
        cout << " el numero es positivo " << endl;    
    }
    else if (numero < 0)
     {
        cout << " el numero es negativo " << endl;
      }
    else {
        cout << " el numero es cero " << endl;
      }

 return 0;
        
}
