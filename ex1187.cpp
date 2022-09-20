#include <iostream>

using namespace std;

int main()
{
    char input; 
    double el; //elementos para armazenar na matriz
    double soma{0};
    cin >> input;

    double matriz[12][12]{0};
    
    //alimentando a matriz
    for(short line = 0; line < 12; line++)
    {
        for(short column = 0; column < 12; column++)
        {
            cin >> el;
            matriz[line][column] = el;
        }
    }
    
    //pecorrer matriz nas posicoes que devem somadas ou mediaiplicas
    short qtd_el = 0;
    for(short i = 1, line = 0; line < 5; line++)
    {
        for(short column = i; column < (12-i); column++)
        {
            soma += matriz[line][column];
            qtd_el++;
        }
        i++;
    }
    
    cout.precision(1);
    input == 'M' ? cout << fixed << soma/qtd_el << "\n": cout << fixed << soma << "\n";
    
    return 0;
}
