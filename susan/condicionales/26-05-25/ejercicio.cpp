#include <cmath>
#include <iostream>
using namespace std;

// Logaritmo de un termino mas x
int main() {
  int n = 0, result = 0;
  double x = 0;
  cout << "Ingresa un numero: ";
  cin >> x;
  cout << "Cuantos terminos quiere sumar? " << endl;
  cin >> n;

  if (abs(x) >= 1) {
    cout << "Formula no aplicable para este valor de x";
  } else {
    // Procedimiento
    for (int k = 1; k <= n; k++) {
      result += (pow(-1, (k - 1)) / k) * pow(x, k);
    }
      // Salida de datos
      cout << "ln(1+ " << x << ") = " << result << endl;
  }

  return 0;
}