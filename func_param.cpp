#include <iostream>

// 1. Passagem por Valor (cria uma cópia da variável)
void somarDez(int x) {
    x += 10;
}

// 2. Passagem por Referência (modifica a variável original sem copiar)
void dobrarValor(int &x) {
    x *= 2;
}

// 3. Parâmetro com valor padrão (default argument)
void configurarPorta(int porta = 8080) {
    std::cout << "Porta configurada: " << porta << "\n";
}

int main() {
    int num = 5;
    
    somarDez(num);
    std::cout << "Apos por valor: " << num << " (continua 5)\n";

    dobrarValor(num);
    std::cout << "Apos por referencia: " << num << " (agora 10)\n";

    configurarPorta();     usa o valor padrão (8080)
    configurarPorta(3000); // Usa o valor personalizado (3000)

    return 0;
}