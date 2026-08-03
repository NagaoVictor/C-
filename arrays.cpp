#include <iostream>

int main() {
    // Declaração e inicialização de um array de 4 inteiros
    int notas[4] = {8, 9, 7, 10};

    // O primeiro elemento está no índice 0
    std::cout << "Primeira nota: " << notas[0] << "\n";

    // Modificando um valor
    notas[0] = 10;

    // Tamanho em bytes dividido pelo tamanho do tipo = quantidade de elementos
    int tamanho = sizeof(notas) / sizeof(notas[0]);
    std::cout << "Total de elementos: " << tamanho << "\n";

    return 0;
}