#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
    int ano, anoatual, resultado;

    cout << "Informe o ano de nascimento" << endl;
    cin >> ano;
    cout << "Informe o ano atual" << endl;
    cin >> anoatual;

    resultado = anoatual - ano;

    if (resultado < 18){
        cout << "Voce nao pode tirar CNH" << endl;
    }else{
        cout << "Voce pode tirar CNH" << endl;
    }

    return 0;
}