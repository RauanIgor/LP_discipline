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



//funcao para contar bolcos de comentarios.
/*
bool bloco_cometario(std::string linha, bool flag = false){
  std::string b1_comments = "/ *";
  std::string b2_comments = "* /";

  size_t result = linha_entrada.find(b1_comments); 
  size_t result_b2 = linha_entrada.find(b2_comments);
  if (result!=std::string::npos){
    flag = true;
  }
  if(flag && result_b2!=std::string::npos){
    file.n_comments++;
    flag = false;
  }
}
*/
   


// funação para contar comentarios //.
bool l_comentario(std::string linha){
  for(unsigned int i=0; i<linha.length(); i++){
      if(linha[i] == '/' && linha[i+1] == '/'){
          return true;
      }
    }
  return false;
}
//Problem ao ler espaços em branco no arquivo .cpp (funciona no .txt)
bool l_branca(std::string linha){
   return linha.empty();
}


int main(){
    std::fstream arquivo;
    std::string linha_entrada;
    FileInfo file;
  

    std::string b1_comments = "/*";
    std::string b2_comments = "*/";
    bool flag = false;
    size_t result, result_b2;
    
    arquivo.open("ex1251.cpp", std::ios::in);
    
    while(std::getline(arquivo, linha_entrada)){
      //std::cout << linha_entrada << std::endl;
        file.n_lines++; //conta linhas do arquivo



        result = linha_entrada.find(b1_comments); 
        result_b2 = linha_entrada.find(b2_comments);
        if (result!=std::string::npos){
          flag = true;
        }
        if(flag && result_b2!=std::string::npos){
          file.n_comments++;
          flag = false;
        }



        //conta comentarios
        if(l_comentario(linha_entrada)){
            file.n_comments++;
        }
        //conta linhas brancas --> ainda não funciona
        else if(l_branca(linha_entrada)){
            file.n_blank++;
        }
        //conta linhas totais do arquivo
    }

    arquivo.close();
    std::cout << "O arquivo tem " << file.n_lines << " linhas." << std::endl;
    std::cout << "O arquivo tem " << file.n_comments << " linhas comentadas." << std::endl;
    std::cout << "O arquivo tem " << file.n_blank << " linhas em branco." << "\n";
}