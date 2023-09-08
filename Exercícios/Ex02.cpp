/* Faça um programa com uma classe cachorro que tem
uma raça e seja possível criar um cachorro já informando
a raça, ou então sem informar. Se não informar, atribua
a raça "Viralatinha"
*/

#include <iostream>
using namespace std;

class Cachorro {    // Definição do "Molde" para cachorros
    public:         // Modificador de acesso    
    string raca;    // Atributo de nome da raça

    // Método Construtivo   
    Cachorro(){
        raca = "ViraLatinha";
    }
    Cachorro(string racaNovo){
        raca = racaNovo;
    }
};

int main()
{
    Cachorro cachorro1;    // Cria um cachorro sem raça
    cout << "Cachorro 1: " << cachorro1.raca << "\n";

    Cachorro cachorro2("YorkShire");  // Cria um cachorro com raça
    cout << "Cachorro 2: " << cachorro2.raca;
    
    
    return 0;
}