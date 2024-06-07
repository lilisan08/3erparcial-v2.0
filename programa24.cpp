#include <iostream>
#include <iomanip>
using namespace std;

double calcularPotencia(double base, int exponente) {
    double resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    double num, total = 1;
    int potencia;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese la potencia a la que lo quiere elevar: ";
    cin >> potencia;
    total = calcularPotencia(num, potencia);
    cout << fixed << setprecision(2) << num << " elevado a la potencia " << potencia << " es igual a " << total;

    return 0;
}
