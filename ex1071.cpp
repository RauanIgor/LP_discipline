#include <iostream>

int main()
{
    int x, y, soma{0};

    std::cin >> x >> y;

    if (y < x)
        std::swap(x, y);
    x = ((x + 1) % 2 == 0) ? x+2 : x+1;
    while(x < y){
        soma += x;
        x += 2;
    }
    std::cout << soma << "\n";
    return 0;
}

