#include <iostream>
#include <string>

using namespace std;

int main()
{
    string vendedor;
    double salarioFixo, totalVendas, salarioFinal;

    cin >> vendedor >> salarioFixo >> totalVendas;

    salarioFinal = salarioFixo + (totalVendas * 0.15);

    cout << fixed;
    cout.precision(2);
    cout << "TOTAL = R$ " << salarioFinal << '\n';

    
    return 0;
}
