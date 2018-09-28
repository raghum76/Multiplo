#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
float formula2(int x, int y);
float formula1(float x);
float formula3(float x);
void tabular(int maximo);
void tabular2(int maximo);
void tabular3();

int main()
{
    int op,maximo;
    float funcion;
    cout<<"1)Formula2"<<endl<<"2)Formula1"<<endl<<"3)Formula3"<<endl;
    cout<<"Ingrese la funcion";
    cin>>op;
        while(op!=0)
        {
            
            switch(op){
                
                case 1:
                    system("cls");
                    tabular3();
                    break;
                case 2:
                    system("cls");
                    cout<<"Ingrese el valor maximo";
                    cin>>maximo;
                    tabular(maximo);
                break;
                case 3:
                    system("cls");
                    cout<<"Ingresa el valor maximo";
                    cin>>maximo;
                    tabular2(maximo);
                break;
            }
            cout<<endl<<"Ingrese la funcion";
            cin>>op;
        }
        

    return 0;
}

void tabular(int maximo){
        cout<<"X"<<"\t"<<"f";//crear una funcion para tabular
        for(int x=0;x<maximo;x++)
            {
                cout<<endl<<x<<"\t"<<formula1(x);
            }
}

void tabular2(int maximo){
    cout<<"X"<<"\t"<<"f";//crear una funcion para tabular
    for(int x=0;x<maximo;x++)
        {
            cout<<endl<<x<<"\t"<<formula3(x);
        }
}

void tabular3(){
    cout<<"X"<<"\t"<<"Y"<<"\t"<<"f";
    for(int x=1;x<=5;x++){
        for(int y=1;y<=5;y++){
            cout<<endl<<x<<"\t"<<y<<"\t"<<formula2(x,y);
        }
    }
}

float formula2(int x, int y){
    //Tabulare el valor en x y y de 0 a valor maximo
    x=2*x*y-(3*y);
    return x;
    
}

float formula1(float x){
    double raiz=cbrt(2.0*pow(x,2.0));
    x=raiz/(2.0*x-3.0);
    return x;
}

float formula3(float x){
    if(x>0)
    {
        x=2*(pow(x,3));
    }
    else
    {
        x=3*(pow(x,2));
    }
    return x;
}
