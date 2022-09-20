#include <iostream>

using namespace std;

int main()
{
    short n_testes, l_linhas;
    int somaLetras{0};

    string linha_entrada;

    cin >> n_testes;

    while (n_testes > 0)
    {
        cin >> l_linhas;

        int elemento_entrada{0};

        while (l_linhas > 0)
        {
            cin >> linha_entrada;

            for(size_t i = 0; i < linha_entrada.length(); i++)
            {
                somaLetras += (int(linha_entrada.at(i)) - 65) + elemento_entrada + i;
                //cout << int(linha_entrada.at(i)) - 65 << " " << elemento_entrada << " " << i << "\n";
            }
            l_linhas--;
            elemento_entrada++;
        }
        n_testes--;

        cout << somaLetras << "\n";
        somaLetras = 0;
        
    }
    
    return 0;


}
