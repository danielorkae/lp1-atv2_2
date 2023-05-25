#ifndef DOMAIN_CONTA_CORRENTE_HPP
#define DOMAIN_CONTA_CORRENTE_HPP

#include <iostream>
#include "domain/conta.hpp"

using namespace std;

class ContaCorrente : public Conta
{
private:
    float limite;
    float taxa;

public:
    ContaCorrente();
    void depositar(float valor);
    bool sacar(float valor);
    void imprimirSaldo();
};

#endif
