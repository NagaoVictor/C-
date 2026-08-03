#include <iostream>
#include <string>

int main() {
    int idade;
    std::cout << "Digite sua idade: ";
    
    // Lê o valor digitado e armazena na variável 'idade'
    std::cin >> idade; 

    std::cout << "Voce tem " << idade << " anos.\n";
    return 0;
}