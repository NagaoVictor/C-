#include <iostream>

class Dispositivo {
public:
    // 'virtual' permite que o método seja sobrescrito dinamicamente
    virtual void ligar() {
        std::cout << "Ligando dispositivo generico...\n";
    }
};

class Motor : public Dispositivo {
public:
    void ligar() override { // 'override' indica sobrescrita explícita
        std::cout << "Ligando motor rotacional!\n";
    }
};

int main() {
    Dispositivo *d = new Motor();
    d->ligar(); // Chama a versão da classe Motor graças ao polimorfismo
    
    delete d;
    return 0;
}