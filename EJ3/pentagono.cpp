#include <cmath>
namespace Geometria{
    class Pentagono{
        private:
            double lado;
            double apotema;
        public:
            Pentagono(double lado, double apotema);


            double area(){
                return(0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(lado, 2));
            }
            double perimetro(){
                return(5 * lado);
            }
    };


}