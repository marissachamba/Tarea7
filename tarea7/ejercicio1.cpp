/*
Ejercicio 1 — Suma y promedio de 3 números
Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.
*/

#include <iostream>
using namespace std;


int leer() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    return n;
}


int sumar(int a, int b, int c) {
    return a + b + c;
}


double promediar(int total) {
    return (double)total / 3;
}

void mostrar(int suma, double prom) {
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << prom << endl;
}

int main() {
    int n1, n2, n3, suma;
    double promedio;
    
    n1 = leer();
    n2 = leer();
    n3 = leer();
    
    suma = sumar(n1, n2, n3);
    promedio = promediar(suma);
    
    mostrar(suma, promedio);
    
    return 0;
}


