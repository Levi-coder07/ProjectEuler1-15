#include <iostream>
#include <time.h>
#include <cmath>
#include <conio.h>
using namespace std; 
int main (){
    
    unsigned long long suma=2;  
    bool primoencontrado=true;

    for (long long i = 3 ; i<2000000;i =i+2){
        /*if(i%2==0){
            primoencontrado=false;
            break;
        }*/
        for(long long j= 3;j<=sqrt(i);j += 2){
            
            if(i%j==0){
                primoencontrado=false;
                break;
            }
            primoencontrado=true;
            
        }
        if(primoencontrado==true){
            suma = suma + i;
            //cout<<i<<endl;
            
        }
    }

    cout<<suma;
    getch();

}