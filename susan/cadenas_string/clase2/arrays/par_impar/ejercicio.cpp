#include <iostream>
using namespace std;

int main (){
    int n = 0;
    int np = 0, ni = 0;
    cout << "Cuantos numeros quieres ingresar? ";
    cin >> n;

    int array[n];
    int pares[n];
    int impares[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el " << i+1 << " numero: ";
        cin >> array[i];
    }


    for (int i = 0; i < n; i++)
    {
        if(array[i] % 2 == 0){
            pares[np] = array[i];
            np++;
        }else{
            impares[ni] = array[i];
            ni++;
        }
        
    }

    cout << "El arreglo de pares es: " << endl;
    for (int i = 0; i < np; i++)
    {
        cout << pares[i] << endl;
    }

    cout << "El arreglo de impares es: " << endl;
    for (int i = 0; i < ni; i++){
        cout << impares[i] << endl;
    }
    
    
    return 0;
}