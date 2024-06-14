#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Ingresa cinco numeros:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }
    cout << "\nPosicion de cada numero:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "la posicion del numero" << numeros[i] << " es la: " << (i + 1) << endl;
    }

    return 0;
}