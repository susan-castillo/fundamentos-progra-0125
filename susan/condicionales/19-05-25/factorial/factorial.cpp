#include <iostream>
using namespace std;

int main() {
  int number, fact;
  number = 0;
  fact = 1;

  cout << "Ingrese un numero: ";
  cin >> number;

  cout << number;
  for (int i = number; i >= 1; --i) {
    cout << "x" << i;
    fact = fact * i;
  }
  cout << "\nFactorial: " << fact;
  return 0;
}