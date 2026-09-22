/*
EJERCICIO 1 - Registro de edades
Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo.
Luego, el programa debe:
1. mostrar todas las edades registradas junto con su posición
2. pedir al usuario una edad adicional para buscar dentro del arreglo
3. indicar si esa edad fue encontrada o no
4. en caso de encontrarla, mostrar la posición de la primera coincidencia

Entrada:Pedir edades
Proceso: Guardarlas en posiciones, buscar una edad
Salidad: Mostar la edad junto su posición, si la edad a buscar fue encontrada o no

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int edad[8], i, dato;
    int posicion;

    for (i = 0; i < 8; i++){
        cout <<"ingrese la edad "<< i << ": " << endl;
        cin >> edad[i];           
        
    }
    cout << endl;
    cout <<"Edades registradas correctamente" << endl;

    for(i = 0; i < 8; i++){
        cout << "Edad " << i << ": " << edad[i] << endl;

    }

    cout <<"Ingrese una edad a buscar:" << endl;
    cin >> dato;

    for(i = 0; i < 8; i++){
        if(edad[i] == dato){
            cout <<"Edad encontada en la posicion: " << i << endl;
            return 0;
        }

    }
    cout <<"Edad no encontrada" << endl;
    
    return 0;

}