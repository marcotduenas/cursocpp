#include <iostream>

typedef struct Cliente{
    std::string nome;
    std::string sobrenome;
    int pin;
} t_cliente;

void cadastroCliente(t_cliente c){
    std::cout << c.nome << " " << c.sobrenome << " - " << c.pin << '\n';
}

t_cliente pegaDados(){
    t_cliente c;
    std::cout << "Infomre seu nome\n";
    std::getline(std::cin, c.nome);
    std::cout << "Infomre seu sobrenome\n";
    std::getline(std::cin, c.sobrenome);
    std::cout << "Infomre seu PIN\n";
    std::cin >> c.pin;
    return c;
}

int main (int argc, char *argv[]){
    t_cliente dados_cliente;
    dados_cliente = pegaDados();
    cadastroCliente(dados_cliente);
    return 0;
}
