#include <iostream>

int main (int argc, char *argv[])
{
    std::cout << argc << '\n';
    if( argc > 1){
        std::cout << argv[1] << '\n';
    }else {
        std::cout << "nada\n";
    }
    return 0;
}
