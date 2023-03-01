#include <iostream>

enum Cores{
    red = 144,
    green = 25,
    blue = 120
};

enum Saidas{
    sucesso,
    erro_permissao,
    erro_abrir
};

int main (int argc, char *argv[])
{
    Cores color1;
    std::cout << red << std::endl;
    std::cout << green << std::endl;
    Saidas s;
    return sucesso;
}
