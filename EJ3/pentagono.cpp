#include <cmath>
namespace Geometria{
    class Pentagono{
        private:
            double lado1;
            double lado2;

        public:
        Pentagono(double lado, double lado2): lado1(lado), lado2(lado2) {}

        double calcularArea(){
            return (lado1 * lado2)/2;

        }
        double perimetro(){
            return (5 * lado1);
        }

        };
    };