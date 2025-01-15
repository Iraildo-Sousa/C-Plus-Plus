/* #define */

#include <iostream>
#define segundosPorHora 3600;

using namespace std;

int main (int argc, char ** argv) {

    int horas, segundos;

    cout << "Digite um horário para descobrirmos quantos segundo que tem: ";
    cin >> horas;

    segundos = horas * segundosPorHora;

    cout << horas << " tem " << segundos << " segundos.\n";

    return 0;
}