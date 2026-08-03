#include <iostream>

int main() {
    int original = 10;
    int &ref = original; // 'ref' é um apelido para 'original'

    ref = 20; // Modifica a referência, alterando o valor da variável original

    std::cout << "Original: " << original << "\n"; // Imprime 20
    std::cout << "Referencia: " << ref << "\n";     // Imprime 20

    return 0;
}