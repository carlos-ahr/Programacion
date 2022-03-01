# EJERCICIOS DE CLASE 01/03/22

## EJERCICIO 1:

Codigo:

```cpp
#include <iostream>
using namespace std;
int operacion(int a, int b){
    return a * b;
}
double operacion(double a, double b){
    return a / b;
}
int main(){
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;
    cout << operacion(x,y) << endl;
    cout << operacion(n, m) << endl;
    return 0;
}
```

Exjecutable:

```sh
$ g++ .\main0.cpp -o main0; .\main0.exe  
10
2.5
```

<div style = "page-break-after: always"></div>

## EJERCICIO 2

Codigo:

```cpp
#include <iostream>
using namespace std;
class Circunferencia{
    double radio;
    public:
    Circunferencia(double r){radio = r;}
    double area(){return (radio * radio) * 3.1416;}
    double perimetro(){return 2 * radio * 3.1416;}
    double volumen(){return 4/3*(3.1416)*(radio * radio * radio);}
};
int main(){
    Circunferencia cir0(10.0);
    cout << "Area: " << cir0.area() << endl << "Perimetro: " << cir0.perimetro() << endl << "Volumen: " << cir0.volumen() << endl;
    return 0;
}
```

Ejecutable:

```sh
$ g++ main1.cpp -o main1; .\main1.exe
Area: 314.16
Perimetro: 62.832
Volumen: 3141.6
```

<div style="page-break-after: always"></div>

## EJERCICIO 3

Codigo:

```cpp
#include<iostream>
using namespace std;

class Rec{
    int base, altura, ancho;
    public:
    Rec(int b, int h, int a){base = b, altura = h, ancho = a;}
    ~Rec(){cout << "Objeto destuido";}
    int area(){return base * altura;}
    int perimetro(){return 2 * (base) + 2 * (altura);}
    int volumen(){return base * altura * ancho;}
};

int main(){
    Rec *rec;
    rec = new Rec(2, 4, 6);
    cout << "Area: " << rec->area() << endl << "Perimetro: " << rec->perimetro() << endl << "Volumen: " << rec->volumen() << endl;
    delete rec;
    return 0;
}

```

Ejecutable:

```sh
$ g++ main2.cpp -o main2; .\main2.exe
Area: 8
Perimetro: 12
Volumen: 48
Objeto destuido
```

<div style="page-break-after: always"></div>

## EJERCICIO 4

Codigo:

```cpp
#include<iostream>
using namespace std;
class Rec{
    int base, altura, ancho;
    public:
    Rec(int b, int h, int a){base = b, altura = h, ancho = a;}
    ~Rec(){cout << "Objeto destuido \n";}
    int area(){return base * altura;}
    int perimetro(){return 2 * (base) + 2 * (altura);}
    int volumen(){return base * altura * ancho;}
};
int main(){
    Rec obj(2,3,4);
    Rec *foo, *bar, *baz;
    foo = &obj;
    bar = new Rec(1, 2, 3);
    baz = new Rec[2]{{4, 5, 6},{7, 8, 9}};
    cout << "AREAS: " << endl << "Foo: " << foo->area() << "\t" << "Bar: " << bar->area() << "\t" << "Baz: " << baz->area() << endl;
    cout << "PERIMETRO: " << endl << "Foo: " << foo->perimetro() << "\t" << "Bar: " << bar->perimetro() << "\t" << "Baz: " << baz->perimetro() << endl;
    cout << "VOLUMEN: " << endl << "Foo: " << foo->volumen() << "\t" << "Bar: " << bar->volumen() << "\t" << "Baz: " << baz->volumen() << endl;
    foo->~Rec();
    bar->~Rec();
    baz->~Rec();
    return 0;
}
```

<div stye="page-break-after: always"></div>

Ejecutable:
```sh
$ g++ main3.cpp -o main3; .\main3.exe
AREAS: 
Foo: 6  Bar: 2  Baz: 20
PERIMETRO: 
Foo: 10 Bar: 6  Baz: 18
VOLUMEN: 
Foo: 24 Bar: 6  Baz: 120
Objeto destuido 
Objeto destuido 
Objeto destuido 
Objeto destuido 
```