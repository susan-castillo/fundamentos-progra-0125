#include <iostream>
using namespace std;

struct coord{
    int coordenadaX;
    int coordenadaY;
};
struct temp{
    float temperatura;
    coord coordenadas;
};

int main(){
    temp arr[500];
    temp mayor, menor;
    int n;
    float suma = 0, temperaturaPromedio = 0;

    cout << "Medicion de temperaturas" << endl;
    cout << "Cuantos datos de temperatura seran: ";
    cin >> n;

    cout << "Digite las " << n << " temperatura" << endl;

    for(int i = 0; i < n; i++){
        cout << "Temperatura: ";
        cin >> arr[i].temperatura;
        cout << "x: ";
        cin >> arr[i].coordenadas.coordenadaX;
        cout << "y: ";
        cin >> arr[i].coordenadas.coordenadaY;
    }

    for(int i =0; i< n; i++){
        suma += arr[i].temperatura;
    }

    temperaturaPromedio = suma/ n;

    cout << "La temperatura  promedio es de: " << temperaturaPromedio << endl;

    mayor = arr[0];
    menor = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i].temperatura > mayor.temperatura){
            mayor = arr[i];
        }

        if(arr[i].temperatura < menor.temperatura){
            menor = arr[i];
        }
    }

    cout << "La mayor temperatura es: " << mayor.temperatura << " y se encuentra en: (" << mayor.coordenadas.coordenadaX << "," << mayor.coordenadas.coordenadaY << ")" << endl;
    cout << "La menor temperatura es: " << menor.temperatura << " y se encuentra en: (" << menor.coordenadas.coordenadaX << "," << menor.coordenadas.coordenadaY << ")" << endl;

    return 0;
}