#include <iostream>

using namespace std;

int main()

{
    string entrada;
    char letra, primeiraLetra;

    while(getline(cin, entrada))
    {
        if(entrada == "*")
        {
            break;
        }

        else
        {

            bool todas_letras_iguais{true};
            //pecorrer toda a string
            for(size_t i = 0; i < entrada.length(); i++)
            {
                primeiraLetra = entrada.at(0);
                letra = entrada.at(i); //armazenando o caractere de cada posição da string de entrada
                if(letra == ' ' ) //filtrando os espacos em branco para separa as palavras
                {
                    letra = entrada.at(i+1);
                    if(toupper(primeiraLetra) != toupper(letra))
                    {
                        todas_letras_iguais = false;
                        break;
                    }

                }
                //cout << "Carater na posição [" << i << "] -> " << letra <<'\n';
            }
            if(todas_letras_iguais)
            {
                cout << "Y" << "\n";
            }
            else{
                cout << "N" << "\n";
            }
        }   
    }
 
}