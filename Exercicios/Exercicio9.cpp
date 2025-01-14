/* Testando a entrada cin */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    int cenoura, abacaxi, tomate;

    cout << "Informe o número de cenouras abacaxis e tomates: " << endl;
    cin >> cenoura >> abacaxi >> tomate;

    cout << "Então temos " << cenoura << " cenouras, " << abacaxi << " abacaxis e " << tomate << " tomates." << endl;

    return 0;
}