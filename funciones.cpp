#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int formula2(int x,int y,float &funcion);
int formula1(int x,float &funcion);
int formula3(int x, float &funcion);
int main()
{
    int op,maximo,x,res;
    float funcion;
    cout<<"Ingrese la funcion";
    cin>>op;
        while(op!=0)
        {
            
            switch(op){
                
                case 1:
                    cout<<"X"<<"\t"<<"Y"<<"\t"<<"f";
                    for(x=1;x<=5;x++)
                    {
                        res=formula2(x,x,funcion);
                        cout<<endl<<x<<"\t"<<x<<"\t"<<res;
                    }
                    
                    break;
                case 2:
                    cout<<"Ingrese el valor maximo";
                    cin>>maximo;
                    cout<<"X"<<"\t"<<"f";//crear una funcion para tabular
                    for(x=0;x<maximo;x++)
                    {
                        res=formula1(x,funcion);
                        cout<<endl<<x<<"\t"<<res;
                    }
                break;
                case 3:
                    cout<<"Ingresa el valor maximo";
                    cin>>maximo;
                    cout<<"X"<<"\t"<<"f";
                    for(x=0;x<maximo;x++)
                    {
                        res=formula3(x,funcion);
                        cout<<endl<<x<<"\t"<<res;
                    }
                break;
            }
            cout<<endl<<"Ingrese la funcion";
            cin>>op;
        }
        

    return 0;
}

int formula2(int x, int y,float &funcion){
    //Tabulare el valor en x y y de 0 a valor maximo
    funcion=2*x*y-3*y;
    return funcion;
    
}

int formula1(int x,float &funcion){
    double raiz=cbrt(2.0*pow(x,2.0));
    funcion=raiz/(2.0*x-3.0);
    return funcion;
}

int formula3(int x,float &funcion){
    if(x>0)
    {
        funcion=2*(pow(x,3));
    }
    else
    {
        funcion=3*(pow(x,2));
    }
    return funcion;
}
