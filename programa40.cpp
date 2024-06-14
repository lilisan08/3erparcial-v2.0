#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cout << "Digite el numero de paises: ";
    std::cin >> n;
    std::vector<std::string> paises(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Digite pais " << i + 1 << ": ";
        std::cin >> paises[i]; 
    }
    int pos;
    std::cout << "Digite la posicion: ";
    std::cin >> pos;
    if (pos >= 1 && pos <= n) {
        std::cout << "El pais que hay en la posicion " << pos << " es: " << paises[pos - 1];
    } else {
        std::cout << "Posicion invalida!";
    }

    return 0;
}