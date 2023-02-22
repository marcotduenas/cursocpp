#include <iostream>

void func_array(int arr[]){
    arr[1] = 69;
}

int main (int argc, char *argv[])
{
    int numeros[5] = {11, 22, 33, 44, 55};
    /*
    *numeros[1] = 15;
    *std::cout << numeros[1] << '\n';
    *int multi[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    *std::cout << multi[0][2] << '\n';
    *func_array(numeros);
    *std::cout << numeros[1] << '\n';
    */
    std::cout << sizeof(numeros) << '\n';
    return 0;
}
