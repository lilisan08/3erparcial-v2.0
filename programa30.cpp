#include <iostream>
#include <cstring>

int main() {
    char n[20];
    char contra[20];
    int precioUnitario, cantidad;
    int intentos = 3;
    int total = 0;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> n;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> contra;

        if (strcmp(n, "lilian") == 0 && strcmp(contra, "2b38") == 0) {
            std::cout << "Bienvenido al sistema.\n"; 
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.\n";
            } else {
                std::cout << "Se ha superado el número de intentos permitido.\n";
                break;
            }
        }
    } while (intentos > 0);

    std::cout << "Para terminar, introduce la cantidad de 0 \n\n";
    while (true) {
        std::cout << "Ingresa la cantidad de los artículos: ";
        std::cin >> cantidad;
        if (cantidad == 0) {
            break;
        }
        std::cout << "Ingresa el precio unitario del artículo: ";
        std::cin >> precioUnitario;
        if (cantidad < 0 || precioUnitario < 0) {
            std::cout << "Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n\n";
        } else {
            total += cantidad * precioUnitario;
        }
    }
    std::cout << "Tu total de los productos es de " << total << " pesos\n";

    return 0;
}
