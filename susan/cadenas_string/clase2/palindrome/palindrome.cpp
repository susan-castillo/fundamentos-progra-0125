#include <string.h>

#include <iostream>
using namespace std;

int main() {
  // int j, i;
  string frase, fraseInvertida;
  // char aux;

  cout << "Digite una frase: ";
  getline(cin, frase);

  for (int i = frase.length(); i >= 0; i--) {
    fraseInvertida += frase[i - 1];
  }

  if (frase.compare(fraseInvertida)) {
    cout << "Si es un palindrome" << endl;

  } else {
    cout << "No es palindrome" << endl;
  }

  cout << "La frase invertida: " << fraseInvertida << endl;
  cout << "La frase original: " << frase << endl;
  return 0;
}