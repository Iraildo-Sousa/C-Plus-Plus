/* Tipos inteiros */

#include <iostream>
#include <climits>

using namespace std;

int main (int argc, char ** argv) {

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "short tem " << sizeof n_short << " bytes." << endl;
    cout << "int tem " << sizeof (int) << " bytes." << endl;
    cout << "long tem " << sizeof n_long << " bytes." << endl;
    cout << "long long tem " << sizeof n_llong << " bytes.\n" << endl;

    return 0;
}