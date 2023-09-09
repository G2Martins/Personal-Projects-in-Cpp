#include <iostream>
using namespace std;

class Calculadora {
    public:
        int somar(int x, int y, int z){
            return x + y + z;
        }

        int somar(int x, int y){
            return x + y;
        }
};

int main()
{
    Calculadora calculadora1;

    cout << calculadora1.somar(5,6,7) << endl;
    cout << calculadora1.somar(5,6) << endl;

    return 0;
}