#include <iostream>



int main()
{
    char input; 
    float el; //elementos para armazenar na matriz
    float soma{0};
    std::cin >> input;

    float matriz[12][12]{0};
    
    //alimentando a matriz
    for(short line = 0; line < 12; line++)
    {
        for(short column = 0; column < 12; column++)
        {
            std::cin >> el;
            matriz[line][column] = el;
        }
    }
    
    //pecorrer matriz nas posicoes que devem somadas ou mediaiplicas
    short i = 1, qtd_el = 0;
    for(short line = 11; line > 0; line--)
    {
        for(short column = i; column <= 11; column++)
        {
            soma += matriz[line][column];
            qtd_el++;
        }
        i++;
    }
    
    std::cout.precision(1);
    input == 'M' ? std::cout << std::fixed << soma/qtd_el << '\n' : std::cout << std::fixed << soma << '\n';
    
    return 0;
}
