#include <iostream>
using namespace std;

int main() {
    int vec1, vec2;
    cout << "Ingrese el tamaño del primer vector: ";
    cin >> vec1;
    cout << "Ingrese el tamaño del segundo vector: ";
    cin >> vec2;
    int vector1[vec1];
    int vector2[vec2];
    cout << "Ingrese " << vec1 << " números para el primer vector:\n";
    for (int i = 0; i < vec1; ++i) {
        cout << "Número en la posición " << i << ": ";
        cin >> vector1[i];
    }
    cout << "Ingrese " << vec2 << " números para el segundo vector:\n";
    for (int i = 0; i < vec2; ++i) {
        cout << "Número en la posición " << i << ": ";
        cin >> vector2[i];
    }
    cout << "\nElementos de los vectores y suma de las posiciones:\n";
    int suma = 0;
    for (int i = 0; i < max(vec1, vec2); ++i) {
        if (i < vec1) {
            cout << "Primer vector en la posición " << i << ": " << vector1[i] << endl;
            suma += vector1[i];
        }
        if (i < vec2) {
            cout << "Segundo vector en la posición " << i << ": " << vector2[i] << endl;
            suma += vector2[i];
        }
    }
    cout << "La suma de las posiciones de ambos vectores es: " << suma << endl;
    return 0;
}