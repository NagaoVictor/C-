#include <iostream>

// Função recursiva para calcular o Fatorial (ex: 5! = 5 * 4 * 3 * 2 * 1)
long long fatorial(int n) {
    // Caso Base (Condição de Parada)
    if (n <= 1) {
        return 1;
    }
    
    // Chamada recursiva
    return n * fatorial(n - 1);
}

int main() {
    int numero = 5;
    std::cout << "Fatorial de " << numero << " e: " << fatorial(numero) << "\n";
    return 0;
}