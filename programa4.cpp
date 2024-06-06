#include <iostream>

int main() {
    char l;
    std::cout << "ingresa una letra: ";
    std::cin >> l;
    if (l == 'a' || l == 'A') {
        std::cout << "La letra ingresada es una vocal: " << l;
    } else if (l == 'e' || l == 'E') {
        std::cout << "La letra ingresada es una vocal: " << l;
    } else if (l == 'i' || l == 'I') {
        std::cout << "La letra ingresada es una vocal: " << l;
    } else if (l == 'o' || l == 'O') {
        std::cout << "La letra ingresada es una vocal: " << l;
    } else if (l == 'u' || l == 'U') {
        std::cout << "La letra ingresada es una vocal: " << l;
    }
    return 0;
}