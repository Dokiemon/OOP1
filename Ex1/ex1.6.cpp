#include <iostream>
#include <string>

using namespace std;

class Funcionario{
    public:
    Funcionario(){};
    ~Funcionario(){};

    void setSal(float _sal){
        sal = _sal;
    }

    void setMatricula(float _mat){
        matricula = _mat;
    }

    void setNome(string _nome){
        nome = _nome;
    }

    float getAno(){
        ano = sal*12;
    }

    void exibir(){
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salario: " << sal << std::endl;
        std::cout << "Salario anual: " << ano << std::endl;
    }

    private:
    string nome;
    float sal;
    float ano;
    int matricula;
};

int main(){

    Funcionario user;

    string nome;
    float sal;
    string c;
    float ano;
    int matricula;

    std::cout << "Digite t para tecnico ou a para administrativo: " << std::endl;
    std::cin >> c;

    if (c == "t"){

    }

    std::cout << "Digite seu nome " << std::endl;
    std::cin >> nome;
    user.setNome(nome);

    std::cout << "Digite seu salario " << std::endl;
    std::cin >> sal;
    user.setSal(sal);

    std::cout << "Digite sua matricula " << std::endl;
    std::cin >> matricula;
    user.setMatricula(matricula);

    user.exibir();
}