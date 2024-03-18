#include <iostream>


using namespace std;

int main(){

    float imc,peso,altura;

    cout << "\n\nQual a seu peso? (Em KG): \n" << endl;
    cin >> peso;
    cout << "\n\nQual a sua altura? (Em centimetros): \n" << endl;
    cin >> altura;

    imc = (altura*altura) / peso;

    

    if (imc < 17){
        cout << "IMC: "<< imc << " - Muito abaixo do Peso" << endl;
    }else if (imc == 17 && imc < 18.49){
        cout << "IMC: "<< imc << " - Abaixo do Peso"<< endl;
    }else if (imc == 18.50 && imc < 24.99){
        cout << "IMC: "<< imc << " - Peso normal"<< endl;
    }else if (imc == 25 && imc < 29.99){
        cout << "IMC: "<< imc << " - Acima do peso"<< endl;
    }else if (imc == 30 && imc < 34.99){
        cout << "IMC: "<< imc << " - Obesidade I"<< endl;
    }else if (imc == 35 && imc < 39.99){
        cout << "IMC: "<< imc << " - Obesidade II (severa)"<< endl;
    }else if (imc > 40){
        cout << "IMC: "<< imc << " - Obesidade III (morbida)"<< endl;
    }

    return 0;
}