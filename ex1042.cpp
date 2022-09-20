#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<int> pilha;

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(((n1 > n2 && n1 > n3) && n2 > n3) || (n1 == n2 && n1 > n3) || (n1 == n2 && n1 == n3)){
        pilha.push(n1);
        pilha.push(n2);
        pilha.push(n3);
    }
    else if((n1 > n2 && n1 > n3) && n3 > n2){
        pilha.push(n1);
        pilha.push(n3);
        pilha.push(n2);
    }
    else if((n2 > n1 && n2 > n3) && n1 > n3){
        pilha.push(n2);
        pilha.push(n1);
        pilha.push(n3);
    }
    else if((n2 > n1 && n2 > n3) && n3 > n1){
        pilha.push(n2);
        pilha.push(n3);
        pilha.push(n1);
    }
    else if((n3 > n1 && n3 > n2) && n1 > n2){
        pilha.push(n3);
        pilha.push(n1);
        pilha.push(n2);
    }
    else if((n3 > n1 && n3 > n2) && n2 > n1){
        pilha.push(n3);
        pilha.push(n2);
        pilha.push(n1);
    }
    
    for(int i=0;i<3;i++){
        cout << pilha.top() << "\n";
        pilha.pop();
    }
    cout << "\n";
    cout << n1 << "\n" << n2 << "\n" << n3 << "\n";

    return 0;
}