/* Criar mais de uma função e depois adicionar todas na função main */

#include <iostream>

using namespace std;

void natal ();
void anoNovo ();

int main (int argc, char ** argv) {

    natal ();
    anoNovo ();

    return 0;
}

void natal () {

    cout << "Feliz natal e ";
    
}

void anoNovo () {

    cout << "próspero ano novo!" << endl;

}