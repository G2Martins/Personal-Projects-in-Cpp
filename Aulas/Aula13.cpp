#include <iostream>
using namespace std;

class Pessoa{
    public:
    string nome;
    int idade = 0; 

    // Método Construtor 
    Pessoa(){
        printf("Pessoa criada sem nome e sem idade \n");
    }

    Pessoa(string nomeNovo){
        printf("Pessoa criada com nome \n");
        nome = nomeNovo;
    }

    Pessoa(int idadeNova){
        printf("Pessoa criada com idade \n");
        idade = idadeNova;
    }

    Pessoa(string nomeNovo, int idadeNova){
        printf("Pessoa cirada com nome e idade \n");
        nome = nomeNovo;
        idade = idadeNova;
    }
};

int main()
{
    Pessoa pessoa1;                // Cria um objeto da classe Pessoa com nome
    cout << "Pessoa 1: " << pessoa1.nome << "," << pessoa1.idade << "\n";
    
    Pessoa pessoa2("Jonh");       // Cria um objeto da classe Pessoa com nome
    cout << "Pessoa 2:" << pessoa2.nome << "," << pessoa2.idade << "\n";

    Pessoa pessoa3(25);           // Cria um objeto da classe Pessoa com idade 
    cout << "Pessoa 3:" << pessoa3.nome << "," << pessoa3.idade << "\n";

    Pessoa pessoa4("Jonas", 25);  // Cria um objeto da classe Pessoa com idade e nome
    cout << "Pessoa 4:" << pessoa4.nome << "," << pessoa4.idade << "\n";

   return 0; 
}