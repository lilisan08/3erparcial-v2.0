#include <iostream>
#include <vector>

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;
    std::vector<std::vector<int>> matriz(filas, std::vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el valor para la fila " << i + 1 << " y columna " << j + 1 << ": ";
            std::cin >> matriz[i][j];
        }
    }
    std::cout << "La matriz ingresada es:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}