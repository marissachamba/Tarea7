/*
REPASO 

SIN & = COPIA
CON & VARIALE ORIGINAL

*/

#include <iostreaam>
using namespace std;

void aumentar(int &x){
    x = x + 1;
    cout <<"Dentro de la funcion, x vale: " << x << endl;

}

int main(){
    int a = 10;

    aumentar(a);

    cout <<"Fuera de la funcion, a vale: " << a << endl;

    return 0;
}