#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string linea;
    ifstream archivo("datos.txt");
    cout << "El contenido del archivo es:" << endl;
    getline(archivo, linea, '\n');
    while(!archivo.eof()){
        cout << linea << endl;
        getline(archivo, linea, '\n');
    }
    archivo.close();
    return 0;
}