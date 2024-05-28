#include <iostream>
#include <string>

using namespace std;

class Funcionario{
    public:
    Funcionario(){};
    ~Funcionario(){};

    private:
    float sal;
    float ga;
};

int main(){
    string nome;
    float sal;
    int c;
    float ga;

    std::cout << "Digite seu nome " << std::endl;
    std::cin >> nome;

    std::cout << "Digite seu salario " << std::endl;
    std::cin >> sal;
}