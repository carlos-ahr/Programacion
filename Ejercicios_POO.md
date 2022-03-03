```cpp
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Ali {
    public:
    int *imprimocomando;
    int miAli;
    Ali(){
        cout<<"Destructor ~ Ali llamado:"<<endl;
    }
    Ali (int miAlic):miAli(miAlic){
        cout<<"Constructor Ali ("<<miAlic<<")llamado"<<endl;
        imprimocomando = new int[1000];
        for (int i=0; i < miAlic;i++) imprimocomando[i]= miAlic *1000 + i;
    }
    ~Ali(){
        cout<<"Destructor ~ Ali llamado"<<endl;
        delete [] imprimocomando;
    }
};
int main (int argc, const char *argv[]){
    Ali t;
    t = Ali(5);
    cout<<"Investiga la llamada inesperada de undestructor de la clase Ali:";
    for (int i=0; i < t.miAli; i++) cout<<" "<<timprimocomando[i];
    cout<<endl;
    return 0;
}
```

"markdown-pdf.highlightStyle": "atom-one-dark.css"