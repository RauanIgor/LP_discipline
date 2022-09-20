#include <iostream>

int main() {
  long valor;
  short n100{0}, n50{0}, n20{0}, n10{0}, n5{0}, n2{0}, n1{0};
  std::cin >> valor;

  std::cout << valor <<"\n";

  n100 = valor/100;
  valor =  valor % 100;

  n50 = valor/50;
  valor =  valor % 50;

  n20 = valor/20;
  valor =  valor % 20;

  n10 = valor/10;
  valor =  valor % 10;

  n5 = valor/5;
  valor =  valor % 5;

  n2 = valor/2;
  valor =  valor % 2;

  n1 = valor/1;
  valor =  valor % 1;
  std::cout << n100 << " nota(s) de R$ 100,00\n" 
            << n50 << " nota(s) de R$ 50,00\n" 
            << n20 << " nota(s) de R$ 20,00\n"
            << n10 << " nota(s) de R$ 10,00\n" 
            << n5 << " nota(s) de R$ 5,00\n"
            << n2 << " nota(s) de R$ 2,00\n" 
            << n1 << " nota(s) de R$ 1,00\n";

  return 0;
}