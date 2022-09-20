#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1{0}, y1{0}, x2{0}, y2{0};
    double distancia{0};


    cin >> x1 >> y1;
    cin >> x2 >> y2;

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout.precision(4);
    cout << fixed << distancia << '\n';
    return 0;
}
