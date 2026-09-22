/*
EJERCICIO 4 — Menú repetitivo
Elaborar un programa en C++ que muestre el siguiente menú:
1. Mostrar el doble de un número
2. Mostrar el triple de un número
3. Salir
El programa debe repetirse hasta que el usuario elija la opción 3.
Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
error y volver a mostrar el menú.

ENTRADA: pedir un numero
PORCESO: clacular el doble y el triple del numero o salir
SALIDA: motarar el doble, el triple o salir


*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int opcion, numero;

    do {
        cout << endl << "===== MENU =====" << endl;
        cout << "1. Mostrar el doble de un numero" << endl;
        cout << "2. Mostrar el triple de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

                if (opcion == 1) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            cout << "El doble es: " << numero * 2 << endl;
        }else if (opcion == 2) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            cout << "El triple es: " << numero * 3 << endl;
        }else if (opcion == 3) {
            cout << "Saliendo del programa..." << endl;
        }else {
            cout << "ERROR: Opcion invalida." << endl;
        }

    } while (opcion != 3);  

    return 0;
}