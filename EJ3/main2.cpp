#include <iostream>
#include "circunferencia.cpp"
#include "decagono.cpp"
#include "pentagono.cpp"

using namespace std;

int main(){
    Geometria::Circulo c(7);
    cout<< "El area del circulo es: "<< c.calcularArea()<< endl;
    cout<< "El perimetro del circulo es: "<< c.calcularPerimetro()<< endl;
    Geometria::Decagono d(7, 9 );
    cout<< "El area del decagono es: "<< d.calcularArea()<< endl;
    cout<< "El perimetro del decagono es: "<< d.perimetro()<< endl;
    Geometria::Pentagono p(6, 8 );
    cout<< "El area del pentagono es: "<< p.calcularArea()<< endl;
    cout<< "El perimetro del pentagono es: "<< p.perimetro()<< endl;

}