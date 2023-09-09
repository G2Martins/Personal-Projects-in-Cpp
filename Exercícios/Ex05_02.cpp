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
    string marca;
    float preco;

    public:         // Modificador de acesso
    Celular(){
        marca = "";
        preco = 0;
    }
    
    Celular(string marca){
        setMarca(marca);
    }

    Celular(float preco){
        setPreco(preco);
    }

    Celular(string marca, float preco){
        setMarca(marca);
        setPreco(preco);
    }
    
    // Retorna a Marca
    string getMarca(){
        return marca;
    }

    // Setter da marca, Atualiza a marca
    void setMarca(string marcaNovo){
        marca = marcaNovo;
    }

    // Retorna o Preço 
    float getPreco(){
        return preco;
    }

    // Setter do Preço, atualiza o preço
    void setPreco(float precoNovo){
        preco = precoNovo;
    }
};

int main()
{
    Celular celular1;                   // Cria um celular sem Atributos
    cout << "\nCelular 1 Marca: " << celular1.getMarca() << "\n";  // Imprime a Marca
    cout << "Celular 1 Preco: " << celular1.getPreco() << "\n";  // Imprime o Preco

    Celular celular2("Motorola");       // Cria um celular Com Marca  
    cout << "\nCelular 2 Marca: " << celular2.getMarca() << "\n";  // Imprime a marca
    cout << "Celular 2 Preco: " << celular2.getPreco() << "\n";  // Imprime o Preco

    Celular celular3(1299.99);          // Cria um celular com Preço
    cout << "\nCelular 3 Marca: " << celular3.getMarca() << "\n";  // Imprime a Marca
    cout << "Celular 3 Preco: " << celular3.getPreco() << "\n";  // Imprime o Preco

    Celular celular4("Iphone", 9499.99); // Cria um celular com Marca e Preço
    cout << "\nCelular 4 Marca: " << celular4.getMarca() << "\n";  // Imprime a Marca
    cout << "Celular 4 Preco: " << celular4.getPreco() << "\n";  // Imprime o Preco

    return 0;
}