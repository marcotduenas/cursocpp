#include <iostream>
#include <ostream>

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
    /*
    std::cout << sizeof(artistas)/sizeof(std::string) << std::endl;
    for (int i = 0; i < sizeof(artistas)/sizeof(std::string); i++) {
       std::cout << artistas[i] << std::endl; 
    }
    for( auto i : artistas ){
        std::cout << i << std::endl;
    }
    */

    for (int i = 0; i < 8; i++){
        for(int k = 0; k < i + 1; k++){
            std::cout << "*";
        }

        for(int j = 8; j > 0; j--){
            std::cout << " ";
        }

        std::cout << '\n';

    }
    return 0;
}
