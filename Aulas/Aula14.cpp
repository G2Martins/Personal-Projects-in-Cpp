#include <iostream>
using namespace std;

class Pessoa{
    public:
    string nome;

    // Método Construtor
    Pessoa(string nomeNovo){
        printf("Pessoa criada com nome \n");
        nome = nomeNovo;
    }
    // Método que imprime uma frase na tela
    void fala(string frase){
        cout << nome << " Diz: " << frase;
    }
    // Método que faz a pessoa gritar
    void grita(){
        cout << " AAAAAHH";
    }
};

int main() 
{
    Pessoa pessoa1("Mario");        // Cria um objeto da classe Pessoa com nome
    pessoa1.fala("E ai galera!");
    pessoa1.grita();
    
    return 0;
}