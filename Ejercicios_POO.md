<h1 align="center">INSTITUTO POLITECNICO NACIONAL<h1>
<h2 align="center">ESCUELA SUPERIOR DE INGENIERIA ELECTRICA Y MECANICA UNIDAD ZACATENCO</H2>
<h3 align="center">PROGAMACION ORIENTADA A OBJETOS</h3>
<h4 align="center">HERRERA RANGEL CARLOS ALBERTO</h4>
<h4 align="center">2AM2</h4>

<div style="page-break-after: always"></div>

## EJERCICIOS 02/08/22

### EJERCICIO 1:

`CODIGO:`
```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nombre, boleta, promedio, profesor, numero, direccion;
    cout << "Cual es tu nombre? ";
    getline (cin, nombre);
    cout << "Cual es tu numero de boleta? ";
    getline(cin, boleta);
    cout << "Cual es tu promedio? ";
    getline(cin, promedio);
    cout << "Cual fue tu profesor de fundamentos de programacion? ";
    getline(cin, profesor);
    cout << "Cual es tu numero? ";
    getline(cin, numero);
    cout << "Cual es tu direccion? ";
    getline(cin, direccion);
    cout << "Hola " << nombre << " Bienvenido al curso de programacion orientada a objetos!\nBoleta: " << boleta << "\nPromedio:" << promedio << "\nProfesor:" << profesor << "\nNumero: " << numero << "\nDireccion: " << direccion;
    return 0;
}
```

<div style="page-break-after: always"></div>

`EJECUTABLE:`

```bash
$ g++ main.cpp -o main; .\main.exe
Cual es tu nombre? Carlos Herrera
Cual es tu numero de boleta? 2022301065
Cual es tu promedio? 8
Cual fue tu profesor de fundamentos de programacion? -
Cual es tu numero? 9212035140
Cual es tu direccion? Propela 11
Hola Carlos Herrera Bienvenido al curso de programacion orientada a objetos!
Boleta: 2022301065
Promedio:8
Profesor:-
Numero: 9212035140
Direccion: Propela 11
```