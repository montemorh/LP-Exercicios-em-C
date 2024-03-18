#include <iostream> // para usar entradas e saidas

using namespace std; // para usar entradas e saidas (e nao usar toda hora std::)

int main (){
    float metros, cm, mm;

    cout << "Digite o valor em metros desejado." << endl;
    cin >> metros;

    cm = metros*10;
    mm = cm*10;

    cout << "\n\n Valor em metros: " << metros << "\n\n Valor em Centrimetros: " << cm << "\n\n Valor em milimetros: " << mm << "\n\n" << endl;

    
    return 0;
}
