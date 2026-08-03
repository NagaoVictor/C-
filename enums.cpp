#include <iostream>

// Definindo um enum para os estados de um robô
enum EstadoRobo {
    PARADO,   // Valor padrão: 0
    ANDANDO,  // Valor padrão: 1
    GIRANDO,  // Valor padrão: 2
    ERRO = 99 // Atribuição explícita
};

int main() {
    EstadoRobo estadoAtual = ANDANDO;

    if (estadoAtual == ANDANDO) {
        std::cout << "O robo esta em movimento.\n";
    }

    std::cout << "Codigo numerico do estado: " << estadoAtual << "\n";
    return 0;
}