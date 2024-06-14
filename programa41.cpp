#include <iostream>

int main() {
    int matriz[2][2] = {{10, 20}, {30, 40}};
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "matriz[" << i + 1 << "][" << j + 1 << "]=" << matriz[i][j] << ";" << std::endl;
        }
    }
    std::cout << "Dato en la fila 1, columna 1: " << matriz[0][0] << std::endl;

    return 0;
}