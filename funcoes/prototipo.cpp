#include <iostream>

int mult(int, int);

int main (int argc, char *argv[])
{
    std::cout << mult(17, 17) << '\n';
    return 0;
}


int mult(int x, int y){
    return x * y;
}

