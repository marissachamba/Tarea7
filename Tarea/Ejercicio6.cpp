/*
EJERCICIO 6 - PLAN DE INTERNET


Ejercicio 6: Plan de internet (validación + recargo)
Escribe un algoritmo que reciba dos datos: el plan de internet y el consumo. El plan
solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero.
Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la
tarifa base es 20 dólares y el límite incluido es 150.
Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada
unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se
paga solo la tarifa base.
Si el plan no es 1 ni 2, o si el consumo es negativo, el algoritmo debe mostrar “DATOS
INVÁLIDOS”. En caso contrario, debe mostrar el total a pagar.

Entrada: planInternet, consumo
Proceso: Se valida el plan (1 o 2) y consumo ≥ 0. Plan 1: $12, límite 80. Plan 2: $20, límite 150. Si se
excede, se cobra $0.25 por unidad extra; si no, se paga solo la tarifa base. Datos inválidos si no
cumple.
Salida: Mostrar total a pagar o "DATOS INVÁLIDOS"

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int planInternet, base, limite, excedente;
    double consumo, totalPagar;
    totalPagar = 0.0;

    cout <<"Ingrese su plan de internet: " << endl;
    cin >> planInternet;

    cout <<"Ingrese el consumo: " <<endl;
    cin >> consumo;

    if ((planInternet == 1 || planInternet == 2) && consumo >= 0){
        if (planInternet == 1){
            base = 12;
            limite = 80;
        }
        
        else{
         base = 20;
         limite = 150;
        } 

       if (consumo > limite){
         excedente = consumo - limite;
         totalPagar = base + (excedente * 0.25);
       }else{
          totalPagar = base;
       }

        cout <<" Total a pagar: " << totalPagar << endl;
                         
    }else{
      cout << "DATOS INVALIDOS" << endl;

    }
    return 0;
}