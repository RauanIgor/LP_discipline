#include <iostream>

using namespace std;
int main()
{
    int valor, aux{0};
    int vetor[20]{0};

    for(int i = 0; i < 20; i++){
        cin >> valor;
        vetor[i] = valor;
    }
    for(int i = 0; i < 10; i++){
        aux = vetor[i];
        vetor[i] = vetor[19-i];
        vetor[19-i] = aux;
    }
    for(int i = 0; i < 20; i++){
        cout << "N["<< i << "] = " << vetor[i] << "\n";
    }
    return 0;
}
