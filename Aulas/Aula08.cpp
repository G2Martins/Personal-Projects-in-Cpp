#include <iostream>
using namespace std;

// Bibliotecas Necessárias para limpeza de buffer
#include <ios>
#include <limits>

int main () 
{
    char frase[80];     // Cria uma variável para armazenar uma frase

    cout << "Digite uma Frase: ";

    // Quando Vamos ler palavras e frases com o teclado
    // Alguns compiladores se perdem com valores na memória
    // Para Garantir seu funcionamento Utilizamos:
    cin.sync();

    //Lê a frase mesmo que tenha espaço
    cin.getline(frase, 80);
    
    //Imprime o Resultado
    cout << "\nFrase: " << frase << "\n";

    //Lê de novo, após limpar  o buffer
    cin.sync();
    cin.getline(frase, 80);
    cout << "\nNova Frase: " << frase << "\n";
    
    return 0;
}