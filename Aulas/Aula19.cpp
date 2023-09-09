#include <iostream>
using namespace std;

class Salgadinho {
    private:
    string sabor;
    
    public:
    // Método Construtor
    Salgadinho(string sabor){
        setSabor(sabor);
    }
    // Retorna a Sabor
    string getSabor(){
        return sabor;
    }
    // Setter da Sabor, Atualiza o sabor
    void setSabor(string sabor){
        // Atributo da classe recebe o valor do parâmetro
        this->sabor = sabor;
    }

};

int main (){

    Salgadinho s("Picante");
    cout << "\nSalgadinho 1 Sabor: " << s.getSabor() << "\n"; //Imprime o sabor

    return 0; 
}