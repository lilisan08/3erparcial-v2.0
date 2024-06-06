#include <iostream>

int main() {
    int num;
    std::cout << "Ingresa el número de términos que deseas mostrar: ";
    std::cin >> num;
    std::cout << "Los números son:";
    for (int i = 1; i <= num; i++) {
        std::cout << i * 5;
    }
    return 0;
}
