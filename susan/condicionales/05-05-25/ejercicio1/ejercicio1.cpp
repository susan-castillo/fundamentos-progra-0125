#include <iostream>
using namespace std;

//Ejercicio 1: 
int main(){

    int num1, num2 = 0;
    cout << "Verificar si un numero es divisible entre otro" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(num1 % num2 == 0){
        cout << num1 << " es divisible por " << num2;
    } else {
        cout << num1 << " no es divisible por " << num2;
    }
    return 0;
}