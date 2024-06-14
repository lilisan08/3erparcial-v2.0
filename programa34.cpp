#include <iostream>
#include <vector>

int main() {
    int ta;
    std::cout << "Digite el tamaño del arreglo: ";
    std::cin >> ta;
    std::vector<int> num(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Digite un numero para la posicion " << i + 1 << ": ";
        std::cin >> num[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cout << "El dato en la posicion " << i + 1 << " es: " << num[i];
    }

    return 0;
}