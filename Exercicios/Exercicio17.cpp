/* Funções com operdor ternário */

#include <iostream>

using namespace std;

char parImpar (int);

int main (int argc, char ** argv) {

    int number;

    cout << "Vamos descobrir se seu número é par ou ímpar. Por gentileza informe um número: ";
    cin >> number;

    parImpar (number);

    return 0;
}


/* Função par ou ímpar */

char parImpar (int imparPar) {

    char texto;

    imparPar = imparPar % 2;

    texto = printf(("%s", imparPar == 1) ? "Seu número é ímpar\n" : "Seu número é par.\n");

    return texto;

}