#include <iostream>
using namespace std;

int main() {
  int mat[50][50];
  int sumas[50];
  int i, j;
  int cols, rows;
  /*     int acum; */

  cout << "LLENAR UNA MATRIZ" << endl;
  cout << "Cuantas filas tendra: ";
  cin >> rows;

  cout << "Cuantas columnas tendra: ";
  cin >> cols;

  cout << "Digite los datos de la matriz: " << endl;
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      cout << "mat[" << i << ", " << j << "]: ";
      cin >> mat[i][j];
    }
  }

  cout << "Los datos de la matriz son: " << endl;
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  /*   acum = 0; */
  for (i = 0; i < rows; i++) {
    sumas[i] = 0;
    for (j = 0; j < cols; j++) {
      /* acum = acum + mat[i][j]; */
      sumas[i] = sumas[i] + mat[i][j];
    }
  }

  cout << "Las sumas de cada fila son: " << endl;
  for (i = 0; i < rows; i++) {
    cout << sumas[i] << endl;
  }

  /* cout << "La suma es: " << acum ; */
}