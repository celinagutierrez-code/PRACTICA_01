// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 21/08/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;
int main()

{
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    if ((caracter >= 'A' && caracter <= 'Z') || (caracter >=  'a' && caracter <= 'z')){
        if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i'|| caracter == 'o' || caracter == 'u') 
           cout << " Es una vocal " << endl;
        else {
            cout << " Es una consonante " << endl;
        }
    }else {
        cout << " Es un caracter especial " << endl;

}

return 0;
}

