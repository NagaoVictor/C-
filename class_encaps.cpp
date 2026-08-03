#include <iostream>

class Termometro {
private:
    double temperatura; // Oculto do mundo exterior

public:
    // Setter (Modificador) com validação de segurança
    void setTemperatura(double t) {
        if (t >= -273.15) { // Zero absoluto
            temperatura = t;
        }
    }

    // Getter (Leitor)
    double getTemperatura() {
        return temperatura;
    }
};

int main() {
    Termometro t;
    t.setTemperatura(25.5);
    std::cout << "Temperatura atual: " << t.getTemperatura() << "°C\n";
    return 0;
}