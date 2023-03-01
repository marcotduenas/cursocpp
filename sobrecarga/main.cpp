#include <iostream>

void funcao(){
    std::cout << "Alala" << std::endl;
}

int funcao(int x){
    return x;
}

int funcao(int x, int y){
    return x * y;
}

int main (int argc, char *argv[])
{
    funcao();
    std::cout << funcao(5) << '\n';
    std::cout << funcao(5, 4) << '\n';
    return 0;
    return 0;
}
