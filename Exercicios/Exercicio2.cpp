/* Quantas horas tem "X" dias? */

#include <iostream>

using namespace std;

int main () {

    int dias, horas = 24;

    cout << "Informe o número de dias: ";
    cin >> dias;

    horas = horas * dias;

    cout << dias << " tem " << horas << " horas." << endl;
    
    return 0;
}