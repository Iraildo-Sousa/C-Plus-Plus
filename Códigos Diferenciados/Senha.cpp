/* Caracteres especiais */

#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    char alarme = '\a';
    
    char senha1 = 'A', senha2 = 'r', senha3 = 'r',senha4 = 'o',senha5 = 'z', senha6 = 'F', senha7 = 'r', senha8 = 'i', senha9 = 't', senha10 = 'o';

    char buffer1, buffer2, buffer3, buffer4, buffer5, buffer6, buffer7, buffer8, buffer9, buffer10;

    int bufferASCII, senhaASCII;

    cout << "Digite sua senha: __________\b\b\b\b\b\b\b\b\b\b";
    cin >> buffer1;
    cin >> buffer2;
    cin >> buffer3;
    cin >> buffer4;
    cin >> buffer5;
    cin >> buffer6;
    cin >> buffer7;
    cin >> buffer8;
    cin >> buffer9;
    cin >> buffer10;

    bufferASCII = buffer1 + buffer2 + buffer3 + buffer4 + buffer5 + buffer6 + buffer7 + buffer8 + buffer9 + buffer10; 
    
    senhaASCII = senha1 + senha2 + senha3 + senha4 + senha5 + senha6 + senha7 + senha8 + senha9 + senha10;

    printf((senhaASCII == bufferASCII) ? "\nSenha correta!\n" : "\a\a\a\nSenha incorreta!\n");

    return 0;
}
