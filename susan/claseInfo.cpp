// Importación de la libreria.
#include <iostream>

//Declaramados std para evitar ponerlo siempre al principio de cin o cout.
using namespace std;

int main(){
    //Declaración de variables, se inicializan en cero
    int number1 = 0, 
        number2 = 0, 
        suma = 0;

    //Entrada de datos
    cout << "Ingresa el primer numero: ";
    cin >>  number1;
    if(number1 <= 0){
        cout << "Por favor ingresa un numero mayor a cero \n";
        return 0;
    }else{
        cout << "Ingresa el segundo numero: ";
        cin >>  number2;
        if(number2 <= 0){
            cout << "Por favor ingresa un numero mayor a cero \n";
            return 0;
        }
    }

    //Suma de datos de ingreso
    suma = number1 + number2;

    //Salida de datos
    //Diferencia entre \n y endl (Es mas recomendable hacer salto de linea normal que con endl)
    cout << number1 << " y " << number2 << "\n";
    cout << "Suma: " << suma; 
    
    //Finaliza el programa
    return 0;
}