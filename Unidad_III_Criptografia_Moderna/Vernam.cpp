#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

string bin="00000000";

void binario(char);

int main(){
    string mensaje="", clave="", encriptado="", desencriptado="";
    int i=0, long_mensaje=0;
    //Ingresamos el mensaje a Encriptar y lo guardamos en la variable mensaje
    cout << "Ingrese el Mensaje a Encriptar:\n>";
    fflush(stdin);
    getline(cin, mensaje);

    //Criterio I, vamos a mostrar el mensaje en su forma binaria basandonos en el ASCII
    //Criterio II, mientras que recorremos la cadena del mensjae, iremos generando numeros 
    //aleatorios entre el 0 y 255 para generar una clave aleatoria.
    cout << "\n\n\nEl mensaje a encriptar, en forma binaria se ve como:" << endl;
    srand(time(NULL));
    while (mensaje[i]!='\0'){
        binario(mensaje[i]);
        cout << bin << " ";
        char aux=rand()%256;
        clave=clave+aux;
        i++;
    }
    cout << endl;
    system("pause");

    cout << "\n\nLa clave para encriptar que utilizaremos sera:\n" << clave << endl;
    cout << endl;
    system("pause");

    cout << "\n\nLa clave en forma Binaria se ve como:" << endl;
    i=0;
    while (mensaje[i]!='\0'){
        binario(clave[i]);
        cout << bin << " ";
        i++;
    }
    cout << endl;
    system("pause");

    //Criterio III, Realizaremos la operacion XOR entre cada caracter y su respectiva forma decimal
    cout << "\n\n\nLa operacion da como resultado lo siguiente en cada caracter:" << endl;
    i=0;
    while (mensaje[i]!='\0'){
        binario(mensaje[i]);
        cout <<"\n     " << bin << " ";
        if (mensaje[i]<0){
            printf("= %d\n", (mensaje[i]*-1)+128);
        }else{
            printf("= %d\n", mensaje[i]);
        }
        binario(clave[i]);
        cout <<"XOR  " << bin << " ";
        if (clave[i]<0){
            printf("= %d\n", (clave[i]*-1)+128);
        }else{
            printf("= %d\n", clave[i]);
        }
        printf("____________________\n");
        char var_xor = mensaje[i] ^ clave[i];
        encriptado=encriptado+var_xor;
        binario(var_xor);
        cout <<"     " << bin << " ";
        if (var_xor<0){
            printf("= %d\n", (var_xor*-1)+128);
        }else{
            printf("= %d\n", var_xor);
        }
        i++;
    }
    cout << endl;
    system("pause");
    
    //Mostramos el texto cifrado
    cout << "\n\nEl mensaje encriptado queda como: " << encriptado << endl;
    cout << endl;
    system("pause");

    //Criterio IV, realizamos la operacion contraria para desencriptar
    cout << "\n\n\nLa operacion da como resultado lo siguiente en cada caracter:" << endl;
    i=0;
    while (mensaje[i]!='\0'){
        binario(encriptado[i]);
        cout <<"\n     " << bin << " ";
        if (encriptado[i]<0){
            printf("= %d\n", (encriptado[i]*-1)+128);
        }else{
            printf("= %d\n", encriptado[i]);
        }
        binario(clave[i]);
        cout <<"XOR  " << bin << " ";
        if (clave[i]<0){
            printf("= %d\n", (clave[i]*-1)+128);
        }else{
            printf("= %d\n", clave[i]);
        }
        printf("____________________\n");
        char var_xor = encriptado[i] ^ clave[i];
        desencriptado=desencriptado+var_xor;
        binario(var_xor);
        cout <<"     " << bin << " ";
        if (var_xor<0){
            printf("= %d\n", (var_xor*-1)+128);
        }else{
            printf("= %d\n", var_xor);
        }
        i++;
    }
    cout << endl;
    system("pause");
    
    //Mostramos el texto cifrado
    cout << "\n\nEl mensaje Desencriptado queda como: " << desencriptado << endl;
    cout << endl;
    system("pause");
    
}


void binario(char a){
    bin="00000000";
    int i=7;
    if(a<0){
        bin[0]='1';
        a=(a)*(-1);
    }
    while(a>1){
        int r=a%2;
        a/=2;
        bin[i]= r+48;
        i--;
    }
    bin[i]= a+48;
}