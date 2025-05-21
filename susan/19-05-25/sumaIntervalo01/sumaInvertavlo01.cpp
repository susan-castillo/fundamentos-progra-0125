#include <iostream>
using namespace std;

int main(){
    int a,b, cont, acum;
    cont = acum = a = b = 0;
    
    cout << "Digite a: ";
    cin >> a;
    cout << "Digite b: ";
    cin >> b;

    //USANDO FOR
    for(cont = a; cont <= b; cont = cont + 1){
        acum = acum + cont;
    }
    
    cout << "La suma es: " << acum << endl;
    return 0;

    //USANDO DO WHILE
    // cont = a;
    // acum = 0;

    //do{
    //    acum = acum + cont;
    //    cont = cont + 1;
    //}while(cont <= b);

    //return 0;
}