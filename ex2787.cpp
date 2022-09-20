#include <iostream>

using namespace std;

int main()
{
    unsigned short l, c, cor{0};

    cin >> l >> c;

    if(l % 2 == 0 && c % 2 == 0 ){
        cor = 1;
    }
    else if(l % 2 != 0 && c % 2 != 0 ){
        cor = 1;
    }
    else if(l % 2 == 0 && c % 2 != 0 ){
        cor = 0;
    }
    else{
        cor = 0;
    }

    cout << cor << "\n";

    return 0;
}
