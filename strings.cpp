#include <iostream>
#include <string>

int main() {
    std::string nome = "Victor";
    std::string sobrenome = "Systems";

    // Concatenação (junção) de strings
    std::string nomeCompleto = nome + " " + sobrenome;

    // Tamanho da string
    std::cout << "Tamanho: " << nomeCompleto.length() << "\n";
    
    // Acesso a caractere específico
    std::cout << "Primeira letra: " << nomeCompleto[0] << "\n";
    
    return 0;
}