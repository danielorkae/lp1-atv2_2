#ifndef DOMAIN_CONTA_POUPANCA_HPP
#define DOMAIN_CONTA_POUPANCA_HPP

#include <iostream>
#include "domain/conta.hpp"

using namespace std;

class ContaPoupanca : public Conta
{
private:
    float rendimento;

public:
    ContaPoupanca();
    void depositar(float valor);
    bool sacar(float valor);
    void imprimirSaldo();
};

#endif
