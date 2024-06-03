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

    float getAno(){
        ano = sal*12;
        return ano;
    }

    private:
    float sal;
    float ano;
};

class Admin{
    public:
    void setSal(float _sal){
        sal = _sal;
    }

    float bonusN(){
        aumento = sal * 0.15;
        sal = sal + aumento;
        return sal;
    }

    private:
    float sal;
    float aumento;
};

class Tecn{
    public:
    void setSal(float _sal){
        sal = _sal;
    }
    float aumentof(){
        aumento = sal * 0.15;
        sal = sal + aumento;
        return sal;
    } 

    private:
    float sal;
    float aumento;
};

int main(){

    Funcionario user;

    string nome;
    float sal;
    string c;
    float ano;
    int matricula;
    string turno;

    std::cout << "Digite seu nome " << std::endl;
    std::cin >> nome;

    std::cout << "Digite seu salario " << std::endl;
    std::cin >> sal;
    user.setSal(sal);

    std::cout << "Digite sua matricula " << std::endl;
    std::cin >> matricula;

    std::cout << "Digite t para tecnico ou a para administrativo: " << std::endl;
    std::cin >> c;

    if (c == "a"){
        Admin ad;

        ad.setSal(sal);
        c = "Assistente Administrativo";
        std::cout << "Digite o turno com d para diurno e n para noturno: " << std::endl;
        std:: cin >> turno;
        if (turno == "d"){
            std::cout << "";
        }
        if (turno == "n"){
            sal = ad.bonusN();
        }
    }
    if (c == "t"){
        c = "Assistente Tecnico";
        Tecn tec;
        tec.setSal(sal);
        sal = tec.aumentof();
    }
    std::cout << "Nome: " << nome << std::endl << "Matricula: " << matricula << std::endl;
    std::cout << "Cargo: " << c << std::endl << "Salario: " << sal << std::endl;
    if (c == "Assistente Administrativo"){
        std::cout << "Turno: " << turno << endl;
    }
    
}