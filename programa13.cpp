#include <iostream>

int main() {
    int x;

    std::cout << "Ingresa un número: ";
    std::cin >> x;

    if (x % 2 == 0) {
        std::cout << "El número " << x << " es par";
    } else {
        std::cout << "El número " << x << " no es par";
    }

    if (x % 3 == 0) {
        std::cout << "El número " << x << " es divisible de 3";
    } else {
        std::cout << "El número " << x << " no es divisible de 3";
    }

    return 0;
}