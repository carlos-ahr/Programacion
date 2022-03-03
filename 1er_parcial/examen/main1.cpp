/*
HERRERA RANGEL CARLOS ALBERTO 2022301065
03/03/22
POO
EJERCICIO 1:
Clase de area, volumen y perimetro de un trapecio.
*/
#include<iostream>
using namespace std;
class Trapecio{
    float baseMayor, baseMenor, altura, lado, largo;
    public:
    void calcular(float B, float b, float a, float ld, float lr){baseMayor = B, baseMenor = b, altura = a, lado = ld, largo = lr;}
    float perimetro(){return baseMayor + baseMayor + (lado * 2);}
    float area(){return ((baseMayor + baseMenor)/2) * altura;}
    float volumen(){return (((baseMayor + baseMenor)/2) * altura) * largo;}
};
int main(){
    Trapecio trap0, trap1;
    trap0.calcular(10.0, 8.0, 4.0, 9.5, 10.0);
    trap1.calcular(11.0, 9.0, 5.0, 10.5, 11.0);
    cout<<"Trapecio 1: "<<endl<<trap0.perimetro()<<endl<<trap0.area()<<endl<<trap0.volumen()<<endl;
    cout<<"Trapecio 2: "<<endl<<trap1.perimetro()<<endl<<trap1.area()<<endl<<trap1.volumen()<<endl;
    return 0;
}