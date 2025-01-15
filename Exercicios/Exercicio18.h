char parImpar (int);

/* Função par ou ímpar */

#include <iostream>

char parImpar (int imparPar) {

    char texto;

    imparPar = imparPar % 2;

    texto = printf(("%s", imparPar == 1) ? "Seu número é ímpar\n" : "Seu número é par.\n");

    return texto;

}