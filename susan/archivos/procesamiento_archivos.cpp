#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream archivo("archivo.txt", ios::app);

    archivo << "Primera linea" << endl;
    archivo << "Primera linea" << endl;
    archivo.close();
    return 0;
}