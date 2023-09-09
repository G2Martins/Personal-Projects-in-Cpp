#include <iostream>
using namespace std;

class Pessoa{       // Definição do "Molde" para Pessoas
    private:
    string nome;    // Atributo de nome

    public:         // Modificador de acesso
    // Getter(Retornam um atributo) do nome, retorna o nome atual
    string getNome(){
        return nome;
    }

    // Setter(Recebem um parâmetro e modificam um atributo com esse novo valor), Atualiza o nome
    void setNome(string nomeNovo){
        nome = nomeNovo;
    }
};

int main ()
{
    Pessoa pessoa1;                    // Cria Pessoa sem atributos
    pessoa1.setNome("Patrick");        // Modificando o nome
    cout << pessoa1.getNome() << "\n"; // Imprime o nome 

    return 0;
}