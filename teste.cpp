#include <iostream>
#include <fstream>
#include<string>


enum lang_type_e {
  C = 0,  //!< C language
  CPP,    //!< C++ language
  H,      //!< C/C++ header
  HPP,    //!< C++ header
  UNDEF,  //!< Undefined type.
};

using count_t = unsigned int;

class FileInfo {
 public:
  std::string filename;     //!< the filename.
  lang_type_e type;    //!< the language type.
  count_t n_blank;     //!< # of blank lines in the file.
  count_t n_comments;  //!< # of comment lines.
  count_t n_loc;       //!< # lines of code.
  count_t n_lines;     //!< # of lines.
 public:
  /// Ctro.
  FileInfo(const std::string &fn = "",
           lang_type_e t = UNDEF,
           count_t nb = 0,
           count_t nc = 0,
           count_t nl = 0,
           count_t ni = 0)
      : filename{ fn }, type{ t }, n_blank{ nb }, n_comments{ nc }, n_loc{ nl }, n_lines{ ni } {
    /* empty*/
  }
};


bool l_comentario(std::string l){
    bool b{false};
    for(unsigned int i=0; i<l.length(); i++){
        if(l[i] == '/' && l[i+1] == '/'){
            b = true;
        }
  }
    return b;
}
//Problem ao ler espaços em branco no arquivo .cpp (funciona no .txt)
bool l_branca(std::string l){
   return l.empty();
}


int main(){
    std::fstream arquivo;
    std::string linha_entrada;
    FileInfo file;
    int blank{0};
    
    arquivo.open("ex1251.cpp", std::ios::in);
    
    while(std::getline(arquivo, linha_entrada)){
      //std::cout << linha_entrada << std::endl;
        //conta comentarios
        file.n_lines++;
        if(l_comentario(linha_entrada)){
            file.n_comments++;
        }
        //conta linhas brancas --> ainda não funciona
        else if(l_branca(linha_entrada)){
            blank++;
        }
        //conta linhas totais do arquivo
    }

    arquivo.close();
    std::cout << "O arquivo tem " << file.n_lines << " linhas." << std::endl;
    std::cout << "O arquivo tem " << file.n_comments << " linhas comentadas." << std::endl;
    std::cout << "O arquivo tem " << blank << " linhas em branco." << "\n";
}