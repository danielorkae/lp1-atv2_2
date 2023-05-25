#include <iostream>
#include "domain/pessoa.hpp"
#include "domain/conta-corrente.hpp"
#include "domain/conta-poupanca.hpp"

using namespace std;

int main()
{
    Pessoa *joao = new Pessoa("José Maria");

    joao->setContaCorrente(new ContaCorrente());
    joao->setContaPoupanca(new ContaPoupanca());

    cout << "Cliente: " << joao->getNome() << endl
         << endl;

    cout << "=> Saldo Inicial" << endl;
    joao->getContaCorrente()->imprimirSaldo();
    joao->getContaPoupanca()->imprimirSaldo();

    cout << endl
         << "=> Depositando R$ 1000,00 em cada conta" << endl
         << endl;

    joao->getContaCorrente()->depositar(1000);
    joao->getContaPoupanca()->depositar(1000);

    cout << "=> Transferindo R$ 100,00 da conta corrente para a conta poupança" << endl
         << endl;

    joao->getContaCorrente()->transferir(100, *joao->getContaPoupanca());

    cout << "=> Novo saldo" << endl;
    joao->getContaCorrente()->imprimirSaldo();
    joao->getContaPoupanca()->imprimirSaldo();

    cout << endl
         << "=> Sacando R$ 500,00 da conta corrente" << endl
         << endl;

    joao->getContaCorrente()->sacar(500);

    cout << endl
         << "=> Sacando R$ 500,00 da conta poupança" << endl
         << endl;

    joao->getContaPoupanca()->sacar(500);

    cout << "=> Novo saldo" << endl;
    joao->getContaCorrente()->imprimirSaldo();
    joao->getContaPoupanca()->imprimirSaldo();

    cout << endl
         << "=> Sacando R$ 500,00 (com limite) da conta corrente" << endl
         << endl;

    joao->getContaCorrente()->sacar(500);

    cout << "=> Novo saldo" << endl;
    joao->getContaCorrente()->imprimirSaldo();

    cout << endl
         << "=> Tentando sacar R$ 500,00 (sem limite) da conta corrente" << endl
         << endl;

    joao->getContaCorrente()->sacar(500);

    return 0;
}
