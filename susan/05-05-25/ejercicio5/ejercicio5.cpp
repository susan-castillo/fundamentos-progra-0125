#include <iostream>
using namespace std;

int main() {
  int a, b, c, residuoA, residuoB= 0;

  cout << "Ingresa el primer numero: ";
  cin >> a;
  cout << "Ingresa el segundo numero: ";
  cin >> b;
  cout << "Ingresa el tercer numero: ";
  cin >> c;

  residuoA = a % c;
  residuoB = b % c; 

  if(residuoA != 0){
    cout << a << " no es divisible entre " << c << endl;
  } else {
    if(residuoB != 0){
    cout << b << " no es divisible entre " << c << endl;
  } else{
    cout << a << " y " << b << " son divisibles entre " << c;
  }
  return 0;
}