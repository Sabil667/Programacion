#include <iostream>

namespace Ciencia{

    namespace Fisica{
        const double velocidadLuz = 299792458;

        double calcularEnergia(double masa){
            return masa * velocidadLuz * velocidadLuz;
        }

    }

    namespace Gravedad {

        const double aceleacionGravedad = 9.8;

        double calcularPeso(double masa){
            return masa * aceleacionGravedad;
        }
    }

    namespace Quimica {
        double calcularMolaridad(double moles, double litros){
            return moles / litros;
        }
    }

}

int main(){
    using namespace std;
    using namespace Ciencia::Fisica;
    using namespace Ciencia::Gravedad;
    using namespace Ciencia::Quimica;

    double masa,moles,litros;
    cout<< "Introduzca la masa: ";
    cin>> masa;

    double energia = calcularEnergia(masa);
    cout<< "La energia es: "<< energia<< endl;

    cout<<"Introduzca la masa del objeto1: ";
    cin>> masa;

    double peso = calcularPeso(masa);
    cout<< "El peso es: "<< peso<< endl;

    cout<<"Introduzca los moles: ";
    cin>> moles;
    cout<<"Introduzca los litros: ";
    cin>> litros;

    double molaridad = calcularMolaridad(moles, litros);
    cout<<"La molaridad es: "<< molaridad<<"moles/litros"<< endl;


}