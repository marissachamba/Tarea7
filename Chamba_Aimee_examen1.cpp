/*
Nombre del estudiante: Marissa Chamba
Fecha: 09/09/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombres[20];
    double notas[20];
    int cantidad = 0;
    int opcion;

    do {
        cout << "=== MENU ===" << endl;
        cout << "1. Registrar estudiantes y notas" << endl;
        cout << "2. Mostrar reporte general" << endl;
        cout << "3. Buscar estudiante por nombre" << endl;
        cout << "4. Salir" << endl;
        cout << "seleccione una opcion: ";
        cin >> opcion;

        while (opcion < 1 || opcion > 4) {
            cout << "Opcion no valida: ";
            cin >> opcion;
        }

        //OPCION 1: REGISTRAR
        if (opcion == 1) {
            do {
                cout << "Escribe la cantidad de estudiantes (1-20): ";
                cin >> cantidad;
            } while (cantidad < 1 || cantidad > 20);

            for (int i = 0; i < cantidad; i++) {
                cout << "Estudiante " << i + 1 << endl;
                cout << "Ingresa el nombre del estudiante: ";
                cin >> nombres[i];

                do {
                    cout << "Ingresa la nota (0-20): ";
                    cin >> notas[i];
                } while (notas[i] < 0 || notas[i] > 20);
            }
            cout << "Guardado correctamente" << endl;
        }

        //OPCION 2: REPORTE
        else if (opcion == 2) {
            if (cantidad == 0) {
                cout << "No hay datos aun. Registra primero." << endl;
            } else {
                double suma = 0;
                double mayor = notas[0], menor = notas[0];
                int posMayor = 0, posMenor = 0;
                int aprobados = 0, reprobados = 0;

                cout << "REPORTE" << endl;
                cout << "Nombre   Nota   Estado" << endl;

                for (int i = 0; i < cantidad; i++) {
                    cout << nombres[i] << "   " << notas[i];

                    if (notas[i] >= 14) {
                        cout << "   APROBADO" << endl;
                        aprobados++;
                    } else {
                        cout << "   REPROBADO" << endl;
                        reprobados++;
                    }

                    suma = suma + notas[i];

                    if (notas[i] > mayor) {
                        mayor = notas[i];
                        posMayor = i;
                    }
                    if (notas[i] < menor) {
                        menor = notas[i];
                        posMenor = i;
                    }
                }

                cout << "Promedio: " << suma / cantidad << endl;
                cout << "Mayor nota: " << nombres[posMayor] << " " << mayor << endl;
                cout << "Menor nota: " << nombres[posMenor] << " " << menor << endl;
                cout << "Aprobados: " << aprobados << "  Reprobados: " << reprobados << endl;
            }
        }

        //OPCION 3: BUSCAR
        else if (opcion == 3) {
            if (cantidad == 0) {
                cout << "No hay datos aun. Registra primero." << endl;
            } else {
                string buscar;
                cout << "Nombre a buscar: ";
                cin >> buscar;

                bool encontrado = false;
                int pos = 0;

                while (pos < cantidad && encontrado == false) {
                    if (nombres[pos] == buscar) {
                        encontrado = true;
                    } else {
                        pos++;
                    }
                }

                if (encontrado) {
                    cout << "Nombre: " << nombres[pos] << endl;
                    cout << "Nota: " << notas[pos] << endl;
                    if (notas[pos] >= 14) {
                        cout << "APROBADO" << endl;
                    } else {
                        cout << "REPROBADO" << endl;
                    }
                } else {
                    cout << "No encontrado" << endl;
                }
            }
        }

    } while (opcion != 4);

    cout << "Saliendo del programa..." << endl;
    return 0;
}