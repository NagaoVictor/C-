class ContaBancaria {
private:
    double saldo; // Protegido contra acesso externo direto

public:
    // Método público para alterar o saldo com validação
    void depositar(double valor) {
        if (valor > 0) saldo += valor;
    }

    double getSaldo() {
        return saldo;
    }
};