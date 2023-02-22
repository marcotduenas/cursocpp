#include <iostream>

int main (int argc, char *argv[])
{
    std::string meuarray[3] = { "Marco", "Maria", "Cleber"};
    std::cout << meuarray[1 + 1] << '\n';
    return 0;
}
