#include <iostream>

int main (int argc, char *argv[])
{
    double pi = 3.14;
    int numero = pi;
    char letra = 'c';
    std::cout << pi << '\n';
    std::cout << numero << '\n';
    std::cout << letra << '\n';
    numero = letra;
    std::cout << numero << '\n';
    numero = numero + letra;
    std::cout << numero << '\n';
    return 0;
}
