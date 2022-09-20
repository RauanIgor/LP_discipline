#include <iostream>

using namespace std;

int main(){
    int t_testes, n_termo;

    long long vetor_fib[61];

    cin >> t_testes;

    vetor_fib[0] = 0;
    vetor_fib[1] = 1;

    for(int i = 2; i <= 60; i++){
            vetor_fib[i] = vetor_fib[i-2] + vetor_fib[i-1];
    }
    
    for(int j = 0; j < t_testes; j++){
            cin >> n_termo;
            cout << "Fib(" << n_termo << ") = " << vetor_fib[n_termo] << "\n";
    }
    return 0;
}  