#include <iostream>
using namespace std;

int main(){
    int n = 12;
    int temp = 0;
    int array[] = {23, 13, 3, 43, 11, 1, 2, 3, 4, 13, 54, 56 };

    for(int i = 0; i < n -1; i++){
        for (int j = n-1; j > i; j--)
        {
            if(array[j] > array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }

    cout << "El arreglo ordenado es: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}