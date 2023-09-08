#include <iostream>
using namespace std;

class Pessoa {      // Definição do "Molde" para pessoas
    public:         // Modificador de Acesso
    string nome;    // Atributo de nome

    // Método Construtor é inicializado quando a class é criada
    Pessoa()
    {
        printf("Pessoa criada sem nome \n");
    }
    Pessoa(string nomeNovo)
    {
        printf("Pessoa criada com nome \n");
        nome = nomeNovo;
    }
};

int main()
{
    Pessoa pessoa1;         // Cria um objeto da classe Pessoa sem nome
    cout << "Pessoa 1: " << pessoa1.nome << "\n";
    pessoa1.nome = "Jonh";  // Muda o nome da pessoa depois
    cout << "Pessoa 1:" << pessoa1.nome << "\n\n";

    Pessoa pessoa2("Mario"); // Cria um objeto da classe Pessoa com nome 
    cout << "Pessoa 2:" << pessoa2.nome;
    

    return 0;
}