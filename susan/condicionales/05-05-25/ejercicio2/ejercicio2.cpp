#include <iostream>
using namespace std;

//Ejercicio 2:
int main(){
    int num1, num2 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(num1 < num2){
        cout << "El numero menor es: " << num1 << endl;
        if(num1 % num2 == 0){
            cout << num1 << " es divisible por " << num2;
        }else{
            cout << num1 << " no es divisible por " << num2;
        }
    }else{
        cout << "El numero menor es: " << num2 << endl;
        if(num2 % num1 == 0){
            cout << num2 << " es divisible por " << num1;
        }else{
            cout << num2 << " no es divisible por " << num1;
        }
    }
    return 0;
}