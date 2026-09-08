/*
EJERCICIO 5 - REPARTO DE HORAS SEMANAS, DIAS Y HORAS

Ejercicio 5: Reparto de horas en semanas, días y horas
Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.

Entrada: horasTotales
Proceso: Convertir horas totales a semanas, días y horas restantes
Salida: Mostrar semanas, días y horas finales

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int horasTotales, semanas, dias, horas, resto;
    
    cout <<"Ingrese las  horas totales; "<< endl;
    cin >> horasTotales;

    semanas = horasTotales / 168;
    resto = horasTotales - (semanas* 168);
    dias = resto / 24;
    horas = resto - (dias * 24);

    cout <<"Semanas:" << semanas << ", dias: " << dias << ", horas: " << horas << endl;

}