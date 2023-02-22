#include <iostream>

int main (int argc, char *argv[])
{
    /*
    int i = 0;
    while( i <= 10){
        std::cout << i << std::endl;
        i++;
    }
    */

    /*
    int j = 0;
    do{
        std::cout << j << '\n';
        j += 10;
    }while (j <= 100);
    */

    /*
    for(int k = 0; k < 20; k++){
        std::cout << k << std::endl;
    }
    */

    std::string artistas[] = { "Scott H.", "Robert Cray", "Wes Montgomery", "Jimmy Page"};
    for (int i = 0; i < sizeof(artistas)/sizeof(int); i++) {
       std::cout << "message" << std::endl; 
    }
    return 0;
}
