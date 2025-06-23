#include <iostream>
using namespace std;

int main() {
  int a, arr[8];
  float x;

  int *p;
  float *q;

  cout << "MOSTRAR DIRECCIONES DE VARIABLES" << endl;

   p = &a;
   q = &x; 

  // Si enunciamos a estamos obteniendo el valor de lo que hay en esa varibales
  // Si enunciamos *a estamos obteniendo el tamaño de esa variable, ejem. si hay 10 serian 2 bytes
  cout << "La direccion de a es: " << &a << endl;
  cout << "La direccion de a es: " << p << endl;
  cout << "La direccion de x es: " << &q << endl;
  cout << "La direccion de x es: " << q << endl;
  
  cout << "Las direcciones de las casillas del arreglo son: " << endl;
  for(int i = 0; i < 8; i++){
    cout << &arr[i] << endl;
  }
  
  return 0;
}