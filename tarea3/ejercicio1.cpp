/*
Ejercicio 1 — Registro de edades

Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo.
Luego, el programa debe:
1. mostrar todas las edades registradas junto con su posición
2. pedir al usuario una edad adicional para buscar dentro del arreglo
3. indicar si esa edad fue encontrada o no
4. en caso de encontrarla, mostrar la posición de la primera coincidencia
*/

#include <oistream>
#include <string>

using namespace std;

int  main(){
    int edades, i;

    for(i = 0; i < 5; i++){

        cout <<"Ingrese la edad" << i + 1 << ": " << endl;
        cin >> edades[i];
    }
}