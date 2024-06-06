#include <iostream>
using namespace std
int main() {
    
    int numeros[5]; 
    int menor, mayor;
    bool rep = false;

  
    cout << "Ingresa 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

 
    menor = mayor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        } else if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

   
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numeros[i] == numeros[j]) {
                rep = true;
                cout << "el numero repetido es: " << numeros[i];
                break;
            }
        }
    }


    cout << "El número menor es: " << menor;
    cout << "El número mayor es: " << mayor;

    if (hayRepetidos) {
        cout << "Hay números repetidos.";
    } else {
        cout << "No hay números repetidos.";
    }

    return 0;
}