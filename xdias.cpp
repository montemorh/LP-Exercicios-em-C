#include <iostream>

using namespace std;

int main(){
    int dias, horas;

    cout << "Digite a quantidade de dias para conversao em horas" << endl;
    cin >> dias;

    horas = (dias * 24);

    cout << "Dias: " << dias << " Convertido em Horas: " << horas << "hrs."<< endl;

    return 0;
}