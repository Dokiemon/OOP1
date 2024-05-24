#include <iostream>
#include <string>

using namespace std;

class Conta {
public:
  Conta(){};
  ~Conta(){};

  void setSaldo(float _saldo) { saldo = _saldo; }
  void setValor(float _valor) { valor = _valor; }

  float Saque() {
    saldo = saldo - valor;
    return saldo;
  }

  float Deposito() {
    saldo = saldo + valor;
    return saldo;
  }

  float getSaldo() { return saldo; }

private:
  float valor;
  float saldo;
};

int main() {
  Conta user;

  int numero;
  string nome;
  string escolha;
  float valor;
  float saldo;

  std::cout << "Digite o nome do titular da conta: ";
  std::cin >> nome;

  std::cout << "Digite o numero da conta: ";
  std::cin >> numero;

  std::cout << "Digite seu saldo: ";
  std::cin >> saldo;
  user.setSaldo(saldo);

  std::cout << "Digite o valor do saque ou deposito: ";
  std::cin >> valor;
  user.setValor(valor);

  std::cout << "Digite s para saque ou d para deposito: ";
  std::cin >> escolha;

  if (escolha == "s") {
    user.Saque();
  }
  if (escolha == "d") {
    user.Deposito();
  }

  std::cout << "Titular: " << nome << endl;
  std::cout << "Numero da conta: " << numero << endl;
  std::cout << "Saldo:" << user.getSaldo() << endl;
}
