<h2 align="center">Ejercicios de clase 10/03/22</h2>

### Ejercicio 1

Codigo:
```cpp
/* 
HERRERA RANGEL CARLOS ALBERTO 2AM2
10-03-2022
EJERCICIO 1:
Ejemplo de una clase derivada con un "friend"
*/
#include<iostream>
using namespace std;
class Cuadrado;
class Rectangulo{
    int base, altura;
    public:
        int area(){return base*altura;}
        void convertir(Cuadrado x);
};
class Cuadrado{
    friend Rectangulo;
    private:
        int lado;
    public:
    Cuadrado(int x): lado(x){}
};
void Rectangulo::convertir(Cuadrado x){
    base = x.lado;
    altura = x.lado;
}
int main(){
    Rectangulo rect;
    Cuadrado cuad(8);
    rect.convertir(cuad);
    cout<<"Area: "<<rect.area()<<endl;
    return 0;
}
```

Ejecutable:
```
$ cd "c:\Users\xXC4R\Desktop\Programacion\2ndo_parcial\03-10-22\" ; if ($?) { g++ main.cpp -o main } ; if ($?) { .\main } 
Area: 64
```

### Ejercicio 2

Codigo:
```cpp
/* 
HERRERA RANGEL CARLOS ALBERTO 2AM2
10-03-2022
EJERCICIO 2:
Ejemplo de una clase derivada con herencia
*/
#include<iostream>
using namespace std;
class Poligono{
    protected:
        int base, altura, dMayor, dMenor;
    public:
        void config(int b, int h, int D, int d){base = b, altura = h, dMayor = D, dMenor = d;}
};
class Rectangulo: public Poligono{
    public:
        int area(){return base*altura;}
};
class Triangulo: public Poligono{
    public:
        int area(){return (base*altura)/2;}
};
class Rombo: public Poligono{
    public:
        int area(){return (dMayor*dMenor)/2;}
};
class Trapecio: public Poligono{
    public:
        int area(){return (dMayor*dMenor)/2;}
};
int main(){
    Rectangulo rec0;
    Triangulo tria0;
    Rombo rom0;
    Trapecio tra0;
    rec0.config(2, 4, 0, 0);
    tria0.config(2, 4, 0, 0);
    rom0.config(0, 0, 2, 4);
    tra0.config(0, 0, 2, 4);
    cout<<"AREA"<<endl<<"Rectangulo:\t"<<rec0.area()<<endl<<"Triangulo:\t"<<tria0.area()<<endl<<"Rombo:\t\t"<<rom0.area()<<endl<<"Trapecio\t"<<tra0.area()<<endl;
    return 0;
}
```

Ejecutable:
```
$ cd "c:\Users\xXC4R\Desktop\Programacion\2ndo_parcial\03-10-22\" ; if ($?) { g++ main2.cpp -o main2 } ; if ($?) { .\main2 }
AREA
Rectangulo:     8
Triangulo:      4
Rombo:          4
Trapecio        4
```

### Ejercicio 3

Codigo:
```cpp
/* 
HERRERA RANGEL CARLOS ALBERTO 2AM2
10-03-2022
EJERCICIO 3:
EJERCICIO de una clase derivada con herencia
*/
#include<iostream>
using namespace std;
class Poligono{
    protected:
        int lado, apotema;
    public:
        void config(int l, int a){lado = l, apotema = a;}
};
class Pentagono: public Poligono{
    public: 
        int area(){return ((lado*apotema)*5)/2;}
};
class Hexagono: public Poligono{
    public: 
        int area(){return ((lado*apotema)*6)/2;}
};
class Heptagono: public Poligono{
    public: 
        int area(){return ((lado*apotema)*7)/2;}
};
int main(){
    Pentagono pen0;
    Hexagono hex0;
    Heptagono hep0;
    pen0.config(5, 6);
    hex0.config(6, 7);
    hep0.config(7, 8);
    cout<<"AREA\n"<<"Pentagono:\t"<<pen0.area()<<endl<<"Hexagono:\t"<<hex0.area()<<endl<<"Heptagono:\t"<<hep0.area()<<endl;
    return 0;
}
```

Ejecutable:
```
$ cd "c:\Users\xXC4R\Desktop\Programacion\2ndo_parcial\03-10-22\" ; if ($?) { g++ main3.cpp -o main3 } ; if ($?) { .\main3 }
AREA
Pentagono:      75
Hexagono:       126
Heptagono:      196
```