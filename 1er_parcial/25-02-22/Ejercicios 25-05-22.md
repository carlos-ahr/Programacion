# ****EJERCICIOS DEL 25 DE FEBRERO DEL 2022****
## Ejercicio 1:

Codigo:

```cpp
#include <iostream>
using namespace std;
class Rectangulo{
    int base, altura;
    public:
    Rectangulo(int b, int h):base(b), altura(h){};
    Rectangulo() = default;
    Rectangulo(const Rectangulo & other) = delete;
    int area(){return base * altura;};
};
int main(){
    Rectangulo rec(6,7);
    Rectangulo rec1(5,7);
    cout << "Area: " << rec.area() << endl;
    cout << "Area 2 : " << rec1.area() << endl;
    return 0;
    }
```

Ejecutable:

```sh
$ g++ main16.cpp -o main16; ./main16.exe
Area: 42
Area 2: 35
```

<div style="page-break-after: always;"></div>

## Ejercicio 2

Codigo:
```cpp
#include <iostream>
using namespace std;
class demostracion{
public:
    demostracion();
    ~demostracion();
};
demostracion::demostracion(){
    cout << "Se acaba de definir un object, el constructor esta corriendo" << endl;
}
demostracion::~demostracion(){
    cout << "El destructor esta corriendo" << endl;
}
int main(){
    demostracion demo;
    cout << "El object esta apunto de ser destruido" << endl;
    return 0;
}
```

Ejecutable:

```sh
$ g++ main17.cpp -o main17; ./main17.exe 
Se acaba de definir un object, el constructor esta  corriendo
El object esta apunto de serdestruido
El destructor esta corriendo
```

<div style="page-break-after: always;"></div>

## Ejercicio 3

Codigo:

```cpp
#include <iostream>
using namespace std;
class Mascota{
public:
virtual ~Mascota() = 0;
};
Mascota::~Mascota(){
    cout << "~Mascota()" << endl;
}
class Perro : public Mascota{
    public:
    ~Perro(){
        cout << "~Perro()" << endl;
    }
};
int main(){
    Mascota *p = new Perro;
    delete p;
    return 0;
}
```

Ejecutable:

```sh
$ g++ main18.cpp -o main18; ./main18.exe
~Perro()
~Mascota()
```

<div style="page-break-after: always;"></div>

## Ejercicio 4

Codigo:

```cpp
#include <iostream>
using namespace std;
class Ficticia{
    public:
    static int n;
    Ficticia(){n++;}
};
int Ficticia::n = 0;
int main(){
    Ficticia a;
    Ficticia b[5];
    cout << a.n << endl;
    Ficticia *c = new Ficticia;
    cout << Ficticia::n << endl;
    delete c;
}
```

Ejecutable:

```sh
$ g++ main19.cpp -o main19; ./main19.exe
6
7
```