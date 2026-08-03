#include <iostream>

class Caixa {
private:
    double largura;

public:
    Caixa(double l) : largura(l) {}

    // Declarando uma função externa como amiga
    friend void imprimirLargura(Caixa c);
};

// Função externa que não é membro da classe, mas é 'friend'
void imprimirLargura(Caixa c) {
    // Consegue acessar o membro privado 'largura' diretamente
    std::cout << "Largura da caixa: " << c.largura << "\n";
}

int main() {
    Caixa minhaCaixa(15.5);
    imprimirLargura(minhaCaixa);
    return 0;
}