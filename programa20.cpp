#include <iostream>

int main() {
    int i = 100;

    do {
        std::cout << i;
        i--;
    } while (i >= 1);

    return 0;
}
