#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // 1. Lambda simples armazenada em uma variável auto
    auto saudacao = []() {
        std::cout << "Ola de uma funcao lambda!\n";
    };
    saudacao();

    // 2. Lambda com parâmetros e retorno
    auto somar = [](int a, int b) {
        return a + b;
    };
    std::cout << "Soma via lambda: " << somar(3, 7) << "\n";

    // 3. Uso prático com std::for_each para iterar em um vetor
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    
    std::cout << "Elementos do vetor: ";
    std::for_each(numeros.begin(), numeros.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << "\n";

    return 0;
}