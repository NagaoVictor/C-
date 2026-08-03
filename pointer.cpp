#include <iostream>

int main() {
    int valor = 42;
    int *ptr = &valor; // 'ptr' guarda o endereço de memória de 'valor'

    std::cout << "Valor da variavel: " << valor << "\n";
    std::cout << "Endereco de memoria: " << &valor << "\n";
    std::cout << "Valor armazenado no ponteiro: " << ptr << "\n";
    
    // Acessando o valor através do ponteiro (Desreferenciação)
    std::cout << "Valor via ponteiro (*ptr): " << *ptr << "\n";

    // Alterando o valor original através do ponteiro
    *ptr = 100;
    std::cout << "Novo valor de 'valor': " << valor << "\n";

    return 0;
}