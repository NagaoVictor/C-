#include <iostream>

// Função para somar dois inteiros
int somar(int a, int b) {
    return a + b;
}

// Sobrecarga para somar três inteiros
int somar(int a, int b, int c) {
    return a + b + c;
}

// Sobrecarga para somar números de ponto flutuante (double)
double somar(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Soma 2 ints: " << somar(5, 10) << "\n";
    std::cout << "Soma 3 ints: " << somar(1, 2, 3) << "\n";
    std::cout << "Soma doubles: " << somar(5.5, 4.2) << "\n";

    return 0;
}