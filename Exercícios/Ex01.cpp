// Faça um programa que leia um sabor informado pelo
// usuário, depois com uma classe coxinha, crie a 
// coxinha já atribuindo o sabor informado usando 
// método construtor com parâmetro

#include <iostream>
using namespace std;

class Coxinha {      // Definição do "Molde" para Coxinhas
    public:         // Modificador de Acesso
    string sabor;    // Atributo de sabor

    // Método Construtor é inicializado quando a class é criada
    Coxinha(string saborNovo)
    {
        printf("Coxinha criada sem sabor \n");
        sabor = saborNovo;
    }
};

int main()
{
    string sabor;       // Variável auxiliar que recebe um sabor
    cout << "Digite um sabor para Coxinha 1: ";
    cin >> sabor;
    Coxinha coxinha1(sabor);
    cout << "\nCoxinha 1 tem o sabor de: " << coxinha1.sabor << "\n";

    return 0;
}