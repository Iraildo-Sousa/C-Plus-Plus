/* Char */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    char letra;
    int conversor;

    cout << "Digite um caractere: ";
    cin >> letra;
    cout << "O caractere digitado é " << letra << ".\n";

    conversor = letra;

    cout << "O caracter " << letra << " convertido para código ASCII se torna: " << conversor << endl;

    letra = 77;
    
    cout << "\nO caracter " << letra << " convertido para código ASCII se torna: " << conversor << endl;

    return 0;
}