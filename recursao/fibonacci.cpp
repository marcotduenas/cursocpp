#include <iostream>

int fibonacci( int x){
    return (x <= 1) ? x : fibonacci(x - 1) + fibonacci(x - 2);
    /*
    if (x <= 1){
        return x;
    }else{
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
    */
}

int main(){
    /*
    int i = 0;
    while( i < 10){
        std::cout << fibonacci(i) << std::endl;
        i++;
    }
    */
    //Codigo acima funciona
    //
    //Codigo abaixo nao
    std::cout << fibonacci(10);
    return 0;
}
