#include <iostream>
using namespace std;

bool numprimo(int nm) {
    if (nm <= 1) {
        return false;
    }
    for (int i = 2; i <= nm / 2; ++i) {
        if (nm % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int nm;

    cout << "Ingrese un número: ";
    cin >> nm;

    if (numprimo(numero)) {
        cout << "El número " << nm << " es un numero primo.";
    } else {
        cout << "El número " << nm << " no es un numero primo.";
    }

    return 0;
}