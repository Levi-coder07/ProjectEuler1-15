#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std; 
int main (){
    long long numero;
    long long mayor=1;
    long  contador;
    long long i=2;

  
     while(i<1000000){
         long long contador = 1;
         long long iter = i;
         while(iter>1){
            if(iter%2==0){
                iter = iter/2;
                
                contador++;
        }
            else{
                iter = 3*iter+1;
                
                contador++;
            }
        }
        if(contador>mayor){
            mayor = contador;
            numero = i;
        }
       
        i++;
        }
        

    cout<<endl;
    cout<<"El numero menor que 1 millon que produce la cadena mas larga es: "<<numero<<endl;
    //cout<<mayor;//cadenas totales
    getch();
}
    

   



