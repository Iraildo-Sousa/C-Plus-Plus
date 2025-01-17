/* Descobrindo o tipo inteiro de 16 bits */

#include <iostream>
#include <climits> 

using namespace std;

int main (int argc, char ** argv) {

    short int total = SHRT_MAX;

    cout << sizeof total << endl;

    return 0;
}