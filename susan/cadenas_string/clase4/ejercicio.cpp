#include <iostream>
using namespace std;

int main(){
    string frase, palabraFinal;

    cout << "CODIFICACION DE UNA PALABRA: ";
    cout << "Escribe una palabra: ";
    getline(cin, frase);

     for (char palabra : frase){
        switch (palabra)
        {
        case 'm':
            palabraFinal += '0'
            break;
        case 'u':
            palabraFinal += '1'
            break;
        case 'r':
            palabraFinal += '2'
            break;        
        case 'c':
            palabraFinal += '3'
            break;        
        case 'i':
            palabraFinal += '4'
            break;
        case 'e':
            palabraFinal += '5'
            break;
        case 'l':
            palabraFinal += '6'
            break;     
        case 'a':
            palabraFinal += '7'
            break;     
        case 'g':
            palabraFinal += '8'
            break;     
        case 'o':
            palabraFinal += '9'
            break;         
        default:
            palabraFinal += palabra           
            break;
        }
    }

    cout << palabraFinal;

    return 0;
}