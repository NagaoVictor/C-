#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Pula o número 3 (não imprime)
        }
        if (i == 5) {
            break;    // Para o loop totalmente ao chegar no 5
        }
        std::cout << "i = " << i << "\n";
    }
    return 0;
}