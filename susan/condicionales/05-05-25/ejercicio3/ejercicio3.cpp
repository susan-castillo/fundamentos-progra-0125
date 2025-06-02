#include <iostream>
using namespace std;

//Ejercicio3:
int main(){

    int number = 0;
    cout << "Ingresa un numero entero: ";
    cin >> number;

    if(number % 5 == 0 && number % 3 == 0){
        cout << number << " es divisible entre 3 y 5";
    }else{
        cout << number << " no es divible entre 5 o 3";
    }

    return 0;
}