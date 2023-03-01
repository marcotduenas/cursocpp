#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::string cpf = "123.456.789-90";
    std::cout << cpf << std::endl;
    cpf.erase( std::remove(cpf.begin(), cpf.end(), '.'), cpf.end() );
    std::cout << cpf << std::endl;
    return 0;
}
