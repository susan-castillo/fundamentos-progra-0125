#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "spanish");

    //Declaración de variables
    float b, h, a = 0;

    //Entrada de datos
    //Solicitamos la base
    cout << "Ingresa la base del triángulo: \n";
    cin >> b;
    //Solicitamos la altura
    cout << "Ingresa la altura del triaángulo: \n";
    cin >> h;
    
    // Se calcula el area y se asigna en la variable a (area)
    a = b * h /2;

    //Salida de resultado
    cout << "El área del triángulo es: " << a;

    //Se finaliza el programa
    return 0;
}