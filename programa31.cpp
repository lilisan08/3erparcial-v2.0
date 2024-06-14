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

    cout << "Para terminar, introduce la cantidad de 0 \n\n";
    cout << "Muy bien, ingresa la cantidad de tus artículos vendidos: ";
    cin >> pro;
    
    while (pro != 0) {
        cout << "¿De qué precio fueron? $";
        cin >> cant;
        if (pro < 0 || cant < 0) {
            cout << "Lo siento, tus cantidades son negativas. Ingresa otra cantidad.\n\n";
        } else {
            float imp = TOTAL(pro, cant);
            importe += imp;
        }
        cout << "\nCantidad: ";
        cin >> pro;
    }
    
    cout << "Tu total de los productos es de $" << importe << " pesos." << "\n";;

    return 0;
}