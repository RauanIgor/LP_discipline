/*
 * Código utilizado na aula do dia 13/set/22
 */

/* ola */

// goooo

/**/



#include <algorithm>
#include <iostream>
#include <vector>


//struc responsavel por armazenar o codigo ASCII do caractere e a frequencia;
struct cat_freq
{
  int letra;
  int freq;
};

//Funcao de comparacao entre dois elementos
bool compare(const cat_freq & a, const cat_freq & b){
  if(a.freq == b.freq)
    return (a.letra > b.letra);

  return (a.freq < b.freq);
}

int main(int argc, char *argv[])
{

  std::string entrada;
  std::vector<cat_freq> vetor_struct{};//{'A', 2}, {'B', 2}, {'C', 2}, {'1', 2}, {'2', 2}, {'3', 2}
  std::vector<cat_freq>::iterator iter;


  bool p_line = false;
  bool tem_igual = false;
  
  while (std::getline(std::cin, entrada))

  {
    if(p_line) std::cout << "\n";

    p_line = true;
    for (size_t i = 0; i < entrada.length(); i++)
    {
      int fr{0};
      for(const auto& c : entrada){
        if(entrada.at(i) == c){
          fr++;
        }
      }

      cat_freq elem = {entrada.at(i), fr};

      if(i == 0){
        vetor_struct.push_back(elem);
      }

      else{
        for (const cat_freq& c : vetor_struct)
        {
          if(elem.letra == c.letra){
              tem_igual = true;
              break;
          } 
          
        }
        
        if(!tem_igual){
          vetor_struct.push_back(elem); 
        } else {
          tem_igual = false;
        }


      }

    }

      
    std::sort(std::begin(vetor_struct), std::end(vetor_struct), compare);



    for (iter = vetor_struct.begin(); iter != vetor_struct.end(); iter++)
    {
        std::cout << iter->letra << " " << iter->freq << "\n";

    }
  
    while (!vetor_struct.empty())
    {
      vetor_struct.pop_back();
    }
    

  }
  
  //std::cout << "Vetor ordenado: " << to_string2(std::begin(vetor_struct), std::end(vetor_struct)) << "\n";
  return 0;
}
