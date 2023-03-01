#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> vetor1 = { "Seu Jorge", "Elis Regina", "Belchior", "Fagner", "Roberto Carlos", "Cazuza"};
    //Removendo o ultimo elemento pra nao dar segfault \0
    vetor1.push_back("Caetano Veloso");
    vetor1.pop_back();
    //std::vector<std::string>::iterator primeiroElemento = vetor1.begin();
    std::vector<std::string>::iterator ultimoElemento = vetor1.end();
    std::cout << *ultimoElemento << '\n';
    std::cout << vetor1.size() << '\n';
    return 0;
}
