/* Criando funções */

#include <iostream>

using namespace std;

void nome (); /* protótipo da função */

int main (int argc, char ** argv) {

    cout << "Seu nome é: ";
    nome(); /* função chamada */

    return 0;
}

/* Função criada */

void nome (void) {

    cout << "Iraildo Sousa" << endl;
    
}