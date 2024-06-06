#include <iostream>

int main() {
    int num, sum = 0, cont = 0;
    
    do {
        std::cout << "Introduce un numero 0 para finalizar: ";
        std::cin >> num;
        
        if(num != 0) {
            std::cout << "Has introducido el numero: " << num;
            sum += num;
            cont++;
        }
    } while(num != 0);
    
    std::cout << "Se ha introducido el numero 0";
    std::cout << "La cantidad de numeros es de: " << cont;
    std::cout << "La suma de los numeros es: " << sum;
    
    return 0;
}