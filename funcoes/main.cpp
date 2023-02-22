#include <iostream>

/*
*void minha_funcao(){
*    std::cout << "Ola, Mundo\n";
*}
*/

int soma(int x, int y){
    return x + y;
}

int main (){
    int x = 3, y = 6;
    std::cout << soma(x, y) << '\n';
    return 0;
}
