#include <iostream>
#include <new>
using namespace std; // Permite Usar Count  e Cin

int main()
{
    // Tamanho a Ser Criado
    int tamanho;

    //Lendo o Tamanho do vetor
    cout << "Digite o Tamanha do Vetor: ";
    cin >> tamanho;

    // Criando um ponteiro que recebe o novo vetor vazio
    int *vetor = new int[tamanho];
    
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    cout << "Vetor: " << vetor[0] << ", " << vetor[1] << ", " << vetor[2];

    return 0;
}