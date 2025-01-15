/* Testando a chamada de bibliotecas */

#include <iostream>
#include "Exercicio18.h"

using namespace std;

int main (int argc, char ** argv) {

    int number;

    cout << "Informe um número: ";
    cin >> number;

    parImpar (number);

    return 0;
}