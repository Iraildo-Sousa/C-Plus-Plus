/* Testando sizeof */

#include <iostream>
#include <climits>

using namespace std;

int main (int argc, char ** argv) {

    short numero_short = SHRT_MAX;
    int numero_int = INT_MAX;
    long numero_long = LONG_MAX;
    long long numero_longlong = LLONG_MAX;

    cout << "short tem: " << sizeof numero_short << " bytes." << endl;
    cout << "int tem: " << sizeof numero_int << " bytes." << endl;
    cout << "long tem: " << sizeof numero_long << " bytes." << endl;
    cout << "long long tem: " << sizeof numero_longlong << " bytes." << endl;

    cout << "\nShort: " << numero_short << "\nInt: " << numero_int << "\nLong: " << numero_long << "\nLong Long: " << numero_longlong << "\n";

    short numerom_short = SHRT_MIN;
    int numerom_int = INT_MIN;
    long numerom_long = LONG_MIN;
    long long numerom_longlong = LLONG_MIN;
    
    cout << "\nShort: " << numerom_short << "\nInt: " << numerom_int << "\nLong: " << numerom_long << "\nLong Long: " << numerom_longlong << "\n";


    return 0;
}