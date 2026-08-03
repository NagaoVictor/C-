#include <iostream>
#include <string>

// Classe Base (Pai)
class Animal {
public:
    void comer() {
        std::cout << "Este animal esta comendo.\n";
    }
};

// Classe Derivada (Filha) herda publicamente de Animal
class Cachorro : public Animal {
public:
    void latir() {
        std::cout << "Au Au!\n";
    }
};

int main() {
    Cachorro meuCachorro;
    meuCachorro.comer(); // Herdado da classe Animal
    meuCachorro.latir(); // Próprio da classe Cachorro
    return 0;
}