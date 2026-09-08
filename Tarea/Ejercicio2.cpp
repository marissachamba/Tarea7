/*
EJERCICIO 2 - AREA Y PERIMETRO DE UN RECTANGULO

Ejercicio 2: Área y perímetro de un rectángulo
Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos,
debe calcular y mostrar el área y el perímetro del rectángulo.

Entrada: Base y altura de un rectángulo
Proceso: Calcular el área y el perímetro del rectángulo con las fórmulas área = base × altura y
perímetro = 2 × (base + altura)
Salida: Mostrar el área y perímetro del rectángulo

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int base, altura, area , perimetro;
    area = 0;
    perimetro = 0,

    cout << "Ingresa la base: " << endl;
    cin >> base;

    cout <<"Ingrese la altura: " << endl;
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout <<"El area es: " << area << " ,el perimero es: " << perimetro << endl;

    return 0;

}
