// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int Calcular_mcm(int m,int n);
int Calcular_MCD(int m,int n);
int main (){
    int m=0,n=0,mcm=0,MCD=0;
    do
    {
        system ("cls");
        cout << "Ingrese el primer numero: ";
        cin >> m;
        cout << "ingrese el segundo numero: ";
        cin >> n;
        if (not(m>0&&n>0))
        {
            cout << "ingrese dos valores validos"<<endl;
        }
    } while (not(m>0&&n>0));
    mcm=Calcular_mcm(m,n);
    MCD=Calcular_MCD(m,n);
    cout << "El minimo comun multiplo de: "<<m<<" y "<<n<<" es: "<<mcm<<endl; 
    cout << "El maximo comuun divisor de: "<<m<<" y "<<n<<" es: "<<MCD<<endl; 
    return 0;
}
int Calcular_mcm(int m,int n){
    int mcm=m*n,auxiliar; // el valor se coloca por defecto a la multiplicacion de ambos numeros dados
    if (m==n)
    {
        return m;
    }
    if (n>m)
    {
        auxiliar=m; 
        m=n;
        n=auxiliar;
    }
    for (int i = m; i <= mcm; i++) // se empieza en el mayor, porque el mcm de lo numero no pueden ser igual al mayor
    {
        if (i%m==0 && i%n==0)
        {
            return i;
        }
    }
    return mcm;
}
int Calcular_MCD(int m,int n){
    int MCD=0;
    int auxiliar=0;
    while (m!=n) // se busca que ambos numeros sean igual segun algoritmo de euclides
    {
        if (m>n)
        {
            m-=n;
        }
        else
        {
            n-=m;
        }
    }
    return m;
}