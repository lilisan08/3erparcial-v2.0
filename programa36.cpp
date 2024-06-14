#include <iostream>
using namespace std;

int main() {
    int tam;
    cout << "Ingresa el tamaño del vector: ";
    cin >> tam;

    int vector[tam];
    cout << "Ingresa " << tam << " numeros:\n";
    for (int i = 0; i < tam; ++i) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vector[i];
    }
    int suma = 0;
    for (int i = 0; i < tam; ++i) {
        cout << "Posicion " << (i + 1) << ": " << vector[i] << endl;
        suma += vector[i];
    }
    cout << "La suma de los numeros del vector es: " << suma << endl;

    return 0;
}