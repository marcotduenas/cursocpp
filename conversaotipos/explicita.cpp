#include <iostream>



int main (int argc, char *argv[]){
    
    int i, j;
    double d = 9.87;
    i = int(d);
    j = static_cast<int>(d);
    d = static_cast<double>(d);
    std::cout << j << '\n';
    std::cout << d << '\n';
    return 0;
}
