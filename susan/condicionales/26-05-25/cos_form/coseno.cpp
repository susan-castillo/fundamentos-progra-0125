#include <cmath>
#include <iostream>
using namespace std;

// Logaritmo de un termino mas x
int main() {
  int m = 0;
  double x = 0, fact = 1, result = 0;
  cout << "Ingresa un numero: ";
  cin >> x;
  cout << "Cuantos terminos quiere sumar? " << endl;
  cin >> m;

  for (int n = 0; n <= m; n++) {
    for (int i = 1; i <= 2 * n ; i++) {
      fact = fact * i;
        result = result + (pow(-1, n) * pow(x, (2 * n))) / (fact);  
    }
  }

  cout << "Cos = " << result;

  return 0;
}