/* Overflow and Underflow*/

#include <iostream>
#include <climits>
#define ZERO 0

using namespace std;

int main (int argc, char ** argv) {

    short pedro = ZERO;
    unsigned short maria = ZERO;

    cout << "Pedro tem " << pedro << " reais." << endl;
    cout << "Maria tem " << maria << " reais." << endl;

    cout << endl << "Adicionando R$ 1 para cada um..." << endl << endl;
    pedro = pedro - 1;
    maria = maria - 1;

    cout << "Agora Pedro tem " << pedro << " reais." << endl;
    cout << "Agora Maria tem " << maria << " reais." << endl;

    return 0;
}
