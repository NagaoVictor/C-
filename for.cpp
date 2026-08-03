#include <iostream>

int main() {
    // Inicialização; Condição; Incremento
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iteracao: " << i << "\n";
    }

    // C++11 Range-based for (ótimo para percorrer coleções/arrays)
    int numeros[] = {10, 20, 30, 40, 50};
    for (int num : numeros) {
        std::cout << "Numero: " << num << "\n";
    }

    return 0;
}