#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa el número de términos que deseas mostrar: ";
    cin >> num;
    cout << "Los números son:";
    for (int i = 1; i <= num; i++) {
        cout << " " << i * 5;
    }
    return 0;
}

