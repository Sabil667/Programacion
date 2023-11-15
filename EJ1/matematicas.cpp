#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double n1,n2;
    cout<< "Introduce un numero: ";
    cin>> n1;
    cout<< "Introduce otro numero: ";
    cin>> n2;

    double suma = n1+n2;
    double resta = n1-n2;
    double multiplicacion = n1*n2;
    double division = n1/n2;
    double potencia = pow(n1,n2);
    double raiz = sqrt(n1);

    cout<< "La suma de los numeros es: "<< suma<< endl;
    cout<< "La resta de los numeros es: "<< resta<< endl;
    cout<< "La multiplicacion de los numeros es: "<< multiplicacion<< endl;
    cout<< "La division de los numeros es: "<< division<< endl;
    cout<< "La potencia del primer numero elevado al segundo es: "<< potencia<< endl;
    cout<< "La raiz cuadrada del primer numero es: "<< raiz<< endl;


}