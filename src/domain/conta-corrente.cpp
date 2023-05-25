#include <iostream>
#include "domain/conta-corrente.hpp"

ContaCorrente::ContaCorrente()
{
    this->limite = 300;
    this->taxa = 0.05;
}

void ContaCorrente::depositar(float valor)
{
    float saldo = this->getSaldo();
    this->setSaldo(saldo + valor);
}

bool ContaCorrente::sacar(float valor)
{
    valor = valor * (1 + this->taxa);
    if (valor > (this->getSaldo() + this->limite))
    {
        std::cout << "Saldo insuficiente" << std::endl;
        return false;
    }

    float saldo = this->getSaldo();
    this->setSaldo(saldo - valor);

    return true;
}

void ContaCorrente::imprimirSaldo()
{
    cout << "Saldo da conta corrente: R$ " << this->getSaldo() << endl;
}
