/* testando mais formas de utilizar o define */

#include <iostream>
#define PI 3.14

using namespace std;

int main (int argc, char ** argv) {

    int diametro;
    float resultado;

    cout << "Calculadora de perímetro de uma circunferência\n\n" << "Digite os tamanho da diâmetro: ";
    cin >> diametro;

    resultado = PI * diametro;

    cout << "O perímetro de uma circunferência de " << diametro << " diâmetros é " << resultado << "." << endl;

    return 0;
}