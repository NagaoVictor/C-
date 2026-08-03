#include <iostream>
#include <string>

// Definindo a struct
struct Sensor {
    int id;
    double leitura;
    bool ativo;
};

int main() {
    // Criando e inicializando uma variável do tipo Sensor
    Sensor meuSensor = {101, 23.5, true};

    // Acessando os membros usando o operador ponto (.)
    std::cout << "Sensor ID: " << meuSensor.id << "\n";
    std::cout << "Leitura: " << meuSensor.leitura << "°C\n";

    return 0;
}