#include <iostream>
using namespace std;

int main() {
    int num_posiciones;
    cout << "Ingrese el numero de posiciones: ";
    cin >> num_posiciones;

    int numeros[num_posiciones];
    cout << "Ingrese " << num_posiciones << " numeros:\n";
    for (int i = 0; i < num_posiciones; ++i) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }
    cout << "\nNumeros ingresados:\n";
    for (int i = 0; i < num_posiciones; ++i) {
        cout << numeros[i] << " ";
    }
    return 0;
}