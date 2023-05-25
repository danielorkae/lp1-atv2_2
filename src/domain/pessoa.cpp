#include <iostream>
#include "domain/pessoa.hpp"

Pessoa::Pessoa()
{
    //
}

Pessoa::Pessoa(string nome)
{
    this->nome = nome;
}

string Pessoa::getNome()
{
    return this->nome;
}

string Pessoa::setNome(string nome)
{
    this->nome = nome;

    return this->getNome();
}

ContaCorrente *Pessoa::getContaCorrente()
{
    if (this->contaCorrente == NULL)
    {
        cout << "Conta corrente não existe" << endl;
        return NULL;
    }

    return this->contaCorrente;
}

ContaCorrente *Pessoa::setContaCorrente(ContaCorrente *contaCorrente)
{
    this->contaCorrente = contaCorrente;
    return this->getContaCorrente();
}

ContaPoupanca *Pessoa::getContaPoupanca()
{
    if (this->contaPoupanca == NULL)
    {
        cout << "Conta poupança não existe" << endl;
        return NULL;
    }

    return this->contaPoupanca;
}

ContaPoupanca *Pessoa::setContaPoupanca(ContaPoupanca *contaPoupanca)
{
    this->contaPoupanca = contaPoupanca;
    return this->getContaPoupanca();
}
