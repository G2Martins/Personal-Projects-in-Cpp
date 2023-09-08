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
        int resultado = x + y;
        return resultado;
    }
    float subtracao(float z, float j){
        float resultado_1 = z - j;
        return resultado_1;
    }
    float divisao(float a, float b){
        float resultado_2 = a / b;
        return resultado_2;
    }
    float multiplicacao(float c, float d){
        float resultado_3 = c * d;
        return resultado_3;
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