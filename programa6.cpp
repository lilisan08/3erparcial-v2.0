#include <iostream>

int main() {
    int num;

    std::cout << "Ingresa el número de tu carta: ";
    std::cin >> num;

    if (num == 1) {
        std::cout << "Tu carta es As.";
    } else if (num == 10) {
        std::cout << "Tu carta es Sota.";
    } else if (num == 11) {
        std::cout << "Tu carta es Caballo.";
    } else if (num == 12) {
        std::cout << "Tu carta es Rey.";
    } else if (num >= 2 && num <= 9) {
        std::cout << "Tu carta no es una figura ni tampoco As.";
    } else if (num > 12) {
        std::cout << "Este número no está en la baraja española.";
    }

    return 0;
}