#include <iostream>
#include "fruta.h"  // Importa a classe
using namespace std;

int main()
{
    Fruta fruta1;           // Cria um objeto da classe fruta
    fruta1.setNome("Uva");  // Muda o Sabor da fruta 
    fruta1.setPreco(15.22);  // Muda o Preçop da fruta 

    cout << "\nFruta 1: " << fruta1.getNome();
    cout << "\nCusta: R$ " << fruta1.getPreco();

    return 0;
}