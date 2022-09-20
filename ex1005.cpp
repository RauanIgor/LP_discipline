#include <iostream>

using namespace std;

int main(){
    float A, B, media;
    cin >> A >> B;

    media = ((A * 3.5) + (B * 7.5))/11.0;

    cout << fixed;
    cout.precision(5);
    cout << "MEDIA = "<< media << '\n';


    return 0;
}