#include <iostream>
using namespace std;

int main() {
    int a, b, l, al, bm, f;

    cout << "¿De qué figura quieres sacar el área?\n";
    cout << "1.- Calcular el área de un triángulo\n";
    cout << "2.- Calcular el área de un trapecio\n";
    cout << "3.- Calcular el área de un rectángulo\n";
    cin >> f;

    switch (f) {
        case 1:
            cout << "Ingresa la base de tu triángulo: ";
            cin >> b;
            cout << "Ingresa la altura del triángulo: ";
            cin >> al;
            a = (b * al) / 2;
            cout << "El área de tu triángulo es de: " << a;
            break;
        case 2:
            cout << "Ingresa la base mayor de tu trapecio: ";
            cin >> bm;
            cout << "Ingresa la base menor del trapecio: ";
            cin >> b;
            cout << "Ingresa la altura de tu trapecio: ";
            cin >> al;
            a = ((bm + b) * al) / 2;
            cout << "El área de tu trapecio es de: " << a;
            break;
        case 3:
            cout << "Ingresa la base de tu rectángulo: ";
            cin >> b;
            cout << "Ingresa la altura del rectángulo: ";
            cin >> al;
            a = b * al;
            cout << "El área de tu rectángulo es de: " << a;
            break;
        default:
            cout << "Opción no válida";
            break;
    }

    return 0;
}
