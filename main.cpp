/*
 * Código utilizado na aula do dia 13/set/22
 */

#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <sstream>
#include <vector>

/* void print_array(int *p, size_t len)
{
  std::cout << "[ ";
  for (size_t i{ 0 }; i < len; ++i)
    std::cout << p[i] << " ";
  std::cout << "]\n";
} */

/* std::string to_string(int *p, size_t len)
{
  std::ostringstream oss;
  oss << "[ ";
  for (size_t i{ 0 }; i < len; ++i)
    oss << p[i] << " ";
  oss << "]\n";
  return oss.str();
} */


struct cat_freq
{
  int letra;
  int freq;
};
/* std::string to_string2(int *first, int *last)
{
  // size_t n = std::distance(first,last);
  // size_t n2 = last - first;

  std::ostringstream oss;
  oss << "[ ";
  // for( size_t i{0}; i < n ; ++i)
  while (first != last)
    oss << *first++ << " ";
  oss << "]\n";
  return oss.str();
} */


bool cmp_desc(const cat_freq & a, const cat_freq & b){
  if(a.freq == b.freq)
    return (a.letra > b.letra);

  return (a.freq < b.freq);
}

int main(int argc, char *argv[])
{
  /* // size_t len_V{ 10 };
  int V[]{ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
  // int V[]{1, 2, 3, 4, 5, 6,7, 8, 9, 10 };
  std::random_device rd;
  std::mt19937 g(rd()); */

  //std::shuffle(std::begin(V), std::end(V), g);

  // std::cout << "Vetor orginal: " << to_string(V, len_V) << "\n";
  //std::cout << "Vetor orginal: " << to_string2(std::begin(V), std::end(V)) << "\n";

  // std::sort(V,V+len_V);
  std::string entrada;
  std::vector<cat_freq> vetor_struct{};//{'A', 2}, {'B', 2}, {'C', 2}, {'1', 2}, {'2', 2}, {'3', 2}
  std::vector<cat_freq>::iterator iter;

  cat_freq elem_anterior;
  
  while (std::getline(std::cin, entrada))
  {
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
        //elem_anterior = {elem.letra, elem.freq};
        vetor_struct.push_back(elem);
        //std::cout << "entrei no IF\n";
      }
      else{
        if(elem.letra != elem_anterior.letra){
            vetor_struct.push_back(elem);
            //std::cout << "entrei no if do else\n";
        } 
      }
    

      
      //std::cout << elem_anterior.letra <<" : " << elem_anterior.freq << '\n';
      elem_anterior = elem;




      //std::cout << vetor_struct.size() << "\n";
    }

      
    std::sort(std::begin(vetor_struct), std::end(vetor_struct), cmp_desc);



    for (iter = vetor_struct.begin(); iter != vetor_struct.end(); iter++)
    {
        std::cout << iter->letra << " " << iter->freq << "\n";

    }
  
    for (iter = vetor_struct.end(); iter != vetor_struct.begin(); iter--)
    {
        vetor_struct.pop_back();

    }
    std::cout << "\n";

  }
  
  //std::cout << "Vetor ordenado: " << to_string2(std::begin(vetor_struct), std::end(vetor_struct)) << "\n";
  return 0;
}
