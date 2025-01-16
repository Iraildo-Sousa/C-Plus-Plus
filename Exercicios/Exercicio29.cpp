/* constantes e endereços na memória */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    int total = 100000000 + 200000000;
    long long multiplicado = 100000000ll * 200000000; 

    cout << "Total: " << total << endl;
    cout << "Multi: " << multiplicado << endl;

    return 0;
}