#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 1; i <= 10; ++i) {
        int numero = rand() % 100 + 1;
        cout << "El número en la posición " << i << " es " << numero << endl;
    }

    return 0;
}