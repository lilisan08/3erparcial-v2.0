#include <iostream>
using namespace std
int main() {
    int n1, n2, n3;
    
    cout << "Ingrese 3 numeros: ";
    cin >> n1 >> n2 >> n3;
    
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    cout << "Los numeros ordenados de menor a mayor: " << n1 << " " << n2 << " " << n3;

    return 0;
}