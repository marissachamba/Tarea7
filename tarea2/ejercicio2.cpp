/*
EJERCICIO  - Suma de 5 números

Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
• la suma total
• y cuántos números fueron ingresados

ENTRADA: 5 numeros enteros
PROCESO: calcular la suma total de esos valores
SALIDA: mostrarla suma total y cantidad de numeros ingresados 

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int i, numero, suma;

    for (i = 1; i <= 5; i++){
      cout <<"Ingrese el numero " << i << ":";
      cin >> numero;

      suma = suma + numero; 

    }

    cout <<"La suma total es: " << suma << endl;
    cout << "La cantidad de numeros ingreados es: 5" << endl;


    return 0;
}