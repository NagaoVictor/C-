#include <iostream>
#include <chrono>
#include <thread>

int main() {
    // Marcando o tempo de início de uma operação
    auto inicio = std::chrono::high_resolution_clock::now();

    // Simulando uma tarefa (pausa de 500 milissegundos)
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // Marcando o tempo final
    auto fim = std::chrono::high_resolution_clock::now();

    // Calculando a duração em milissegundos
    auto duracao = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio).count();

    std::cout << "Tempo de execucao: " << duracao << " ms\n";

    return 0;
}