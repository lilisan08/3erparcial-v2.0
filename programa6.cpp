#include <iostream>
using namespace std
int main() {
    int num;

    cout << "Ingresa el numero de tu carta: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "Tu carta es As.";
            break;
        case 10:
            cout << "Tu carta es Sota.";
            break;
        case 11:
            cout << "Tu carta es Caballo.";
            break;
        case 12:
            cout << "Tu carta es Rey.";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "Tu carta no es una figura ni tampoco As.";
            break;
        default:
            out << "Este no es un numero de una baraja española\n";
    }

    return 0;
}