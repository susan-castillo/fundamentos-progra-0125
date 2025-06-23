#include <iostream>
using namespace std;

int mcd(int x, int y) {
  int r;

  do {
    r = x % y;
    if (r != 0) {
      x = y;
      y = r;
    }
  } while (r != 0);

      return y;
}

int main() {
  int a, b;

  cout << "CALCULO DEL MCD DE DOS NUMEROS" << endl;
  cout << "Digite el mayor: ";
  cin >> a;
  cout << "Digite el menor: ";
  cin >> b;

  cout << "El MCD es: " << mcd(a, b);
  return 0;
}