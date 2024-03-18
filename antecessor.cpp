#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float valor ,antecessor, sucessor, quadrado, raiz;

    cout << "\n\n Digite um valor: " << endl;
    cin >> valor;

    antecessor = valor - 1;
    sucessor = valor + 1;
    quadrado = valor * valor;
    raiz = sqrt(valor);

    cout << "\n\nValor digitado: " << valor <<"\n\n Antecessor: " << antecessor << "\n\n Sucessor: " << sucessor << "\n\n Quadrado: " << quadrado << "\n\n Raiz: " << raiz << endl;

    

    return 0;
}