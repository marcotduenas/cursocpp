#include <iostream>

int main(){
    int *x = nullptr;
    while (true) { 
        for( int i = 0; i< 9999; i++){
            x = new int[i];
        }
    }
    
}
