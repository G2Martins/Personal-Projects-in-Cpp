#include <iostream>
using namespace std;

class Usuario{
    private:
        string nome;
        string email;
    public:
    //Getter
    string getNome(){
        return nome;
    }
    //Setter
    void setNome(string nome){
        this-> nome = nome;
    }
    //Getter
    string getEmail(){
        return email;
    }
    //Setter
    void setEmail(string email){
        this-> email = email;
    }
}; 

class Personagem: public Usuario{
    private:
    int nivel;
    public:
    //Getter
    int getNivel(){
        return nivel;
    }
    //Setter
    void setNivel(int nivel){
        this-> nivel = nivel;
    }
    // Métodos Diferentes costumam necessitar
    // De comentários, ao menos que o nome seja
    // Autoexplicativo
    
    void aumentaUmNivel(){
        nivel ++;
    }
};

int main()
{
    Personagem personagem1;
    personagem1.setNome("Jonh");
    personagem1.setEmail("Jonh@gmail.com");
    personagem1.setNivel(5);
    personagem1.aumentaUmNivel();
    personagem1.aumentaUmNivel();
    cout << "Nome: " << personagem1.getNome() << endl;
    cout << "Email: " << personagem1.getEmail() << endl;
    cout << "Nivel: " << personagem1.getNivel() << endl;

    return 0;
}