#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
    int salario, novoSalario;

    cout << "Qual seu salario atual?" << endl;
    cin >> salario;

    if (salario <= 3500){
        novoSalario = (salario * 0.1) + salario;
        cout << "Novo Salario: " << novoSalario << endl;
    } else if (salario > 3500){
        novoSalario = (salario * 0.05) + salario;
        cout << "Novo Salario: " << novoSalario << endl;
    }

    return 0;
}