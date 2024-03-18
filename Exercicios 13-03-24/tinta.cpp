#include <iostream>

using namespace std;

int main(){

    float largura, altura, area, litrosTinta, totalLitros;

   cout << "Qual a altura da parede?" << endl;
   cin >> altura;
   cout << "Qual a largura da parede?" << endl;
   cin >> largura;

   area = altura * largura;

   litrosTinta = 100 * (area / 2);

   totalLitros = litrosTinta / 1000;

   cout << "Para uma parede com area de " << area << " metros quadrados você precisará de " << totalLitros << " litros de tinta" << endl; 
    
    return 0;
}