#include <iostream>
#include "domain/conta-poupanca.hpp"

ContaPoupanca::ContaPoupanca()
{
    this->rendimento = 0.05;
}

void ContaPoupanca::depositar(float valor)
{
    float saldo = this->getSaldo();
    this->setSaldo(saldo + (valor * (1 + this->rendimento)));
}

bool ContaPoupanca::sacar(float valor)
{
    if (valor > this->getSaldo())
    {
        std::cout << "Saldo insuficiente" << std::endl;
        return false;
    }

    float saldo = this->getSaldo();
    this->setSaldo(saldo - valor);

    return true;
}

void ContaPoupanca::imprimirSaldo()
{
    cout << "Saldo da conta poupança: R$ " << this->getSaldo() << endl;
}
