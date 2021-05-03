#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    int k ;
    int a ,b,c; 
   for(int i = 2;i<500;i++){
       for(int j=3;j<500;j++){
            for(int k=4;k<500;k++){
                
                if(i*i+j*j==k*k&&i+j+k==1000){
                cout<<i<<" "<<j<<" "<<k<<endl;
                a=i;
                b=j;
                c=k;

           }
           /*k=sqrt((i*i)+(j*j));
           if(i*i+j*j==k*k&&i+j+k==12){
               cout<<i<<" "<<j<<" "<<k<<endl;
           }
           }*/
            }
       }
   }
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<"La multiplicacion a*b*c: "<<a*b*c<<endl;
    getch();
}
