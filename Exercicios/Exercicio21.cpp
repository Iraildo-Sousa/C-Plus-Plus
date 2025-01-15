/* Ler senha */

#include <iostream>

using namespace std;

void alarme();
int lerSenha();

int main (int argc, char ** argv) {

    cout << "Inicializando...\n";
    alarme();
    cout << "Senha: ";
    int senha = lerSenha();

    return 0;
}

void alarme () {

    cout << '\a';
}

int lerSenha () {

    int n;
    cin >> n;
    
    return n;
}