/*
EJERCICIO 2 - CONVERSION DEE MINUTOS

AUTOR: Marissa Chamba
FECHA: 04/09/2026

ENUNCIADO: recibe horas y minutos, y muestra el total de minutos.
Reglas
horas >= 0
minutos entre 0 y 59
Si no cumple mostrar "Datos Invalidos"

E/P/S
- Entrada: hpras, minutos
- proceso: validar rangaos totalMinutos 
- Salida: totalMinutos o "DATOS INVALIDOS"

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
 int horas, minutos, totalMinutos;

   cout << "ingrese horas: " << endl;
   cin >> horas;

   cout << "Ingrese minutos: " << endl;
   cin >> minutos;

   if(horas < 0 || minutos < 0 || minutos > 59){
     cout << "DATOS INVALIDOS" << endl;
     return 0;
   }

   totalMinutos = (horas * 60) + minutos;

   cout << "total minutos: " << totalMinutos << endl;

   return 0;
}
