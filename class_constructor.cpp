#include <iostream>
#include <string>

class Usuario {
public:
    std::string nome;
    int id;

    // Construtor com parâmetros
    Usuario(std::string nomeUsuario, int idUsuario) {
        nome = nomeUsuario;
        id = idUsuario;
        std::cout << "Construtor chamado para: " << nome << "\n";
    }
};

int main() {
    // O construtor inicializa os dados na hora da instanciação
    Usuario u1("Victor", 42);

    return 0;
}