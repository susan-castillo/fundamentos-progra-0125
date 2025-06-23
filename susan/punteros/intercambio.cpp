#include <iostream>
using namespace std;

void intercambio(int *a, int *b) {
  int aux;

  aux = *a;
  *a = *b;
  *b = aux;
}

int main() {
  int a, b;

  cout << "INTERCAMBIAR VALORES DE VARIABLES" << endl;

  cout << "Digite a: ";
  cin >> a;
  cout << "Digite b: ";
  cin >> b;

  intercambio(&a, &b);

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  return 0;
}