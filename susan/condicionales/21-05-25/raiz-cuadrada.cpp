#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n, r1, r2 = 0, r = 10, dif; 

    cout << "Raiz cuadrada de un numero" << endl;
    cout << "Ingresa un numero: ";
    cin >> n;

    do{
        r2 = ((n/r) + r)/n;
        r1 = r;
        r = r2;
        dif = abs(r2 - r);
        if(dif >=0.001){
            r = dif;
        }

        cout << r1 << endl;
        cout << r2 << endl;
        
    } while(dif >= 0.001);

    return 0;
}