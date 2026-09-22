/*
EJERCICIO 1 - Números pares hasta N

Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
muestre en pantalla todos los números pares desde 1 hasta N.
Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
de error.

ENTRADA: numero entero positivo N 
PROCESO: calcular los numeros pares desde 1 hasta N
SALIDA: numeros pares desde1 hasta N o mensaje de "ERROR"

*/

#include <iostream>
#include <string> 
using namespace std;

int main(){
    int N, i = 2;

    cout <<"ingrese un numero mayor a 0" << endl;
    cin >> N;

    if (N <= 0){
        cout << "ERROR el numero debe ser mayor a 1" << endl;
    }else{
        cout << "Numeros pares desde 1 hasta " << N << ":" << endl;


      while (i <= N){
          cout << i << " ";
           i = i + 2;
        }
    }
    return 0;  
    
}