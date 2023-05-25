#ifndef DOMAIN_PESSOA_HPP
#define DOMAIN_PESSOA_HPP

#include <iostream>
#include <string>
#include "domain/conta-corrente.hpp"
#include "domain/conta-poupanca.hpp"

using namespace std;

class Pessoa
{
private:
    string nome;
    ContaCorrente *contaCorrente;
    ContaPoupanca *contaPoupanca;

public:
    Pessoa();
    Pessoa(string nome);
    string getNome();
    string setNome(string nome);
    ContaCorrente *getContaCorrente();
    ContaCorrente *setContaCorrente(ContaCorrente *contaCorrente);
    ContaPoupanca *getContaPoupanca();
    ContaPoupanca *setContaPoupanca(ContaPoupanca *contaPoupanca);
};

#endif
