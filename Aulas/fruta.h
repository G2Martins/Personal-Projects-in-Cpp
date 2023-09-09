#include <iostream>
using namespace std; // Necessário para usar string

class Fruta{
    private:
    float preco;
    string nome;

    public:
    float getPreco(){
        return preco;
    }
    void setPreco(float precoNovo){
        preco = precoNovo;
    }

    string getNome(){
        return nome;
    }
    void setNome(string nomeNovo){
        nome = nomeNovo;
    }
};

