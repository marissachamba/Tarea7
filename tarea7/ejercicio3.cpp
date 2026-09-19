/*
Ejercicio 3 — Área de un rectángulo
Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.

*/

#include <iostream>
using namespace std;

void leerDatos(int &a, int &b){
    cout <<"Ingrese la base del rectangulo"<< endl;
    cin >> a;

    cout <<"Ingrese la altura del rectangulo"<< endl;
    cin >> b;
}

int calcularArea(int a, int b){
    return a * b;    
}

void mostar(int area){
    cout <<"El area del rectangulo es: "<< area << endl;

}

int main(){
    int base;
    int altura;
    int area;

    leerDatos(base, altura);
    
    mostar (calcularArea(base, altura));
    
    return 0;    
}