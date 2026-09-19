/*
Ejercicio 2 — Número mayor entre dos valores
Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.

*/
#include <iostream>
using namespace std;

int leer(){
    int n;
    cout <<"Ingrese un numero entero:"<< endl;
    cin >> n;
    return n;
}

void comparar(int n1, int n2){
    if(n1 < n2){
        cout << "El número mayor es: " << n2 << endl;
    }else{
        cout <<"El numero mayor es: " << n1 << endl;
    }
}

int main(){
    int num1, num2;

    num1 = leer();
    num2 = leer();

    comparar(num1, num2);
    
    return 0;
}

