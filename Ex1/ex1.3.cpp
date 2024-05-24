#include <iostream>
#include <string>

class Retangulo{
    public:
    Retangulo(){};
    ~Retangulo(){};

    void setH(float _h){
        h = _h;
    }
    void setW(float _w){
        w = _w;
    }

    float calcA(){
        a = h * w;
        return a;
    }
    float calcP(){
        p = (h * 2) + (w * 2);
        return p;
    }

    float getA(){
        return a;
    }

    float getP(){
        return p;
    }

    private:
    int a;
    int p;
    int h;
    int w;
};

int main() {
    Retangulo nestor;

    int h;
    int w;
    int a;
    int p;

    std::cout << "Altura: \n" << std::endl;
    std::cin >> h;
    nestor.setH(h);    
    
    std::cout << "Largura: \n" << std::endl;
    std::cin >> w;
    nestor.setW(w);

    nestor.calcA();
    nestor.calcP();

    std::cout << "O retangulo de " << h << " por " << w << " tem a area de " << nestor.getA() << " e perimetro de " << nestor.getP() << std::endl;
}