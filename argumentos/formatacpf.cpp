#include <iostream>
#include <vector>
#include <algorithm>

int main (int argc, char *argv[])
{
    for( int i = 1; i < argc; i++ ){
        if( argc > 1 ){
            std::string cpf = argv[i];
            cpf.erase(std::remove( cpf.begin(), cpf.end(), '.'), cpf.end());
            cpf.erase(std::remove( cpf.begin(), cpf.end(), '-'), cpf.end());
            std::cout << cpf << '\n';
        }else {
            std::cout << "Nenhum CPF informado\n";
        }
    }
    
    return 0;
}
