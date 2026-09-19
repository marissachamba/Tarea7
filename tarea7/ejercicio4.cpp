/*
Ejercicio 4 — Intercambio de dos números
Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.
*/

#include <iostream>
using namespace std;

void intercambiar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main(){
    int num1, num2;
    cout <<"Ingrese el primer numero: "<< endl;
    cin >> num1;
    cout <<"Ingrese el segundo numero: "<< endl;
    cin >> num2;

    cout <<"Antes del intercambio"<< endl;
    cout <<"Numero 1: "<< num1<<" "<< "numero 2: "<< num2<< endl;
    
    intercambiar(num1, num2);

    cout<<"Despues del intercambio"<<endl;
    cout <<"Numero 1: "<< num1 << " " << "Numero 2: "<< num2;

    return 0;
}