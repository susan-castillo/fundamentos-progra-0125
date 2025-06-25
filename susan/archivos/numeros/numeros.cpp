#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int dato;
    ifstream archivo("misNumeros.txt");
    ifstream positivos("positivos.txt");
    ifstream negativos("negativos.txt");

    cout << "Las temperaturas almacenadas son:" << endl;

    while (!archivo.eof())
    {
        if (dato >= 0)
        { // Verificar si el dato es positivo
            positivos << dato << endl;
        }
        else
        { // Verificar si el dato es negativo
            negativos >> dato << endl;
        }
    }

    archivo.close();
    positivos.close();
    negativos.close();

    // Ahora leeremos los números positivos y negativos de los archivos creados
    ifstream pos("positivos.txt");
    ifstream neg("negativos.txt");

    cout << "Los números positivos son:" << endl;
    pos >> dato;

    while (!pos.eof()) {
        cout << dato << endl;
        pos >> dato;
    }
        

    cout << "Los números negativos son:" << endl;
    neg >> dato;

    while (!neg.eof()) {
        cout << dato << endl;
        neg >> dato;
    }
        

    pos.close();
    neg.close();

    return 0;
}