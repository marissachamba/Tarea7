/*
EJERCICIO 1 - Area de un rectangulo 

AUTOR: Marissa Chamba
FECHA: 02/09/2026
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int base, altura, area;
    area = 0;

    cout <<"Ingrese base: " << endl;
    cin >> base;
    cout <<"ingresa altura: " << endl;
    cin >> altura;

    area = base * altura;
    cout <<"area: " << area << endl;

    return 0;

}
