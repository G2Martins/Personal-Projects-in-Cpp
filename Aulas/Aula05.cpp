#include <new>
#include <iostream>
using namespace std;

int main()
{
    int numeroLinhas, numeroColunas;
    cout << "Digite o Total de Linhas: ";
    cin >> numeroLinhas; // Lendo Números de linhas
    cout << "Digite o Total de Colunas: ";
    cin >> numeroColunas; // Lendo Números de Colunas

    //Aloca as Linhas
    int **matriz = new int*[numeroLinhas];

    //Alocas as Colunas
    for(int i = 0; i < numeroLinhas; i++)
    {
        matriz[i] = new int[numeroColunas];
    }

    //Preencher valores da matrizer criadas
    for(int i = 0; i < numeroLinhas; i++)
    {
        for(int j = 0; j < numeroColunas; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    //Imprime os valores de i e j
     for(int i = 0; i < numeroLinhas; i++)
    {
        for(int j = 0; j < numeroColunas; j++)
        {
            cout << matriz[i][j];
        }
        cout << "\n";
    }


    return 0;
}