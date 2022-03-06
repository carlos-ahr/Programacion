<h2 align="center">INSTITUTO POLITÉCNICO NACIONAL</h2>
<div>&nbsp;</div>
<div>&nbsp;</div>
<h2 align="center">Escuela Superior de Ingenieria Eléctrica y Mecánica Unidad Zacatenco</h2>
<div>&nbsp;</div>
<div>&nbsp;</div>
<h2 align="center">Programación Orientada a Objetos</h2>
<div>&nbsp;</div>
<div>&nbsp;</div>
<h2 align="center">1er Examen Departamental</h2>
<div>&nbsp;</div>
<div>&nbsp;</div>
<h2 align="center">Herrera Rangel Carlos Alberto</h2>
<div>&nbsp;</div>
<div>&nbsp;</div>
<h2 align="center">2AM2</h2>
<div>&nbsp;</div>
<div>&nbsp;</div>
<div style="page-break-after: always;"></div>
<h4>Instrucciones:</h4>

Realice un programa que calcule **perimetro**, **area** y **volumen** de un trapecio el cual debe incluir una clase, un constructor y un desctructor.

<h4>Código</h4>

```cpp
/*
HERRERA RANGEL CARLOS ALBERTO 2AM2
03/03/22
POO
EJERCICIO :
Clase, constructor y destructor, calcular perimetro, area y volumen de un trapecio.
*/
#include<iostream>
using namespace std;
class Trapecio{
    float baseMayor, baseMenor, altura, lado, largo;
    public:
    Trapecio(float B, float b, float a, float ld, float lr){baseMayor = B, baseMenor = b, altura = a, lado = ld, largo = lr;}
    ~Trapecio(){cout<<"Destruyendo objeto..."<<endl;}
    float perimetro(){return baseMayor + baseMayor + (lado * 2);}
    float area(){return ((baseMayor + baseMenor)/2) * altura;}
    float volumen(){return (((baseMayor + baseMenor)/2) * altura) * largo;}
};
int main(){
    Trapecio trap0(10.0, 8.0, 4.0, 9.5, 10.0);
    Trapecio trap1(11.0, 9.0, 5.0, 10.5, 11.0);
    cout<<"Trapecio 1: "<<endl<<"Perimetro: "<<trap0.perimetro()<<endl<<"Area: "<<trap0.area()<<endl<<"Volumen: "<<trap0.volumen()<<endl;
    cout<<"Trapecio 2: "<<endl<<"Perimetro: "<<trap1.perimetro()<<endl<<"Area: "<<trap1.area()<<endl<<"Volumen: "<<trap1.volumen()<<endl;
    return 0;
}
```

<div style="page-break-after: always;"></div>

<h4>Ejecutable</h4>

```powershell
$ g++ .\main3.cpp -o main3; .\main3.exe
Trapecio 1: 
Perimetro: 39
Area: 36
Volumen: 360
Trapecio 2: 
Perimetro: 43
Area: 50
Volumen: 550
Destruyendo objeto...
Destruyendo objeto...
```