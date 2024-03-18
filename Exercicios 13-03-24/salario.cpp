#include <iostream>

using namespace std;

int main(){

    float salario, reajuste;

    cout << "\n\n Digite o salario, a ser reajustado" << endl;
    cin >> salario;

    reajuste = (salario + (salario*0.25));

    cout << "\n\n Salario Base: R$" << salario << "\n Salario Reajustado: R$" << reajuste << "\n\n" << endl; 

    return 0;
}