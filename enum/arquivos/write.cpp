#include <iostream>
#include <fstream>

int main (int argc, char *argv[])
{
    std::string conteudo, outro;
    std::ofstream arquivo;
    arquivo.open("arquivo2.txt", std::ios_base::app);
    std::cout << "Informe uma linha" << std::endl;
    std::getline(std::cin, conteudo);
    std::cout << "Informe uma linha" << std::endl;
    std::getline(std::cin, outro);

    arquivo << conteudo << '\n';
    arquivo << outro << '\n';
    arquivo.close();


    return 0;
}
