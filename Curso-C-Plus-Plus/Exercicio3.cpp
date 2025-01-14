/* Testando argc and argv */

#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char ** argv) {

    cout << "Programa: " << argc << endl;
    cout << "Programa: " << argv[0] << endl;

    if (argc > 1)
        cout << "Arg: " << argv[1] << endl;

    return 0;
}