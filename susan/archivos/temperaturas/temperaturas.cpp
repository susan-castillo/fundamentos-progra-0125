#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Este programa lee un archivo de texto llamado "temperaturas.txt" y muestra su contenido línea por línea.
    // Declaración de variables
    float temperatura = 0;
    float suma = 0;
    float promedio = 0;
    float contador = 0;
    ifstream archivo("temperaturas.txt");

    cout << "Las temperaturas almacenadas son:" << endl;

    while(!archivo.eof()){
        archivo >> temperatura;
        suma += temperatura; // Sumar la temperatura leída
        // Mostrar la temperatura leída
        cout << "Temperatura: " << temperatura << endl;
        // Incrementar el contador de temperaturas
        contador++; 
    }

    archivo.close();

    // Calcular el promedio de las temperaturas
    cout << "Suma: " << suma << endl;
    promedio = suma / contador; 
    cout << "El promedio de las temperaturas es: " << promedio << endl;


    return 0;
}