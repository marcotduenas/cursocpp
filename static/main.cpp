#include <iostream>
#include <ostream>

void incremento(){
    static int value = { 1 };
    value++;
    std::cout << value << std::endl;
}

int main (int argc, char *argv[])
{
    incremento();
    incremento();
    incremento();
    return 0;
}
