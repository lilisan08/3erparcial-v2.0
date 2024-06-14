#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el número para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "La suma de las columnas es: " << endl;
    for (int j = 0; j < columnas; j++) {
        int suma_columna = 0;
        for (int i = 0; i < filas; i++) {
            suma_columna += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << suma_columna << endl;
    }
    return 0;
}