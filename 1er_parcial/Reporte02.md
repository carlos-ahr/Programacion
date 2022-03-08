<h2 align="center">INSTITUTO POLITÉCNICO NACIONAL</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">ESCUELA SUPERIOR DE INGENIERÍA ELÉCTRICA Y MECÁNICA UNIDAD ZACATENCO</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">PROGRAMACIÓN ORIENTADA A OBJETOS</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">REPORTE DE PRÁCTICAS NO.2</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">CARLOS ALBERTO HERRERA RANGEL</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">2AM2</h2>

<div class="page"/>

## TABLA DE CONTENIDOS

- [TABLA DE CONTENIDOS](#tabla-de-contenidos)
- [INTRODUCCIÓN](#introducción)
- [DESARROLLO](#desarrollo)
  - [ALGORITMO](#algoritmo)
  - [PSEUDOCODIGO](#pseudocodigo)
  - [CODIGO](#codigo)
  - [EJECUTABLE](#ejecutable)
- [CONCLUSIONES](#conclusiones)
- [BIBLIOGRAFIA](#bibliografia)

<div class ="page"/>

## INTRODUCCIÓN

En esta practica se realizara la creacion de unn constuctor para una clase.

<div class ="page"/>

## DESARROLLO

### ALGORITMO

<div align="center">
  <img src="./01.png">
</div>

<div class = "page"/>

### PSEUDOCODIGO

```
incluir <iostream>
usar espacioNombre std;
clase Figura{
    entero lado, numLados, per, apotema;
    publico:
    Figura(entero l, entero nl, entero p, entero a){lado = l, numLados = nl, per = p, apotema = a;}
    entero perimetro(){retornar lado * numLados;}
    entero area(){return per * apotema;}
};
entero principal(){
    Figura pentagono(10, 5, 50, 6);
    salida<<"Perimetro: "<<pentagono.perimetro()<<finLinea<<"Area: "<<pentagono.area();
    retornar 0;
}
```

<div class ="page"/>

### CODIGO

```cpp
#include <iostream>
using namespace std;
class Figura{
    int lado, numLados, per, apotema;
    public:
    Figura(int l, int nl, int p, int a){lado = l, numLados = nl, per = p, apotema = a;}
    int perimetro(){return lado * numLados;}
    int area(){return per * apotema;}
};
int main(){
    Figura pentagono(10, 5, 50, 6);
    cout<<"Perimetro: "<<pentagono.perimetro()<<endl<<"Area: "<<pentagono.area();
}
```

<div class ="page"/>

### EJECUTABLE

```powershell
$ cd "c:\Users\xXC4R\Desktop\Programacion\1er_parcial\02-24-22\" ; if ($?) { g++ main.cpp -o main } ; if ($?) { .\main }
Perimetro: 50
Area: 300
```

<div class ="page"/>

## CONCLUSIONES

En esta practic aprendimos a configurar un constructor para una clase el cual nos ayudo a crear objetos de una manera mas sencilla y mas organizada.

<div class ="page"/>

## BIBLIOGRAFIA

- #### Ejercicios de clase