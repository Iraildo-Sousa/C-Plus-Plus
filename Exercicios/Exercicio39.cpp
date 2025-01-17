/* Verificar os limites de números flutuantes no SO */

#include <iostream>
#include <cfloat>

using namespace std;

int main (int argc, char ** argv) {

    cout << "Números de Dígitos Significativos\n" <<endl;
    cout << "float: " << FLT_DIG << endl;
    cout << "double: " << DBL_DIG << endl;
    cout << "long double: " << LDBL_DIG << endl << endl;
    
    cout << "Valores Máximo dos Expoentes\n" << endl;
    cout << "float: " << FLT_MAX_10_EXP << endl;
    cout << "double: " << DBL_MAX_10_EXP << endl;
    cout << "long double: " << LDBL_MAX_10_EXP << endl;

    cout << "\nNúmero de Bits na Mantissa\n" << endl;
    cout << "float: " << FLT_MANT_DIG << endl;
    cout << "double: " << DBL_MANT_DIG << endl;
    cout << "long double: " << LDBL_MANT_DIG << endl;


    return 0;
}