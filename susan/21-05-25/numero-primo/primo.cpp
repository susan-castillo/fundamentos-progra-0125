#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i = 2;
    bool esPrimo = true;

    cout << "DETERMINAR SI UN NUMERO ES PRIMO: " << endl;
    cout << "Digite un numero: ";
    cin >> n;

    if(n <= 0){
        cout << "No hay primos negativos" << endl;
    }else{
        //Cambio de variables (int) sqrt(n) -- Se cambia de double a int.
        while (i <= (int) sqrt(n) && esPrimo == true){
            if(n % i == 0){
                esPrimo = false;
                i = i +1;
            }
        }
        if(esPrimo){
            cout << n << " es primo";
        }else{
            cout << n << " no es numero primo";
        }

    }
    return 0;
}