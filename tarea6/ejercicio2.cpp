/*
Ejercicio 2 — Registro de cantidades vendidas
Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de
productos vendidos durante el día en un arreglo.
Luego, el programa debe:
1. mostrar todas las cantidades ingresadas
2. pedir al usuario una cantidad específica para buscar
3. indicar si esa cantidad se encuentra dentro del arreglo
4. mostrar la posición donde aparece por primera vez, o un mensaje indicando
que no fue encontrada

Entrada: Pedir 6 cantidade enteras 
Proceso:Registrar las cantidades, buscar una cantidad
Salida: Mostrar las cantidades ingresadas y la posicion de la cantidad buscada
*/

#include <iostream>./
using namespace std;

int main(){
    int cantidades[6];
    int cantidad, i;
    bool encontrado = false;

    for(i = 0; i < 6; i++){
        cout<<"Ingrese la cantidad " << i << " de productos vendidos: "<< endl,
        cin >> cantidades[i];
               
    }
    cout << endl;
    cout << "Cantidades registradas correctamente" << endl;
    cout << endl;

    for( i = 0; i < 6; i++){
    cout <<"Cantidad"<< i <<": "<< cantidades[i] << endl;
        
    }
    cout <<"Ingrese una cantidad a buscar:" << endl;
    cin >> cantidad;

    for (i = 0; i < 6; i++){
        if(cantidades[i] == cantidad){
        cout << "Cantidad encontrada en la posicion: "<< i << endl;
        encontrado = true;
        break;
        }

    }
   if (encontrado == false){
        cout<<"Cantidad no encontrada"<< endl;
    }
    return 0;

}