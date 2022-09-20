#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main()
{
    string password;

    while(getline(cin, password))
    {
        bool has_lower_case = false; //std::isalpha && std::isupper()
        bool has_upper_case = false;
        bool has_number = false; //std::isdigit()
        bool has_invalid_caracter = false;
        //cout << password << " ";
        if(password.size() < 6 or password.size() > 32){
            cout << "Senha invalida.\n";
            continue;
        }
        else{

            for(const auto& c : password) {
                
                if(isalpha(c)){
                    if(isupper(c))
                        has_upper_case = true;
                    else
                        has_lower_case = true;
                }
                else if(isdigit(c)){
                    has_number = true;
                }
                else{
                    has_invalid_caracter = true;
                }

            }
            if(has_invalid_caracter){
                cout << "Senha invalida.\n";
            }
            else if(has_upper_case && has_lower_case && has_number){
                cout << "Senha valida.\n";
            }
            else{
                cout << "Senha invalida.\n";
            }
            //cout << "M: "<< has_upper_case << " m: "<< has_lower_case << " INC: " << has_invalid_caracter << " N: " << has_number << "\n";
        }

        //pecorrer cada elemento de password
    }

    
    return 0;
}
