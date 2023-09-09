#include <iostream>
using namespace std;

// Classe Pai
class Animal {
    private:
        string terreno;
    public:
        // Getter
        string getTerreno(){
            return terreno;
        }
        // Setter
        void setTerreno(string terreno){
            this-> terreno = terreno;
        }
};

class Mamifero: public Animal{
    private:
        int mesesGestacao;
    public:
        // Getter
        int getMesesGestacao(){
            return mesesGestacao;
        }
        void setMesesGestacao(int mesesGestacao){
            this-> mesesGestacao = mesesGestacao;
        }
};

class Cachorro: public Mamifero{
    private:
        string raca;
    public:
        // Getter
        string getRaca(){
            return raca;
        }
        void setRaca(string raca){
            this-> raca = raca;
        }
        void latir(){
            cout << "AU AU AU AU" << endl;
        }
};  

int main(){

    Cachorro cachorro1;
    cachorro1.setTerreno("Terra");
    cachorro1.setMesesGestacao(4);
    cachorro1.setRaca("Spitz");
    cout << cachorro1.getTerreno() << endl;
    cout << cachorro1.getMesesGestacao() << endl;
    cout << cachorro1.getRaca() << endl;
    cachorro1.latir();
    




}