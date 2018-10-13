#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int lanzardado();
void histograma(int numero);
int main()
{
    int vec[12]={0};
    int dado;
    srand(time(0));
    for(int x=1;x<=100;x++)
    {
        dado=lanzardado()+lanzardado();
            vec[dado-1]++;

    }
    for(int x=0;x<12;x++)
    {
        cout<<"Valores en ";histograma(x+1);cout<<"\t"<<vec[x]<<endl;
    }
    return 0;
}

int lanzardado(){
    
    int res=0;
    res=1+rand()%6;
    return res;
}
void histograma(int numero)
{
    for(int i=1; i<=numero; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
