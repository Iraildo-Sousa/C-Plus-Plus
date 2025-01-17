/* Bit a Bit */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    /* Trabalhando binário com inteiro positivo */

    unsigned char numero = 1;
    numero = ~numero;
    cout << (int)numero << endl;

    /* Deslocamento para a esquerda */

    numero = numero << 3;

    cout << (int)numero << endl;

    /* Deslocamento para a direita */

    numero = numero >> 1;

    cout << (int)numero << endl;

    /* AND & */

    /* O AND só é verdadeiro quando dois valores são verdadeiros, se houver um verdadeiro e um falso, então o resultado será falso. O código abaixo demostra que entre os números 170 e 7, só há duas sequências verdadeiras se comparado os binários de cada um. */

    numero = 170;
    numero = numero & 7;

    cout << (int)numero << endl;

    /* OR | */

    numero = 170;
    numero = numero | 15;

    cout << (int)numero << endl;

    /* XOR (^) */

    numero = 170;
    numero = numero ^ 15;

    cout << (int)numero << endl;


    return 0;
}