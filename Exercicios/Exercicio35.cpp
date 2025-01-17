/* Operações com bits com | */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    int bit;
    unsigned char mascara, estado;

    cout << "Qual bit deseja ligar? ";
    cin >> bit;

    mascara = 1 << bit;
    estado = 252 | mascara;

    cout << int(estado) << endl;

    return 0;
}