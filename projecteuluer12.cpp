#include <iostream>
#include <time.h>
#include <cmath>
#include <conio.h>
using namespace std; 
int contadordedivisores(int numero){
    int contador=1;
    int exp;
    unsigned int divisor = 2;
    while (numero>1){
            exp = 0;
            while(numero%divisor==0){
                numero /= divisor;
                ++exp;
                //cout<<"Numero: "<<numero<<" "<<endl;                
            }
            //cout<<"Expo: "<<exp<<" ";
            contador*= (exp+1); 
            //cout<<"Contado: "<<contador<<endl;
            ++divisor;  
            
                 
        }
        
    
    return contador;
}
int main (){

    const int cantidadivisores = 500;
    long long suma=0; 
    long long contador=0;
    int i=1;
    int divisores=0;
    while(true){
        suma = suma+i;
        //cout<<i<<" ";
        i++;
        //cout<<"Suma: "<<suma<<endl;
        divisores = contadordedivisores(suma);
        if (divisores>cantidadivisores){
                cout<<divisores<<endl;
                cout<<"El valor que tiene mas de 500 divisores es: "<<suma;
                return 0;
        }
    }
    getch();
    return 0;
}