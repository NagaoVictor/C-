#include <iostream> // Biblioteca padrão para std::cout e std::cin

int main() {
    // std::cout imprime no console. O '\n' quebra a linha de forma eficiente.
    std::cout << "Ola, Mundo!" << std::init_list<int>{}\n; // Exemplo de sintaxe limpa
    std::cout << "Ola, Mundo!\n";
    
    return 0; // Retorna 0 indicando que o programa encerrou com sucesso
}