/* Utilize apenas uma instrução cin para ler as três informações abaixo para variáveis diferentes. Multiplique o valor das variáveis altura, largura e comprimento para achar o volume do cubo.

Entre com a altura, largura e comprimento:
2.1 3.5 5.0
O volume é 36.75 cm cúbicos. */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    float altura, largura, comprimento, total;

    cout << "Informe a largura do cubo, em seguida a altura e por fim o comprimento: " << endl;

    cin >> altura >> largura >> comprimento;

    total = altura * largura * comprimento;

    cout << "O volume do cubo é de " << total << endl;

    return 0;
}