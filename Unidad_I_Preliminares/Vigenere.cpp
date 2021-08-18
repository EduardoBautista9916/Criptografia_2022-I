#include <iostream>
#include <string.h>
#define MAXIMA_LOMGITUD 100

using namespace std;

const int alfabeto = 26;

void genMat(char may[alfabeto][alfabeto], char min[alfabeto][alfabeto]);
bool isMin(char c);
bool isMay(char c);
int encriptar(int clave, int text,char may[alfabeto][alfabeto],char min[alfabeto][alfabeto]);

int main(){
    char may[alfabeto][alfabeto], min[alfabeto][alfabeto];
    char clave[MAXIMA_LOMGITUD], texto[MAXIMA_LOMGITUD];
    genMat(may,min);

    cout << "Ingrese la Clave: \n>";
    fgets(clave,MAXIMA_LOMGITUD-1,stdin);
    cout << "Ingrese el Texto a Encriptar: \n>";
    fgets(texto,MAXIMA_LOMGITUD-1,stdin);
    int i=0, lon = strlen(clave)-1;
    while(texto[i]=!'\0'){
        int posClave=i%lon;

    }

}

void genMat(char may[alfabeto][alfabeto], char min[alfabeto][alfabeto]){
    for (int i = 0; i < alfabeto; i++){
        for (int j = 0; j < alfabeto; j++){
            may[i][j]=((j+i)%alfabeto)+65;
            min[i][j]=((j+i)%alfabeto)+97;
        }
    }
}

bool isMin(char c){
    if(c>=65&&c<=90){
        return true;
    }
    else{
        return false;
    }
}

bool isMay(char c){
    if(c>=97&&c<=122){
        return true;
    }
    else{
        return false;
    }
}

int encriptar(int clave, int text,char may[alfabeto][alfabeto],char min[alfabeto][alfabeto]){
    if(isMin(clave)){
        clave-=64;
    }
    else if(isMay(clave)){
        
    }
}