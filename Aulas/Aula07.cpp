#include <iostream>
using namespace std;

class cookie      // Definição do "Molde" para cookies
{
    public:       // Modificador de Acesso
    float preco;  // Atributo de Preço
    string sabor; // Atributo de Sabor
};

int main ()
{
    cookie cookie1;              // Cria um Objeto da classe Cookie
    cookie1.preco = 15.35;       // Muda o preço do Cookie1
    cookie1.sabor = "Chocolate"; // Muda o Sabor do Cookie1 

    cookie cookie2;              // Cria um Objeto da classe Cookie
    cookie2.preco = 20.22;       // Muda o preço do Cookie2
    cookie2.sabor = "Flocos";    // Muda o sabor do Cookie2

    cout << "Cookie1: " << cookie1.sabor;
    cout << " Custa R$" << cookie1.preco << "\n";
    cout << "Cookie2: " << cookie2.sabor;
    cout << " Custa R$" << cookie2.preco << "\n";


    return 0;
}