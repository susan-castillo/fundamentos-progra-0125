#include <iostream>
using namespace std;

int main (){
    int j, i;
    string frase, fraseInvertida;
    char aux;

    cout << "Digite una frase: ";
    getline(cin, frase);

    cout << "Cantidad de caracteres: " << frase.length() << endl;
/* 
    PRIMERA FORMA DE HACERLO
    for (int i = frase.length(); i >= 0; i--){
        fraseInvertida += frase[i - 1];
    } */

    //SEGUNDA FORMA DE HACERLO
    i = 0;
    j = frase.length() - 1;
    while(i < j){
        aux = frase[i];
        frase[i] = frase[j];
        frase[j] = aux;
        i++;
        j--;
    } 

    cout << "La frase es: " << frase;
    return 0;
}