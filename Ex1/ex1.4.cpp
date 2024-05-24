#include <iostream>
#include <string>

using namespace std;

class Aluno{
    public: 
    void setNota(float _nota){
        nota = _nota;
    }
    void setAprov(){
        if(nota >= 6.0){
            txt = "aprovado";
        }
        if(nota < 6.0){
            txt = "reprovado";
        }
    }

    string getAprov(){
        return txt;
    }

    private:
    float nota;
    string txt;
};

int main(){
    Aluno user;
    string nome;
    int matricula;
    float nota;
    string txt;

    std::cout << "Digite seu nome " << std::endl;
    std::cin >> nome;
    
    std::cout << "Digite sua matricula " << std::endl;
    std::cin >> matricula;

    std::cout << "Digite sua nota " << std::endl;
    std::cin >> nota;
    user.setNota(nota);
    user.setAprov();
    txt = user.getAprov();

    std::cout << "O aluno(a) " << nome << " foi " << txt << " com media " << nota << std::endl;
    
}