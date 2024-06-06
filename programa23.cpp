#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double num, total = 1;
    int potencia;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    std::cout << "Ingrese la potencia a la que lo quiere elevar: ";
    std::cin >> potencia;
    total = std::pow(num, potencia);
    std::cout << std::setprecision(2) << num << " elevado a la potencia " << potencia << " es igual a " << total;

    return 0;
}