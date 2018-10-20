#include <stdio.h>
#include <iostream>
using namespace std;
void imprimir(int v[]);

int main()
{
    int v[999];
    for(int i=0;i<1000;i++)
        v[i]=1;
    //Buscar subindices primos
    for(int i=2;i<1000;i++)
        for(int x=i+1;x<1000;x++)
            if (x%i==0)
                v[x]=0;
    //Imprimir el vector
    imprimir(v);

    return 0;
}
void imprimir(int v[])
{
    for(int i=0;i<1000;i++)
        if(v[i] == 1) cout<<i<<endl;
}
