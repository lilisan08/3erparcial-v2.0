#include <iostream>
using namespace std
int main() {
    int hr, sal, extra, total;

    cout <<  "ingrese la cantidad de horas trabajadas durante la semana:";
    cin >> hr;

    cout << "Ingresa la cantidad de su salario por hora: ";
    cin >> sal;

    if (hr <= 40) {
        total = sal * hr;
        cout << "El pago total es de " << total;
    } 
    else if (hr <= 50) {
        extra = sal * 1.5;
        total = (40 * salario) + ((horas - 40) * extra);
        cout << "El pago total es de " << total;
    } 
    else {
        extra = salario * 2;
        total = (40 * sal) + (10 * sal * 1.5) + ((hr - 50) * extra);
        cout << "El pago total es de : " << total;
    }

    return 0;
}