#include <iostream>

int main (int argc, char *argv[]){
    int var;

    std::cout << "Digite um numero" << std::endl;
    std::cin >> var;

    /*
    if(var > 15){
        std::cout << "Maior que 10" << std::endl;
    }else if(var == 15){
        std::cout << "15" << std::endl;
    }else{
        std::cout << "Menor ou igual a 10" << std::endl;
    }
    */

    /*
    switch (var) {
        case 10:
            std::cout << var  << " switch" << std::endl;
            break;
        case 5:
            std::cout << var << " switch" << std::endl;
            break;
        default: 
            std::cout << "Nem 5 nem 10" << std::endl;
            break;
    }
    */

//    var >= 15 ? std::cout << "Sim\n" : std::cout << "Nao\n";
    std::cout << (var >= 15 ? "SIM" : "NAO") << '\n';
    return 0;
}
