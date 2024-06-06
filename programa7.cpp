#include <iostream>

int main() {
    int a, b, l, al, bm, f;

    std::cout << "¿De qué figura quieres sacar el área?\n";
    std::cout << "1.- Calcular el área de un triángulo\n";
    std::cout << "2.- Calcular el área de un trapecio\n";
    std::cout << "3.- Calcular el área de un rectángulo\n";
    std::cin >> f;

    if (f == 1) {
        std::cout << "Ingresa la base de tu triángulo: ";
        std::cin >> b;
        std::cout << "Ingresa la altura del triángulo: ";
        std::cin >> al;
        a = (b * al) / 2;
        std::cout << "El área de tu triángulo es de: " << a;
    }
    else if (f == 2) {
        std::cout << "Ingresa la base mayor de tu trapecio: ";
        std::cin >> bm;
        std::cout << "Ingresa la base menor del trapecio: ";
        std::cin >> b;
        std::cout << "Ingresa la altura de tu trapecio: ";
        std::cin >> al;
        a = ((bm + b) * al) / 2;
        std::cout << "El área de tu trapecio es de: " << a;
    }
    else if (f == 3) {
        std::cout << "Ingresa la base de tu rectángulo: ";
        std::cin >> b;
        std::cout << "Ingresa la altura del rectángulo: ";
        std::cin >> al;
        a = b * al;
        std::cout << "El área de tu rectángulo es de: " << a;
    }

    return 0;
}