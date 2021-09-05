/* Programa diseñado para Generar el Digito de Control en un numero de cuenta de  */
/* longitud n                                                                     */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <string>
#define LONGITUD_MAXIMA 100

using namespace std;

int main(){
    char cuenta[LONGITUD_MAXIMA], cuentaOriginal[LONGITUD_MAXIMA];
    int i =0;
    cout << "Ingresa la Cuenta:\n>";fflush(stdin);
    fgets(cuenta,LONGITUD_MAXIMA-1,stdin);fflush(stdin);
    strcpy(cuentaOriginal,cuenta);
    i=strlen(cuenta)-1;
    cuenta[i]='\0';
    i--;
    while (i>=0){
        int naux = cuenta[i]-48;
        naux *=naux;        
        if(naux>9){
           string caux(std::to_string(naux));
           int n1 = caux[0] - 48;
           int n2 = caux[1] - 48;
           int numero=n1+n2;
           cuenta[i] = numero +48;
        }
        else{
            cuenta[i] = naux+48;
        }
        i-=2;
    }
    i=0;
    int acumulado = 0;
    while (cuenta[i]!='\0'){
        acumulado = acumulado + (cuenta[i]-48);
        i++;
    }
    acumulado = (acumulado*9)%10 ;
    i=strlen(cuenta);
    cuentaOriginal[i]=acumulado+48;
    cout<<"Cuenta con Numero de Control: "<<cuentaOriginal<<endl;
}