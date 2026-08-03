#include <iostream>
#include <fstream>
#include <string>

int main() {
    // 1. Escrevendo em um arquivo
    std::ofstream arquivoSaida("sistema.txt");
    arquivoSaida << "Log de inicializacao do sistema: OK\n";
    arquivoSaida.close(); // Fecha o arquivo para liberar recursos

    // 2. Lendo de um arquivo
    std::ifstream arquivoEntrada("sistema.txt");
    std::string linha;
    
    if (arquivoEntrada.is_open()) {
        while (std::getline(arquivoEntrada, linha)) {
            std::cout << "Lido do arquivo: " << linha << "\n";
        }
        arquivoEntrada.close();
    }

    return 0;
}