/* Utilize instruções cin para ler o valor de horas e minutos para variáveis diferentes.

Que horas são? 15:50
15 horas
50 minutos

Dica: o separador “:” pode ser lido para uma variável do tipo char ou ignorado. */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    int horas, minutos;
    char pontoVirgula;

    cout << "Informe a hora atual: ";
    cin >> horas;
    cin >> pontoVirgula; 
    cin >> minutos;

    cout << "Então agora é " << horas << pontoVirgula << minutos << "." << endl;
    return 0;
}