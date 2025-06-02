#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int filas = 0;
  cout << "Cuantas filas va tener su triangulo? ";
  cin >> filas;

  if (filas < 20) {
    for (int i = 1; i <= filas; i++) {
      for (int i2 = 1; i2 <= i; i2++) 
        cout << "*" << endl;
      
    }
  }
  else {
    cout << "El maximo de filas a ingresar solo son 20";
  }

  return 0;
}