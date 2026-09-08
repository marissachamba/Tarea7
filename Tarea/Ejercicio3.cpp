/*
EJERCICIO3 - DESCUENTO POR EDAD

Ejercicio 3: Descuento por edad
Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.

Entrada: edad de la persona
Proceso: Si edad es ≥ 18, precio = 5.00; si edad &lt; 18, precio = 2.50
Salida: Mostrar el precio final a pagar

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int edad;
    double precio;
    precio = 0.0;

    cout <<"Ingrese su edad: " << endl;
    cin >> edad;

    if (edad >= 18){
     precio = 5.00;
    }
    else{
     precio = 2.50;
    }

    cout << "EL precio a pagar es de: " << precio << endl;

    return 0;

}