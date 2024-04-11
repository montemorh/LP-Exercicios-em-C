#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
    int n1,n2,n3;

    cout << "Escreva N1" << endl;
    cin >> n1;
    cout << "Escreva N2" << endl;
    cin >> n2;
    cout << "Escreva N3" << endl;

    if (n1 < n2 && n1 < n3){
        cout << "Menor numero: " << n1 << endl;
    }else if (n2 < n1 && n2 < n3){
        cout << "Menor numero: " << n2 << endl;
    }else if (n3 < n1 && n3 < n2){
        cout << "Menor numero: " << n3 << endl;
    }

    return 0;
}