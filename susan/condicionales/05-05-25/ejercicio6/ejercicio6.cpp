#include <iostream>
using namespace std;

int main(){
    int a, b, c =0;
    cout << "IDENTIFICA SI EL NUMERO INGRESADO EL INTERVALO DE NUMEROS DADOS:";
    cout << "Ingresa desde donde comenzara tu intervalo de numeros: ";
    cin >> a;
    cout << "Ingresa donde terminara tu intervalo de numeros: ";
    cin >> b; 

    cout << "Ingresa un numero: ";
    cin >> c;

    if(c > a && c < b){
        cout << "Intervalo: [" << a << " , " << b << "]" << endl;
        cout << c << " se encuentra dentro de este invervalo";
    }else{
          cout << "Intervalo: [" << a << " , " << b << "]" << endl;
        cout << c << " no se encuentra dentro de este invervalo";
    } 
    return 0;
}