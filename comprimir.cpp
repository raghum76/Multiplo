#include <stdio.h>
#include <iostream>
using namespace std;
void mostrar(int vec[],int tam);
void comprimir(int vec[],int tam);
int main()
{
    int tam=25, vec[tam]={1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5};
    comprimir(vec,tam);
    mostrar(vec,tam);
    return 0;
}
void comprimir(int vec[],int tam)
{
    int tem;
    for(int i=0;i<tam-1;i++)
    {
        if(vec[i]==vec[i+1])
        {
            vec[i+1]=-1;
        }
    }
    for(int i=0;i<tam-1;i++)
    {
        if(vec[i]==-1)
        {
            tem=vec[i];
            for(int x=i;x<tam-1;x++)
            {
                vec[x]=vec[x+1];
            }
            vec[tam-1]=tem;
        }
    }
}
void mostrar(int vec[],int tam)
{
    for(int i=0;i<tam-1;i++)
    {
        cout<<vec[i]<<endl;
    }
}
