// Materia: Programación I, Paralelo 4
// Autor: Celina Shandel Gutierrez Espinoza
// Carnet: 12645069 Or.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 11/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
using namespace std;

// Función que calcula el salario normal 
float Calculo_salario(int horas_trabajadas, int &horas_extra) 
{
    float salario = 0.0;
    float tarifa_hora = 2750.0 / (48 * 4); 
    int jornada_mensual = 48 * 4;         
    if (horas_trabajadas > jornada_mensual) {
        salario = jornada_mensual * tarifa_hora;
        horas_extra = horas_trabajadas - jornada_mensual;
    } else {
        salario = horas_trabajadas * tarifa_hora;
        horas_extra = 0;
    }
    return salario;
}
// Función que calcula la bonificación por horas extra
float Bonificacion(int horas_extra) {
    float tarifa_hora = 2750.0 / (48 * 4);
    float bonificacion_por_hora = tarifa_hora * 0.5; 
    return horas_extra * bonificacion_por_hora;
}
int main() {
    int horas_trabajadas = 0, horas_extra = 0;
    float salario = 0.0, salario_bonificacion = 0.0;
    system("cls"); 
    cout << "Ingrese la cantidad de horas trabajadas en el mes: ";
    cin >> horas_trabajadas;
    salario = Calculo_salario(horas_trabajadas, horas_extra);
    salario_bonificacion = Bonificacion(horas_extra);
    cout << "\nSalario= " << salario << " Bs." << endl;
    if (horas_extra > 0) {
        cout << "Bonificacion= " << salario_bonificacion << " Bs." << endl;
    } else {
        cout << "No hubo bonificacion, trabajó igual o menos que la jornada mensual." << endl;
    }
    return 0;
}
