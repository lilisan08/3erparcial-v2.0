#include <iostream>

int main() {
    int num[5];
    int i, menor;
    
    std::cout << "Ingrese 5 numeros:";
    for (i = 0; i < 5; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> num[i];
    }
    
    menor = num[0];
    for (i = 1; i < 5; i++) {
        if (num[i] < menor) {
            menor = num[i];
        }
    }
    std::cout << "El menor de los numeros es: " << menor;
    
    return 0;
}