/* Buzinar ou não buzinar? */

/* CÓDIGO IMCOMPLETO */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    char entrada1, entrada2, entrada3, entrada4, entrada5, verdadeiro1 = 't', verdadeiro2 = 'r', verdadeiro3 = 'u', verdadeiro4 = 'e', falso1 = 'f', falso2 = 'a',falso3 = 'l',falso4 = 's', falso5 = 'e';
    int entradaASCII, verdadeiroASCII, falsoASCII;
    bool buzinar = false;

    cout << "Gostaria de buzinar? ";
    cin >> entrada1;
    cin >> entrada2;
    cin >> entrada3;
    cin >> entrada4;



    entradaASCII = entrada1 + entrada2 + entrada3 + entrada4;
    verdadeiroASCII = verdadeiro1 + verdadeiro2 + verdadeiro3 + verdadeiro4;
    falsoASCII = falso1 + falso2 + falso3 + falso4 + falso5;

    //buzinar = printf("%b", (entradaASCII == verdadeiroASCII) ? true : false);

    printf((entradaASCII == verdadeiroASCII) ? "Buzinaaaa\a\n" : (entradaASCII == falsoASCII) ?"Silêncio\n" : "Você digitou errado!\n");

    return 0;
}