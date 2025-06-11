#include <iostream>
using namespace std;

int main (){
    int n = 0;
    int np = 0;
    cout << "Cuantos numeros quieres ingresar? ";
    cin >> n;

    int array[n];
    int primos[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el " << i+1 << " numero: ";
        cin >> array[i];
    }


    for (int i = 0; i < n; i++)
    {
        if(array[i] % 2 == 0 && ){
            primos[np] = array[i];
            np++;
        }else{
            cout << i << " no es primo" << endl;
        }
        
    }

    cout << "El arreglo de numero primos es: " << endl;
    for (int i = 0; i < np; i++)
    {
        cout << primos[i] << endl;
    }
    
    return 0;
}