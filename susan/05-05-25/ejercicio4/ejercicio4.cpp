#include <iostream>
using namespace std;

//Ejercicio 4:
int main() {
  int num = 0;

  cout << "Ingrese un numero entre 1 y 7: ";
  cin >> num;

  switch (num) {
    case 1:
      cout << "El dia de la semana es lunes";
      break;
    case 2:
      cout << "El dia de la semana es martes";
      break;
    case 3:
      cout << "El dia de la semana es miercoles";
      break;
    case 4:
      cout << "El dia de la semana es jueves";
      break;
    case 5:
      cout << "El dia de la semana es viernes";
      break;
    case 6:
      cout << "El dia de la semana es sabado";
      break;
    case 7:
      cout << "El dia de la semana es domingo";
      break;
    default:
      cout << "ERROR. El numero que ingresaste no se encuentra entra las opciones";  
      break;
  }
  return 0;
}