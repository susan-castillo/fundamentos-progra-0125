#include <iostream>
using namespace std;

int main (){
    string colors[] = {"Rojo", "Amarillo", "Morado", "Azul"};
    cout << colors[2] << endl;

    //Tamanio del array
    int lenghtArray = sizeof(colors) / sizeof(string);

    //Recorrer un arreglo
    for(int i = 0; i < lenghtArray; i++ ){
        cout << colors[i] << endl;
    }

    //////////////////////////////////////////////////

    int n = 0;

    cout << "Cuantos nombres quieres ingresar? ";
    cin >> n;

    string names[n];

    for(int i = 0; i < n; i++){
        cout << "Color #" << i+1 << ": "; 
        cin >> names[i];
    }

    cout << "Los nombres ingresados son: " << endl;
    for(int i = 0; i < n; i++){
        cout << names[i] << endl;
    }

    //[3] filas
    //[2] Columnas
    int matriz[3][2] = {
        {1,3},
        {3,4},
        {1,2}
    };

    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            cout << matriz[i][j] << endl;
        }
    }                                     
    return 0;
}