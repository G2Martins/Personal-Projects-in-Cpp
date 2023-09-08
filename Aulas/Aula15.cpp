#include <iostream>
using namespace std;

class Calculadora {
    public:

    // Método Construtor
    Calculadora(){
        printf("Calculadora Criada \n");
    }

    // Método que faz uma soma
    int soma(int x, int y){
        int resultado = x + y;
        return resultado;
    }
};

int main (){
    Calculadora minhaCalculadora;
    cout << minhaCalculadora.soma(10,5) << "\n";
    cout << minhaCalculadora.soma(20,5) << "\n";

    return 0;
}