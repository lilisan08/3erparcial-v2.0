#include <iostream>
#include <cstring>

int main() {
    char nom[20];
    char cont[20];
    int pro, cant;
    int intentos = 3;
    int res;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> nom;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> cont;

        if (strcmp(nom, "Lilian") == 0 && strcmp(cont, "2b38") == 0) {
            std::cout << "Bienvenido al sistema.\n ";
        
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
    return 0;
}
