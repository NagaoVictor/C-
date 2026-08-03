#include <iostream>

// Template de função para encontrar o maior entre dois valores
template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Maior int: " << maior(10, 20) << "\n";       // Funciona com int
    std::cout << "Maior double: " << maior(5.5, 3.2) << "\n";   // Funciona com double
    std::cout << "Maior char: " << maior('a', 'z') << "\n";     // Funciona com char

    return 0;
}