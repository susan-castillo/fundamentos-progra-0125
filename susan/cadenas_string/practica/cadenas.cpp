#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char universidad [3] = {'U', 'C', 'A'};
    char name [] = {"Susan"};
    char lastname[] = {"Castillo"};
    string name2 = "Susan Abigail";
    
    cout << universidad[0] << endl;
    //Unir cadenas
    cout << strcat(name, lastname) << endl;

    //Longitud de una cadena
    int longitud = 0;
    longitud = strlen(lastname);
    cout << longitud << endl;

    //Copiar el contenido de una cadena a otra
    strcpy(name, lastname);
    cout << name << endl;

    //Comparar cadenas
    if (strcmp(name, lastname) == 0){
        cout << "Cadenas iguales" << endl;
    } else
    {
        cout << "No son cadenas iguales" << endl;
    }

    //Invierte cadenas
    cout << strrev(name) << endl;

    //Pasar a mayusculas
    cout << strupr(name) << endl;

    //Pasar a minusculas
    cout << strlwr(name) << endl;


    ///////////////////////////////////////////

    //Con cadenas de tipo char
    char nombre[50];
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;
    //Ignora el salto de linea guardado en el buffer.
    cin.ignore();
    cout << "Ingrese su nombre completo: ";
    cin.getline(nombre, 50, '\n');

    cout << "Nombre: " << nombre << endl;    
    cout << "Edad: " << edad << endl;


    /////////////////////////////////////////////////////////////////////

    //Con cadenas de tipo string
    string pais = "El Salvador";
    string municipio = "Mejicanos";

    //Concatenacion
    string information = pais + ", " + municipio;

    cout << information << endl;

    //Tamanio de la cadena
    cout << pais.length() << endl;

    //Acceder a una posicion
    cout << pais[3] << endl;

    //Obtener entrada de texto
    string comment;

    cout << "Escribenos tu comentario: ";
    getline(cin, comment);

    cout << comment;

    return 0;
}