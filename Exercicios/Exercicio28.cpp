/* unsigned short */

#include <iostream>
#include <climits>
#define ZERO 0

using namespace std;

int main (int argc, char ** argv) {

    short comNegativos = ZERO;
    unsigned short semNegativos = ZERO;

    cout << "Com negativos " << comNegativos << ".\n";
    cout << "Sem negativos " << semNegativos << ".\n" << endl;

    comNegativos = comNegativos - 1;
    semNegativos = semNegativos - 1;

    cout << "Com negativos " << comNegativos << ".\n";
    cout << "Sem negativos " << semNegativos << ".\n" << endl;

    return 0;
}