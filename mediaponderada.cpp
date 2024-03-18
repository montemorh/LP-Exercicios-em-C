#include <iostream> // para usar entradas e saidas
#include <locale.h> // para ysar setlocale
#include <stdlib.h> // para usar system

using namespace std; // para usar entradas e saidas (e nao usar toda hora std::)

int main (){
    float n1,n2, media;

    cout << "Digite a nota 1" << endl;
    cin >> n1;
    cout << "Digite a nota 2" << endl;
    cin >> n2;

    media = ((n1+(n1*0.4)) + (n2+(n2*0.6))) / 2;

    cout << "Sua nota e:" << media << endl;

    if(media >= 7 && media < 11){
        cout << "Aprovado" << endl;
    }else{
        cout << "Reprovado" << endl;
    }

    return 0;
}
