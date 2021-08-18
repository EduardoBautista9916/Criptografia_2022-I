#include <iostream>
#define MAXIMA_LOMGITUD 100

using namespace std;

int encriptar(int aux, int rest, int pasos);

int main(){
    int n, i=0, aux=0;
    char cadena[MAXIMA_LOMGITUD];
    cout << "Ingrese el numero de Pasos: \n>";
    cin >> n;
    cout << "Ingresa la Cadena a Encriptar:\n>";fflush(stdin);
    fgets(cadena,MAXIMA_LOMGITUD-1,stdin);
    
    while(cadena[i]!='\0'){
        aux = cadena[i];
        if(aux>=65 && aux<=90){
            cadena[i]=encriptar(aux,65,n);
        }
        else if (aux>=97 && aux<=122){
            cadena[i]=encriptar(aux,97,n);
        }
        i++;
    }
    cout << "El texto Encriptado es: " << cadena << endl;
    
    return 0;
}

int encriptar(int aux, int rest, int pasos){
    aux-=rest;
    aux=(aux+pasos)%26;
    aux+=rest;
    return aux;
}

