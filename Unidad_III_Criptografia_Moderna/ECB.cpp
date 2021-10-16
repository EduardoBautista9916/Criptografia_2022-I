#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

string bin="00000000";

void binario(char);

int main(){
    char M[]="******************** EL SABIO NO DICE NUNCA TODO LO QUE PIENSA, PERO SIEMPRE PIENSA TODO LO QUE DICE";
    string bits="";
    //printf("%s", M);*/
    int i=0;
    while(M[i]!='\0'){
        binario(M[i]);
        //cout << M[i];
        bits+=bin;
        i++;
    }
//    cout << bits << endl;
//    int tam = sizeof(M);
//    cout << tam << endl;
    i=0;
    while(bits[i]!='\0'){
        for (int j = 0; j < 80 && bits[i]!='\0'; j++){
            cout << bits[i] ;
            i++;
        }
        cout << "\n";
    }

}

void binario(char a){
    bin="00000000";
    int i=7;
    while(a>1){
        int r=a%2;
        a/=2;
        bin[i]= r+48;
        i--;
    }
    bin[i]= a+48;
}