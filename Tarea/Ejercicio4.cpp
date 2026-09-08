/*
EJERCICIO 4 - NOTA FINAL

Ejercicio 4: Nota final con ponderaciones
Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
nota final.

Entrada: Parcial1, Parcial2 y Proyecto
Proceso: Calcular la nota final: notaFinal = (Parcial1 × 0.30) + (Parcial2 × 0.30) + (Proyecto × 0.40)
Salida: Mostrar la nota final

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    double parcial1, parcial2, proyecto, notaFinal;
    notaFinal = 0.0;

    cout <<"Ingrese su nota del parcial 1: " << endl;
    cin >> parcial1;
    cout <<"Ingrese su nota del parcial 2: " << endl;
    cin >> parcial2;
    cout <<"Ingrese su nota del proyecto: " << endl;
    cin >> proyecto;

    notaFinal = (parcial1 * 0.30) + (parcial2 * 0.30) + (proyecto* 0.40);

    cout << "Su nota final es: " << notaFinal << endl;

    return 0;

}