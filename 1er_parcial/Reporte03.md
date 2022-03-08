<h2 align="center">INSTITUTO POLITÉCNICO NACIONAL</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">ESCUELA SUPERIOR DE INGENIERÍA ELÉCTRICA Y MECÁNICA UNIDAD ZACATENCO</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">PROGRAMACIÓN ORIENTADA A OBJETOS</h2>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2 align="center">REPORTE DE PRÁCTICAS NO.3</h2>
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

En esta practica se realizara la creacion de una clase, con un constructor y un destructor, estos sirven para crear un objeto de una clase y cuando este ya no se ocupa liberar el espacio ocupado en memoria

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
incluir <string>
usar espacioNombre std;
clase ejemplo{
    cadena *ptr;
    publico:
      ejemplo():ptr(nueva cadena){}
      ejemplo(constante cadena& str):ptr(nueva cadena(str)){}
      ~ejemplo(){eliminar ptr;}
      constante cadena& contenido(){retornar *ptr;}
};
entero principal(){
    ejemplo foo("foo");
    ejemplo bar("bar");
    salida<<"foo contenido: "<<foo.contenido()<<finLinea;
    salida<<"bar contenido: "<<bar.contenido()<<finLinea;
    retornar 0;
}
```

<div class ="page"/>

### CODIGO

```cpp
#include <iostream>
#include <string>
using namespace std;
class ejemplo{
    string *ptr;
    public:
    ejemplo():ptr(new string){}
    ejemplo(const string& str):ptr(new string(str)){}
    ~ejemplo(){delete ptr;}
    const string& contenido(){return *ptr;}
};
int main(){
    ejemplo foo("foo");
    ejemplo bar("bar");
    cout<<"foo contenido: "<<foo.contenido()<<endl;
    cout<<"bar contenido: "<<bar.contenido()<<endl;
    return 0;
}
```

<div class ="page"/>

### EJECUTABLE

```powershell
$ cd "c:\Users\xXC4R\Desktop\Programacion\1er_parcial\03-02-22\" ; if ($?) { g++ main.cpp -o main } ; if ($?) { .\main }
foo contenido: foo
bar contenido: bar
```

<div class ="page"/>

## CONCLUSIONES

En esta practic aprendimos a crear una clase con un constructor y destructor para eficientar el codigo

<div class ="page"/>

## BIBLIOGRAFIA

- #### Ejercicios de clase