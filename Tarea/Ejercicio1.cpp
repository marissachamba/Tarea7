/*
EJERCICIO 1 - CONVERCION DE TEMPERATURA

Ejercicio 1: Convertir de Celsius a Fahrenheit
Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a
grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la
conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.

Entrada: Temperatura en °C
Proceso: Utilizar la fórmula de conversión F = (C × 9/5) + 32
Salida: Mostrar la temperatura en °F

*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    int celsius, fahrenheit;

    cout <<"Ingrese la temepraturaen celsius: " << endl;
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

cout << "La temeperatura en fahrenheit es: " << fahrenheit << endl;

return 0;

}
