#include <iostream>

int encontrarMayor(int numeros[10], int longitud) {
    int mayor = numeros[0];
    for (int i = 1; i < longitud; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

int encontrarMenor(int numeros[10], int longitud) {
    int menor = numeros[0];
    for (int i = 1; i < longitud; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}

int calcularSuma(int numeros[10], int longitud) {
    int suma = 0;
    for (int i = 0; i < longitud; i++) {
        suma += numeros[i];
    }
    return suma;
}

int main() {
    int numeros[10];

    std::cout << "Ingresa 10 números positivos:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
        while (numeros[i] <= 0) {
            std::cout << "Ingresa un número positivo: ";
            std::cin >> numeros[i];
        }
    }

    std::cout << "El mayor número es: " << encontrarMayor(numeros, 10);
    std::cout << "El menor número es: " << encontrarMenor(numeros, 10);
    std::cout << "La suma de todos los números es: " << calcularSuma(numeros, 10);

    return 0;
}
