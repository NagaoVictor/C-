#include <iostream>

int main() {
    int contador = 1;

    while (contador <= 5) {
        std::cout << "Contador: " << contador << "\n";
        contador++; // Incrementa para evitar loop infinito
    }

    return 0;
}