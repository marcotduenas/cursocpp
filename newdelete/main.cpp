#include <iostream>

int main (){
    std::string *ponteiro = nullptr;
    ponteiro = new std::string[8];
    std::cout << "Digite seu apelido\n";
    std::getline(std::cin, (*ponteiro));
    std::cout << "\e[33;1m" << *ponteiro << "\e[m" << '\n';
    delete [] ponteiro;
    return 0;
}
