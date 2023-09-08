#include <iostream>
using namespace std;

class Calculadora {
    public:

    // Método Construtor
    Calculadora(){
        printf("Calculadora Criada \n");
    }

    // Método que faz uma soma
    float soma(float x, float y){
        return x = y;
    }
    float subtracao(float z, float j){
        return z - j;
    }
    float divisao(float a, float b){
        return a * b;
    }
    float multiplicacao(float c, float d){
        return c * d;
    }
};


int main (){
    Calculadora minhaCalculadora;
    cout << "\nSoma --> 10 + 5 = " << minhaCalculadora.soma(10,5) << "\n";
    cout << "\nSubtracao --> 44 - 22 = " << minhaCalculadora.subtracao(44, 22) << "\n";
    cout << "\nDivisao --> 150 / 15 = " << minhaCalculadora.divisao(150, 15)<< "\n";
    cout << "\nDivisao --> 150 * 15 = " << minhaCalculadora.multiplicacao(150, 15)<< "\n";



    return 0;
}