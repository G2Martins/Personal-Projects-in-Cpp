#include <iostream>
using namespace std;

class Cookie
{
    public:
    float preco;
    string sabor;
    string formato;

    // Método Construtor é Inicializado quando a class é criada
    Cookie()
    {
        printf("Cookie criado\n");
        formato = "Redondo"; // J
    }
};

int main()
{
    Cookie Cookie1;
    Cookie1.preco = 15.35;
    Cookie1.sabor = "Chocolate";

    cout << "Cookie 1:" << Cookie1.sabor;
    cout << " Custa R$" << Cookie1.preco;
    cout << " Formato: " << Cookie1.formato << "\n";

    return 0;
}