#include <iostream>

int main() {
    int hora;
    std::cout << "Escribe la hora del día: ";
    std::cin >> hora;
    
    if (hora < 12) {
        std::cout << "Buenos días";
    } else if (hora < 19) {
        std::cout << "Buenas tardes";
    } else {
        std::cout << "Buenas noches";
    }
    
    return 0;
}
