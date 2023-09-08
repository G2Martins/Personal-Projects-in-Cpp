#include <iostream>
using namespace std;

class pessoa 
{
    public:     //Modificador de Acesso
    int idade;  // Atributo idade
    string nome; // Atributo Nome
    float salario; // Atributo Salario
};

int main ()
{
    pessoa pessoa1; // Cria um Objeto da Classe Pessoa
    pessoa1.idade = 50; // Muda a idade da Pessoa 1
    pessoa1.nome = "Jonh"; // Muda o nome da Pessoa 1
    pessoa1.salario = 782.22; // Muda o Salario Pessoa 1

    cout << pessoa1.nome << " Tem " << pessoa1.idade << " Anos";
    cout << ", e recebe R$ " << pessoa1.salario;

    return 0;
}