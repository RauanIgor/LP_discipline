#include <iostream>

using namespace std;


int main()
{
    unsigned short x1, y1, x2, y2, movimentos{0};
    short r1{0}, r2{0};
    
    cin >> x1 >> y1 >> x2 >> y2;
    while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
    {

        if(x1 == x2 || y1 == y2){
            if(x1 == x2 && y1 == y2) { movimentos = 0; cout << movimentos << "\n";}
            else{ movimentos = 1; cout << movimentos << "\n";} 
        }
        else{

            r1 = x2 - x1; //armazena a diferenca de casas entre a posicao de x2, x1
            r2 = y2 - y1; //armazena a diferenca de casas entre a posicao de y2, y1


            /*
                - O if externo verifica se r1 e r2 sao positivos ou negativos ao mesmo tempo;
                - O if interno verifica se r1 e r2 sao iguais, caso isso aconteca
                significa que x2 e y2 variou a mesma quantidade de casas em relacao 
                a x1 e y1, resultando que (x2,y2) está na msm diagonal que (x1,y1); 
            */
            if((r1 > 0 && r2 > 0) || (r1 < 0 && r2 < 0)){
                if(r1 == r2){
                    movimentos = 1;
                    cout << movimentos << "\n";
                }
                else{
                    movimentos = 2;
                    cout << movimentos << "\n";
                }
            }

            else if((r1 > 0 && r2 < 0) || (r1 < 0 && r2 > 0)){
                if(r1 == (r2*(-1))){
                    movimentos = 1;
                    cout << movimentos << "\n";
                }
                else{
                    movimentos = 2;
                    cout << movimentos << "\n";
                }
            }

            r1 = 0;
            r2 = 0;
        }

        cin >> x1 >> y1 >> x2 >> y2;
    }
    
    
    return 0;
}
