#include <iostream>

using namespace std;

int main (){
    float consumo, km, litros;

    cout << "\n\n Quantos KM foram rodados? (quilometros)" << endl;
    cin >> km;
    cout << "\n\n Quantos litros de combustivel foi abastecido?" << endl;
    cin >> litros;

    consumo = km / litros;

    cout << "Consumo: " << round(consumo) << "Km/L" << endl;

    return 0;
}