/* Funções com retono */

#include <iostream>

using namespace std;

/* Chamando a função */

double media (double number1, double number2);

/* Função main */

int main (int argc, char ** argv) {

    double number1, number2, result;

    cout << "Para saber a média entre dois números vou precisar que me informe eles.\n\nInforme o primeiro número: ";

    cin >> number1;
    cout << "\nAgora informe o segundo número: ";
    cin >> number2;

    result = media(number1, number2);

    cout << "\nA média entre " << number1 << " e " << number2 << " é igual à " << result << ".\n";

    return 0;
}

/*=========================================================
===========================================================*/

//função que calcula média

double media (double number1, double number2) {

    double result;

    result = (number1 + number2) / 2;

    return result;
}