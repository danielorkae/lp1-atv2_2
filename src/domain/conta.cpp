#include <iostream>
#include "domain/conta.hpp"

float Conta::getSaldo()
{
    return this->saldo;
}

float Conta::setSaldo(float saldo)
{
    this->saldo = saldo;
    return this->getSaldo();
}

bool Conta::transferir(float valor, Conta &conta)
{
    if (this->sacar(valor))
    {
        conta.depositar(valor);
        return true;
    }

    return false;
}
