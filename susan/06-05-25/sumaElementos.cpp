#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers;
    int number = 0;
    bool answer;
    int sum = 0;

    start:
     cout << "Ingrese un numero: ";
     cin >> number;
     numbers.push_back(number);

     cout << "Quieres ingresar otro numero: (Si = 1 y No = 0): ";
     cin >> answer;

     if(answer){
        goto start;
     }else{
        for(int i = 0; i < numbers.size(); i++){
            cout << numbers[i] << ",";
            sum += numbers[i];
        }

        cout << "\nSuma: " << sum;
     }   

    return 0;
}