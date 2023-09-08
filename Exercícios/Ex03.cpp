/* Faça um programa com uma classe pessoa que receba 
informações de nome, idade e salario diretamenta na
construção do objeto e associe aos campos corretos
adicione um métod para imprimir todos os campos
*/
#include <iostream>
using namespace std;

class Pessoa{
    public:
    string nome;
    int idade;
    float salario;

    Pessoa(string nomeNovo, int idadeNova, float salarioNovo){
        nome = nomeNovo;
        idade = idadeNova;
        salario = salarioNovo;
    }
    void Extrato(){
        cout << "\nNome: " << nome << "\nIdade: " << idade << " Anos\n";
        cout << "Salario: R$ " << salario << "\n";
    }
};

int main ()
{
    Pessoa pessoa1("Gustavo", 25, 892.22);   // Cria a pessoa com atributos
    pessoa1.Extrato();

    return 0;
    
}