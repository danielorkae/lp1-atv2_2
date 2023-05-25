#ifndef DOMAIN_CONTA_HPP
#define DOMAIN_CONTA_HPP

#include <iostream>

using namespace std;

class Conta
{
private:
    float saldo;

protected:
    float setSaldo(float saldo);

public:
    float getSaldo();
    virtual bool transferir(float valor, Conta &conta);
    virtual bool sacar(float valor) = 0;
    virtual void depositar(float valor) = 0;
    virtual void imprimirSaldo() = 0;
};

#endif
