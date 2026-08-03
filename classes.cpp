#include <iostream>
#include <string>

// Definição da Classe
class Carro {
public:
    std::string marca;
    int ano;

    // Método dentro da classe
    void buzinar() {
        std::cout << "Biiiiii!\n";
    }
};

int main() {
    // Criando um objeto da classe Carro
    Carro meuCarro;
    meuCarro.marca = "Toyota";
    meuCarro.ano = 2024;

    std::cout << meuCarro.marca << " (" << meuCarro.ano << ")\n";
    meuCarro.buzinar();

    return 0;
}