#include <iostream> // para usar entradas e saidas

using namespace std; // para usar entradas e saidas (e nao usar toda hora std::)

int main (){
    float reais, dolares;

    cout << "Digite o valor em reais, que você possui." << endl;
    cin >> reais;

    dolares = reais / 4.97;

    cout << "\n\nCom R$ " << reais << " você poderia comprar, \n\n"<< "$" << dolares << " em 12 de março de 2024\n\n" << endl;

    



    
    return 0;
}
