#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cout << "Ingrese el numero de posiciones: ";
    cin >> t;
    vector<int> numeros(t);
    int positivos = 0, negativos = 0;
    for (int i = 0; i < t; ++i) {
        cout << "Ingrese el numero en la posición " << (i + 1) << ": ";
        cin >> numeros[i];
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }
    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    return 0;
}