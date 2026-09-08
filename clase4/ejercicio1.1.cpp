/*
EJERCICIO 1 - Suma de dos enteros 

AUTOR: Marissa Chamba
FECHA: 04/09/2026

ENUNCIADO: Pide dos enteros y muestre la suma

*/

#include <iostream>
using namespace std;

int main(){
    int num1, num2, suma;
    suma = 0;

    cout <<"Ingrese numero 1: ";
    cin >> num1;
    cout <<"Ingrese numero2: ";
    cin >> num2;

    suma = num1 + num2;
    
    cout << "Suma =" << suma << endl;
    return 0;

}
