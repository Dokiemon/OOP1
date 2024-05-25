#include <iostream>
#include <string>

using namespace std;

class Funcionario{
    public:
    void setSal(float _sal){
        sal = _sal;
    }
    float calcImp(){
        imp = sal * 0.05;
        nsal = sal - imp;
        return nsal;
    }

    float getNsal(){
        return nsal;
    }

    private:
    float sal;
    float imp;
    float nsal;

};

int main(){
    string nome;
    float sal;
    float nsal;

    Funcionario user;

    std::cout << "Digite o nome do funcionario: " << std::endl;
    std::cin >> nome;

    std::cout << "Digite o seu salario: " << std::endl;
    std::cin >> sal;
    user.setSal(sal);

    user.calcImp();

    nsal = user.getNsal();

    std::cout << "O funcionario " << nome << " vai receber " << nsal;
    std::cout << " apos os impostos de 5% " << "sobre o salario de " << sal << std::endl;

}