/*
Autor: Aimee Chamba
Mini taller
*/

#include <iostream>
#include <string>
using namespace std;

void registrar(string nombre[], int &cantidades, int max, double promedio[]){
    if(cantidades > 0){
        cout <<"Ya seregistraron todos los estudiantes"<< endl;
        return;
    }
    
    for(int i = 0; i < 9; i++){
    cout << "Ingrese el numbre del estudiante" << i + 1 << ": " << endl;
    cin >> nombre[i];
    cout << "Ingrese su promedio" << endl;
    cin >> promedio[i];
    cantidades++;
    }

    cout << "Estudiantes registrados correctamente" << endl;
}

void mostrarTodos(string nombre[], double promedio[], int cantidades){
    if(cantidades == 0){
        cout << "No hay estudiantes registrados aun" << endl;
        return;

    }

    cout <<"=== LISTA DE ESTUDIANTES ==="<< endl;


    for(int i = 0; i < cantidades; i++){
    cout << "Estudiante " << i + 1 << ": " << nombre[i] << ". Promedio: "<< promedio[i] << endl;
    }
    return;

}

void buscar(bool encontrado = false, string nombre[], double promedio[], int cantidades ){
    for(int i = 0; i < cantidades; i++){
        if(nombre[i] == cantidades)
        cout <<"Estudiante encontrado en la posicion " << i + 1 << ": " << endl;
        encontrado = true;
        break;
    }
    if(encontrado == false){
        cout <<"Estudiante no encontado" << endl;
    }

    cout <<"ingrese el "
    return;
}