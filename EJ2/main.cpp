#include <iostream>
#include <cmath>
#include "circulo.cpp"
#include "cuadrado.cpp"
#include "rectangulo.cpp"
#include "triangulo.cpp"
#include "hexagono.cpp"

using namespace std;

int main() {
    double radio=12;
    double basetriangulo=4;
    double alturatriangulo=5;
    double baserectangulo=8;
    double alturarectangulo=6;
    double ladocuadrado=10;
    double ladohexagono=7;

    double areacirculo = Geometria::areaCirculo(radio);
    double areatriangulo = Geometria::areaTriangulo(basetriangulo, alturatriangulo);
    double arearectangulo = Geometria::areaRectangulo(baserectangulo, alturarectangulo);
    double areacuadrado = Geometria::areaCuadrado(ladocuadrado);
    double areahexagono = Geometria::areaHexagono(ladohexagono);


    cout<< "El area del circulo es: "<< areacirculo<< endl;
    cout<< "El area del triangulo es: "<< areatriangulo<< endl;
    cout<< "El area del rectangulo es: "<< arearectangulo<< endl;
    cout<< "El area del cuadrado es: "<< areacuadrado<< endl;
    cout<< "El area del hexagono es: "<< areahexagono<< endl;






}