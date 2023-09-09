/*
Faça um programa com uma classe celular, com 
os atributos: Marca e preço
use encapsulamento e adicione os Respectivos
Métodos getters e setters
*/

#include <iostream>
using namespace std;

class Celular {
    private:
    string marca = "";
    float preco = 0;

    public:         // Modificador de acesso
    // Getter(Retornam um atributo) do nome, retorna o nome atual
    string getMarca(){
        return marca;
    }

    // Setter(Recebem um parâmetro e modificam um atributo com esse novo valor), Atualiza o nome
    void setMarca(string novaMarca){
        marca = novaMarca;
    }

    // Getter(Retornam um atributo) do nome, retorna o nome atual
    float getPreco(){
        return preco;
    }

    // Setter(Recebem um parâmetro e modificam um atributo com esse novo valor), Atualiza o nome
    void setpreco(float novoPreco){
        preco = novoPreco;
    }
};

int main()
{
    Celular celular1;                    // Cria Pessoa sem atributos
    celular1.setMarca("Samsung");        // Modificando o nome da marca
    cout << celular1.getMarca() << "\n"; // Imprime o nome da marca 

    celular1.setpreco(2502.22);        // Modificando o nome da marca
    cout << celular1.getPreco() << "\n"; // Imprime o nome da marca 
}