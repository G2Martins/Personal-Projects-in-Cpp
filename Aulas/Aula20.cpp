#include <iostream>
using namespace std;

// Classe Pai
class Eletronico{
    private:
        string marca;
    public:
        string getMarca(){
            return marca;
        }
        void setMarca(string marca){
            this-> marca = marca;
        }
    protected:
        void souEletronico(){
            printf("\nSou Eletronico!\n");
        }
};

// Classe Filha
class Celular : public Eletronico{
    
    // Como está extendendo a classe eletronico
    //  Automaticamente temos acesso aos métodos e atributos
    // que forem public dela, como getMarca() e setMarca()

    private:
        int polegadas;
    public:
        Celular(){
            souEletronico();
        }
        int getPolegadas(){
            return polegadas;
        }
    // Setter da marcam atualiza a marca
        void setPolegadas(int polegadas){
            this->polegadas = polegadas;
        }
};

// OBS> Eu não consigo acessar os métodos protected com o objeto celular se eu estiver na main.

int main() 
{
    Eletronico eletronico1;
    eletronico1.setMarca("Samsung");
    cout << "Eletronico 1 Marca: " << eletronico1.getMarca(); // Imprime a marca
    // Não consigo usar os métodos getPolegadas() ou setPolegadas()
    // Pelo fato desses métodos estão presentes na classe filha e ñ pai

    Celular celular1;
    celular1.setMarca("Iphone");
    celular1.setPolegadas(11);
    cout << "\nCelular 1 Marca: " << celular1.getMarca() << "\n"; // Imprime a Marca
    cout << "Celular 1 Polegadas: " << celular1.getPolegadas() << "\n"; // Imprime as Polegadas

    
    return 0;
}