#include <iostream>

int globalVar = 100; // Variável global

void testeEscopo() {
    int localVar = 50; // Variável local da função
    std::cout << "Dentro da funcao - Global: " << globalVar << ", Local: " << localVar << "\n";
}

int main() {
    testeEscopo();
    // std::cout << localVar; // Erro! localVar não existe fora da função.
    return 0;
}