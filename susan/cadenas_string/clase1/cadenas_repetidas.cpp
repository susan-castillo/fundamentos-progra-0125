#include <iostream>
using namespace std;

int main() {
  int contA, contE, contI, contO, contU;
  string frase, fraseInvertida;
  char aux;

  cout << "Digite una frase: ";
  getline(cin, frase);

  cout << "Cantidad de caracteres: " << frase.length() << endl;

  contA = contE = contI = contO = contU = 0;
  
  for (int i = 0; i <= frase.length() - 1; i++) {
    if (frase[i] == 'a') {
      contA++;
    } else if (frase[i] == 'e') {
      contE++;
    } else if (frase[i] == 'i') {
      contI++;
    } else if (frase[i] == 'o') {
      contO++;
    } else if (frase[i] == 'u') {
      contU++;
    } else {
      
    }
  }

  cout << "# de vocales a: " << contA << endl;
  cout << "# de vocales e: " << contE << endl;
  cout << "# de vocales i: " << contI << endl;
  cout << "# de vocales o: " << contO << endl;
  cout << "# de vocales u: " << contU << endl;

  return 0;
}