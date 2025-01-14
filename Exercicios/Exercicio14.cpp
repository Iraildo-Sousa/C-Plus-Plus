/* Trabalhando com rand e srand*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (int argc, char ** argv) {

    srand (time (NULL));

    int numero1 = rand();
    
    cout << numero1 << endl;

    printf((numero1 > 16834) ? "GRANDE\n" : "PEQUENO\n"); 

    /*if (numero1 > 16834) {

        cout << "GRANDE" << endl;

    }

    else {

        cout << "PEQUENO" <<endl;

    }*/

    int numero2 = rand ();
    
    cout << rand() << endl;
    printf((numero2 > 16834) ? "GRANDE\n" : "PEQUENO\n");

    cout << rand() << endl;


    return 0;
}