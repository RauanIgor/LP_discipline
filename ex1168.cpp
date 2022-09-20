#include <iostream>
#include <string>
#include <array>

short qtd_leds(char digito)
{
    switch (digito)
    {
    case '0':
        return 6;
        break;
    case '1':
        return 2;
        break;
    case '2':
        return 5;
        break;
    case '3':
        return 5;
        break;
    case '4':
        return 4;
        break;
    case '5':
        return 5;
        break;
    case '6':
        return 6;
        break;
    case '7':
        return 3;
        break;
    case '8':
        return 7;
        break;
    case '9':
        return 6;
        break;
    
    default:
        break;
    }

    return 0;
}
		

using namespace std;

int main()
{
    short n = 0;

    cin >> n;

    string numero; //armazena numero
    long num_leds = 0;

   // array<short,10> leds = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for(short i = 0; i < n; i++){

        cin >> numero;

        for(char c : numero){
            num_leds = num_leds + qtd_leds(c); //subtrai codigo ASCII
        }


        cout << num_leds << " leds\n";
        num_leds = 0;

    }

    return 0;
}
