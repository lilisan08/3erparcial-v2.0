#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " es menor que " << num2 << endl;
    } else {
        cout << "Ambos numeros son iguales" << endl;
    }

    return 0;
}