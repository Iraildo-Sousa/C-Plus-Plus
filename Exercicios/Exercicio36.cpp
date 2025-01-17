/* Testando um bit */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    int bit;
    unsigned char mascara, estado = 240;

    cout << "Qual bit deseja testar? ";
    cin >> bit;

    mascara = 1 << bit;
    printf("%s", (estado & mascara) ? "1 - Ligado\n" : "0 - Desligado\n");


    return 0;
}