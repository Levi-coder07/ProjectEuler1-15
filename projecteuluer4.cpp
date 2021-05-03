#include <iostream>
using namespace std;
int main(){
    int x , y ; 
    int producto ;
    int digito,reversa;
    int palindromo;
    int numero= 0;
    int max = 0;
    for ( x = 10 ; x<1000;x++){
        for (y=10;y<1000;y++){
            producto = x*y;
            int reversaproducto = producto;
            reversa=0;
            while(reversaproducto>0){
                digito = reversaproducto %10;
                reversa = (reversa*10)+digito;
                reversaproducto = reversaproducto / 10;
            }
            if ( reversa==producto){
                if(producto>max){
                    max = producto;
                    
            }
            
        }
    }
    }
    cout<<"El maximo palindromo es : "<<max<<endl;
    
}