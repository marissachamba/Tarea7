/*
EJERCICIO 3 - Tabla de multiplicar repetitiva

Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
correctamente.

ENTRADA: numero entero
PORCESO: tabla de multiplicar del 1 al 10
SALIDA: mostrar mensaje indicando que fue generada correctamente 


*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero, i, resultado;

    cout <<"Ingrese un numero entero: ";
    cin >> numero;

    for (i = 1; i <= 10; i++){
        resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;

    }
    cout <<"Tabla de multiplicar" << endl;

    return 0;
}