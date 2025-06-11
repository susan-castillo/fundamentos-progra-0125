#include <iostream>
using namespace std;

int main() {
    string fraseFinal, palabra;

    cout << "LENGUAJE P:" << endl;
    cout << "Escribe una frase: ";
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ){
            fraseFinal = fraseFinal + frase[i] + ;
        }
    }
    return 0;
}

