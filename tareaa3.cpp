//1.- Leer un numero y mostrar el factorial del numero, mismo que se describe con el símbolo n! ejemplo:
//5! y se obtiene multiplicando todos los números de el 1 al numero = 1 *2 *3 *4 *5 = 120. No probar con números mayores a 19.


#include <iostream>
using namespace std;
int main()
{
    int numero,factorial=1;
    
    cout<<"Ingresa un numero";
    cin>>numero;
    for(int i=1;i<=numero;i++)
    {
        factorial*=i;
    }
    cout<<factorial;
}

//2.- Leer un numero base y una potencia y mediante ciclos obtener el resultado de elevar el 
//numero base a la potencia indicada. Ejemplo base=3, potencia = 4, el resultado es 3^4, es decir = 3 x 3 x 3 x 3=81


#include <iostream>
using namespace std;
int main()
{
    int numero, potencia, total=1;
    
    cout<<"Ingresa un numero";
    cin>>numero;
    cout<<"Ingrea la potencia";
    cin>>potencia;
    
    for(int i=1;i<=potencia;i++)
    {
        total*=numero;
    }
    cout<<total;
}

/*
3.- Realice un programa que permita dar como salida la población de dos países (a y b), teniendo 
en cuenta para tal propósito lo siguiente:
* En el Primer Año el País “a” tiene menos población que el país “b”
* Las Tazas de crecimiento de los países “a” y “b” son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo año hasta que la población de “a” exceda a la población de “b”, 
además la cantidad de años que transcurrieron para que esto sucediera
*/


#include <iostream>
using namespace std;
int main()
{
    float ciudad1,ciudad2;
    int anos=0; 
    
    cout<<"Ingresa poblacion de ciudad uno";
    cin>>ciudad1;
    cout<<"Ingresa poblacion de ciudad dos";
    cin>>ciudad2;
    
    if(ciudad1<ciudad2)
    {
        while(ciudad2>ciudad1)
            {
                ciudad1=ciudad1+(ciudad1*.6);
                ciudad2=ciudad2+(ciudad2*.3);
                anos++;
                
            }
        cout<<"poblacion de cuidad1:"<<"\t"<<ciudad1<<endl;
        cout<<"poblacion de cuidad2:"<<"\t"<<ciudad2<<endl;
        cout<<"Años que pasaron:"<<"\t"<<anos;
    }
    else
    {
        cout<<"poblacion de cuidad1:"<<"\t"<<ciudad1<<endl;
        cout<<"poblacion de cuidad2:"<<"\t"<<ciudad2<<endl;
        cout<<"Años que pasaron:"<<"\t"<<anos;
    }
}
