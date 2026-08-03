#include <iostream>

// Declaração e definição da função
// Tipo de retorno, Nome da função, Parâmetros entre parênteses
void saudar(std::string nome) {
    std::cout << "Ola, " << nome << "!\n";
}

int main() {
    saudar("Victor"); // Chamada da função
    return 0;
}