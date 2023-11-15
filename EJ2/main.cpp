#include <iostream>
#include <cmath>
#include "circulo.cpp"
#include "cuadrado.cpp"
#include "rectangulo.cpp"
#include "triangulo.cpp"
#include "hexagono.cpp"

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








}