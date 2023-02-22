#include <iostream>

int main (int argc, char *argv[])
{
    char a {'a'};
    std::cout << toupper(a) << '\n';
    a = toupper(a);
    std::cout << a << '\n';
    return 0;
}
