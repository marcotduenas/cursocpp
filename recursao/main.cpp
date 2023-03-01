#include <iostream>
#include <cstdlib>


int fatorial(int x){
//    if (x == 0 || x == 1){
//        return 1;
//    }else{
//        return x * fatorial(x - 1);
//    }
    return (x <= 1) ? 1 : x * fatorial(x - 1);
}

int main (int argc, char *argv[])
{
    if (argc > 1){
        std::cout << fatorial(atoi(argv[1])) << '\n';    
    }else{
        std::cout << "Informe um numero\n";
    }
    return 0;
}
