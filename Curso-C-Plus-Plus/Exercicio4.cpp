/* Testando quebra de linha com \n, endl e cout */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    cout << "Bem vindo \nao mundo \ndo C++!\n";
    cout << "Bem vindo " << endl << "ao mundo " << endl << "do C++!" << endl;

    cout << "Bem vindo\n";
    cout << "ao mundo\n";
    cout << "do C++!";

    cout << "Bem vindo" << endl;
    cout << "ao mundo" << endl;
    cout << "do C++!" << endl;

    return 0;
}