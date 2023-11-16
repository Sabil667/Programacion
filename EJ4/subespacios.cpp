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

    double masa,


}