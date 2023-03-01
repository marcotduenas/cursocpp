#include <iostream>

int main(){
    int x {420};
    int *y = &x;

    std::cout << x << '\n';
    std::cout << y << '\n';
}
