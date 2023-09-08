#include <iostream>
using namespace std;

// Bibliotecas Necessárias para limpeza de buffer
#include <ios>
#include <limits>

class Cookie        //Definição do "Molde" para cookies
{   
    public:         // Modificador de Acesso
    float preco;    // Atributo de Preço
    string sabor;   // Atributo de Sabor
};


int main () 
{
    Cookie Cookie1;     // Cria um Objeto da classe Cookie

    cout << "Digite o preco do cookie: ";
    cin >> Cookie1.preco;

    cout << "Digite o sabor do cookie: ";

    // Limpa o Buffer
    cin.sync();

    //Lê o sabor mesmo que tenha espaços
    getline(cin, Cookie1.sabor);

    cout << "\nCookie 1: " << Cookie1.sabor;
    cout << " Custa R$ " << Cookie1.preco;
    

    return 0;
}