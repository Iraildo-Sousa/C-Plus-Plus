/* Construa um programa que peça ao usuário o horário atual. Declare variáveis para receber a hora e os minutos separadamente. Após receber o horário atual, diga ao usuário que o relógio dele está uma hora atrasado, e mostre o horário certo, com ahora adiantada em uma hora. 

Que horas são? 10:54
O seu relógio está atrasado. Agora são 11:54.

Observação: O horário vai ser digitado no formato HH:MM. Trate de guardar os
dois pontos na leitura do horário, e de mostrá-los novamente na exibição do
resultado. Lembre-se que os pontos são um caractere. */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    int hora, data;
    char ponto;

    cout << "Que horas são agora? \n";
    cin >> hora; 
    cin >> ponto;
    cin >> data;

    cout << "Seu relógio está atrasado em uma hora, não são " << hora << ponto << data << " e sim, " << (hora + 1) << ponto << data << ".\n";

    return 0;
}