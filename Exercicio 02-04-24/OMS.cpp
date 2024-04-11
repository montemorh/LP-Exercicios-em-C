#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
    int idade;

    cout << "Qual sua idade?" << endl;
    cin >>  idade;

    if (idade <= 12){
        cout << "Você é uma Criança de acordo com a OMS" << endl;
    }else if (idade >= 13 && idade <= 18){
        cout << "Você é um Adolescente de acordo com a OMS" << endl;
    }else if (idade >= 19 && idade <= 59){
        cout << "Você é um Adulto de acordo com a OMS" << endl;
    }else if (idade >= 60){
        cout << "Você é um Idoso de acordo com a OMS" << endl;
    }
    return 0;
}