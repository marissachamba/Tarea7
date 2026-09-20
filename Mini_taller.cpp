/*
Autor: Aimee Chamba
Mini taller
*/

#include <iostream>
#include <string>
using namespace std;

//Funcion de la opcion 1
void registrar(string nombre[], int &cantidades, double promedio[]){
    if(cantidades > 0){
        cout <<"Ya se registraron todos los estudiantes"<< endl;
        return;
    }
    
    for(int i = 0; i < 9; i++){
    cout << "Ingrese el numbre del estudiante " << i + 1 << ": " << endl;
    cin >> nombre[i];
    cout << "Ingrese su promedio (0-10): " << endl;
    cin >> promedio[i];
    cantidades++;
    }

    cout << "Estudiantes registrados correctamente" << endl;
}

//Funcion de la opcion 2
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

//Funcion de la opcion 3
void buscar(string nombre[], double promedio[], int cantidades ){
    if(cantidades == 0){
        cout << "No hay estudiantes registrados" << endl;
        return;
    }
    string buscado;
    cout <<"Ingrese el nombre del estudiante a buscar: " << endl;
    cin >> buscado;

    bool encontrado = false;

    for(int i = 0; i < cantidades; i++){
        if(nombre[i] == buscado){
            cout <<"estudiante encontrado en la posicion: " << i + 1 << endl;
            cout << "Nombre: " << nombre[i] <<". Pormedio: " << promedio[i] << endl;
            encontrado = true;
            break;
        }
    }

    if(encontrado == false){
        cout <<"Estudiante no encontrado" << endl;
    
    }
    
}

//Funcion de la opcion 4
void reporte(string nombre[], double promedio[], int cantidades){
    
    if(cantidades == 0){
    cout <<"No hay entudiantes registrados"<< endl;
    }

    //ordenar del mejor al menor 
    string nombresOrdenados[9]; 
    double promediosOrdenados[9]; 
    
    for(int i = 0;i < cantidades; i++){
        nombresOrdenados[i] = nombre[i];
        promediosOrdenados[i] = promedio[i];              
    }

    for(int i = 0; i < cantidades - 1 ; i++){
        for(int j = 0; j < cantidades - 1; i++){
            if(promediosOrdenados[j] < promediosOrdenados[j + 1]){
                double tempProm = promediosOrdenados[j];
                promediosOrdenados [j] = promediosOrdenados[j +1];
                promediosOrdenados[j + 1] = tempProm;

                string tempNom = nombresOrdenados[j];
                nombresOrdenados [j] = nombresOrdenados[j +1];
                nombresOrdenados[j + 1] = tempNom;                
            }
        }

        cout <<"=== RANKING ===" <<endl;
        for(int i = 0; i < cantidades; i++){
            cout << i + 1 << "Primer Lugar: " << nombresOrdenados[i] << ". Promedio: " << promediosOrdenados[i] << endl;
            
        }
    }
    

}

//Funcion de la opcion 5
void reconocimiento(string nombre[], double promedio[], int cantidades){
    if(cantidades == 0){
        cout <<"No hay estudiantes registrados" << endl;
    }

    int mejorPos = 0;

    //Felicitar al numero 1
    for(int i = 0; i < cantidades; i++){
        if(promedio[i] > promedio[mejorPos]){
            mejorPos = i;
        }
    }

    cout <<"Felicidades " << nombre[mejorPos] << ". Tu promedio es: " << promedio[mejorPos] << endl;

}

//Funcion de la opcion 6
void salir(int cantidades){
    if(cantidades == 0){
        cout << "No hay estudiantes registrados"<< endl;
    }
    else{
        cout <<"Saliendo del programa..."<< endl;
    }

}

int main(){
    string nombre[9];
    double promedio[9];
    int cantidades = 0;
    int opcion;

    do{
     cout <<"=== MENU ===" << endl;
     cout <<"1. Registrar datos" << endl;
     cout <<"2. Mostrar los datos" << endl;
     cout <<"3. Buscar un dato" << endl;
     cout <<"4. Reporte" << endl;
     cout <<"5. Reconocimiento" << endl;
     cout <<"6. Salir" << endl;
     cout <<"Elige una opcion: " << endl;
     cin >> opcion;

      switch(opcion){
         case 1: registrar(nombre, cantidades, promedio);
         case 2: mostrarTodos(nombre, promedio, cantidades);
         break;
         case 3: buscar(nombre, promedio, cantidades);
         break;
         case 4: reporte(nombre, promedio, cantidades);
         break;
         case 5: reconocimiento(nombre, promedio, cantidades);
         break;
         case 6: cout << "Hasta luego" << endl;
         break;
         default: cout << "opcion invalida" << endl;
         break;        
        }      
    }
    while(opcion !=6);

    return 0;
}
