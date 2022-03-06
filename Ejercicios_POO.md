<style>
    font-family: RobotoMono;
</style>

<h2 align="center" style="font-size: xx-large; font-weight: bolder;">Instituto Politécnico Nacional</h2>
<p>&nbsp;</p>
<h2 align="center" style="font-size: x-large; font-weight: bold;">Escuela Superior de Ingenieria Eléctrica y Mecánica Unidad   Zacatenco</h2>
<p>&nbsp;</p> 
<h3 align="center" style="font-size: x-large; font-weight: bold;">Programación Orientada a Objetos</h3>
<p>&nbsp;</p>
<h3 align="center" style="font-size: x-large; font-weight: bold;">Herrera Rangel Carlos Alberto</h3>
<p>&nbsp;</p>
<h3 align="center" style="font-size: x-large; font-weight: bold;">2AM2</h3>
<p>&nbsp;</p>
<div style="page-break-after: always"></div>

# Tabla de contenidos: #
- [Tabla de contenidos:](#tabla-de-contenidos)
- [Practicas 08/2/02/22](#practicas-0820222)
  - [Ejercicio 1](#ejercicio-1)
  - [Ejercicio 2](#ejercicio-2)
- [Practicas 09/2/02/22](#practicas-0920222)
  - [Ejercicio 1](#ejercicio-1-1)


<div style="page-break-after: always"></div>

# Practicas 08/2/02/22 #

## Ejercicio 1 ##

**Codigo:**
```c++
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nombre, boleta, promedio, profesor, numero, direccion;
    cout<<"Cual es tu nombre? ";
    getline(cin, nombre);
    cout<<"Cual es tu numero de boleta? ";
    getline(cin, boleta);
    cout<<"Cual es tu promedio? ";
    getline(cin, promedio);
    cout<<"Cual fue tu profesor de fundamentos de programacion? ";
    getline(cin, profesor);
    cout<<"Cual es tu numero? ";
    getline(cin, numero);
    cout<<"Cual es tu direccion? ";
    getline(cin, direccion);
    cout<<"Hola "<<nombre<<" Bienvenido al curso de programacion orientada a objetos!\nBoleta: "<< boleta<<"\nPromedio:"<<promedio<< "\nProfesor:"<<profesor<<"\nNumero: "<<numero<<"\nDireccion: "<< direccion;
    return 0;
}
```

<div style="page-break-after: always"></div>

**Ejecutable:**
```powershell
$ g++ .\main.cpp -o main; .\main.exe
Cual es tu nombre? Carlos Alberto Herrera Rangel
Cual es tu numero de boleta? 2022301065
Cual es tu promedio? 8
Cual fue tu profesor de fundamentos de programacion? -
Cual es tu numero? 9212035140
Cual es tu direccion? Propela 11
Hola Carlos Alberto Herrera Rangel Bienvenido al curso de programacion orientada a objetos!
Boleta: 2022301065
Promedio:8
Profesor:-
Numero: 9212035140
Direccion: Propela 11
```

<div style="page-break-after: always"></div>

## Ejercicio 2 ##

**Codigo**
```c++
#include <iostream>
#include <string>
#define pi 3.1416
using namespace std;
int main(){
    float area, radio;
    cout<<"Ingrese el radio: ";
    cin>>radio;
    area = (radio * radio) * pi;
    cout<<"El area es: "<<area;
    return 0;
}
```

**Ejecutbale**
```powershell
$ g++ .\main2.cpp -o main2; .\main2.exe
Ingrese el radio: 12
El area es: 452.39
```

<div style="page-break-after: always"></div>

# Practicas 09/2/02/22 #

## Ejercicio 1 #

**Ccodigo**
```cpp
#include <iostream>
using namespace std;
class cuadrado{
    int base, altura;
    public:
        void mostrar(int,int);
        int area(){return base * altura;}
};
void cuadrado::mostrar(int h, int b){
    base = b;
    altura = h;
}
int main(){
    cuadrado cuadrado1;
    cuadrado1.mostrar(2,6);
    cout<<"Area: "<<cuadrado1.area()<<endl;
    return 0;
}
```

<div style="page-break-after: always"></div>

**Ejecutable**
```powershell
$ g++ .\main.cpp -o main; .\main.exe   
Area: 12
```