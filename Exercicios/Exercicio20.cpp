/* Função para converter metros em centímetros */

#include <iostream>

using namespace std;

/* Função */

int metrosCentimetros(int);

int main (int argc, char ** argv) {

    int numero, resultado;

    cout << "Digite um número para ser convertido em centímetros: ";
    cin >> numero;

    resultado = metrosCentimetros (numero);

    cout << numero << " metros convertido em centímetros, é igual à " << resultado << '.' << endl;

    return 0;
}

/* Função de conversão de metros para centímetros */

int metrosCentimetros (int metros) {

    return 100 * metros;
}
