#include <iostream>
#define pi 3.14
#include <string>

using namespace std;

class Circulo {
public:
  Circulo(){};
  ~Circulo(){};

  float calculeArea() {
    area = pi * (raio * raio);
    return area;
  };

  float calculePerimetro() {
    perimetro = pi * raio * 2;
    return perimetro;
  };

  void setRaio(float _raio) { raio = _raio; };

  float getArea() { return area; };

  float getPerimetro() { return perimetro; };

private:
  float raio;
  float area;
  float perimetro;
};

int main() {
  Circulo conta;
  float raio;

  std::cout << "Digite o valor do raio: ";
  std::cin >> raio;

  conta.setRaio(raio);

  conta.calculeArea();
  conta.calculePerimetro();
  std::cout << "A área é: " << conta.getArea() << endl;
  std::cout << "O perimetro é " << conta.getPerimetro() << endl;
}