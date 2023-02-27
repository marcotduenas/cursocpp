#include "conversor.h"

void _help(){
    std::cout << "Uso: conversor <--parametro> valor\n"
                 " --dec2bin Para converter de decimal para binário\n"
                 "--bin2dec Para converter de binário para decimal\n";
}

void dec2bin( int n ){
    int arr_binario[32], i = 0;
    while(n > 0){
        arr_binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int k = i - 1; k >= 0; k--){
        std::cout << arr_binario[k];
    }

    std::cout << '\n';
} 

int bin2dec(int n){
    int ultimo_digito = { 0 }, num_dec = { 0 }, base = { 1 };
    while(n){
        ultimo_digito = n % 10;
        n = n/ 10;
        num_dec += ultimo_digito * base;
        base = base * 2;
    }
    return num_dec;
}

bool check_args( char * x){
    bool t = { true };

    for (int i = 0; i < strlen(x); i++) {
       if( isdigit( x[i]) == false ){
           t = false;
       }

    }

    return t;
}

void _start( int argc, char *argv[] ){
    if (argc > 2){
        std::string param = argv[1];
        int valorInserido = std::stoi(argv[2]);

        if(!check_args(argv[2])){
            _help();
            return;
        }

        if (param == "--dec2bin"){
            dec2bin(valorInserido);
        }else if(param == "--bin2dec"){
            std::cout << bin2dec(valorInserido) << '\n';
        }else{
            _help();
        }
    }else{
        _help();
    }
}
