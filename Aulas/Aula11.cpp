#include <iostream>
using namespace std;

class Pessoa {      // Definição do "Molde" para pessoas
    public:         // Modificador de Acesso
    string nome;    // Atributo de nome

    // Método Construtor é inicializado quando a class é criada
    Pessoa(string nomeNovo)
    {
        printf("Pessoa criada com nome \n");
        nome = nomeNovo;
    }
};

int main()
{
    Pessoa Pessoa1 ("Mario"); // Cria um Objeto da classe pessoa com nome 
    cout << "Pessoa 1: " << Pessoa1.nome << "\n";

    Pessoa Pessoa2 ("Jonh"); // Cria um Objeto da classe pessoa com nome 
    cout << "Pessoa 2: " << Pessoa2.nome << "\n";

    return 0;
}