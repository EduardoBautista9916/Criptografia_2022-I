#include <iostream>
#define MAXIMA_LOMGITUD 1000

using namespace std;

int encriptar(int aux, int rest, int pasos);

int main(){
    int i=0, aux=0;
    char cadena[MAXIMA_LOMGITUD], cadenades[MAXIMA_LOMGITUD];
    cout << "Ingresa la Cadena a Desencriptar:\n>";fflush(stdin);
    fgets(cadena,MAXIMA_LOMGITUD-1,stdin);
    for(int n=1;n<=26;n++){
        i=0;
        while(cadena[i]!='\0'){
            aux = cadena[i];
            if(aux>=65 && aux<=90){
                cadenades[i]=encriptar(aux,65,n);
            }
            else if (aux>=97 && aux<=122){
                cadenades[i]=encriptar(aux,97,n);
            }
            i++;
        }
        cout << "El texto Desencriptado es: " << cadenades << endl;
    }
    
    
    return 0;
}

int encriptar(int aux, int rest, int pasos){
    aux-=rest;
    aux=(aux+pasos)%26;
    aux+=rest;
    return aux;
}
