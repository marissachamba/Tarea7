/*
Ejercicio 5 — Contador actualizado con referencia
Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.
*/

#include <iostream>
using namespace std;

void incrementar(int &cont) {
    cont = cont + 1;  
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    
    int contador = 0;  
    
    while (contador <= n) {
        cout << contador << endl;   
        incrementar(contador);      
    }
    
    return 0;
}