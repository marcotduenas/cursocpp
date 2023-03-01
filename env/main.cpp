#include <cstdlib>
#include <iostream>

int main (int argc, char *argv[])
{
    std::string home = getenv("HOME" );
    std::cout << home << std::endl;
    system("clear");
    system("ls");
    
    return 0;
}
