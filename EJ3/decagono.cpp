namespace Geometria{
    class Decagono{
        private:
            double lado1;
            double lado2;
        public:
            Decagono(double lado, double lado2): lado1(lado), lado2(lado2) {}
            double calcularArea(){
                return (lado1 * lado2)/2;

            }
          double perimetro(){
                    return (10 * lado1);
                }
    };


}