#include <iostream>
using namespace std;

#define precioe 70

int main() {
    int edad;
    float preciof;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    
    if (edad < 5) {
        preciof = precioe * 0.4;
    } else if (edad > 60) {
        preciof = precioe * 0.45;
    } else {
        preciof = precioe;
    }
    
    cout << "El precio de la entrada es de: " << preciof << " pesos";
    
    return 0;
}
