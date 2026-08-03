#include <iostream>

class Retangulo {
public:
    double largura;
    double altura;

    // Declaração do método (definição fora da classe)
    double calcularArea();
};

// Definindo o método fora da classe usando '::'
double Retangulo::calcularArea() {
    return largura * altura;
}

int main() {
    Retangulo r;
    r.largura = 5.0;
    r.altura = 3.0;

    std::cout << "Area: " << r.calcularArea() << "\n";
    return 0;
}