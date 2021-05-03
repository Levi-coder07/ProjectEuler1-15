#include <iostream>
#include <conio.h>
using namespace std; 
int main (){
    int contador = 2;
    int primo=0;
    bool primoencontrado=true;
    for (int i = 3 ; contador<10002;i++){
        for(int j= 2;j<i;j++){
            primoencontrado=true;
            if(i%j==0){
                primoencontrado=false;
                break;
            }
            if(contador==10001){
                primo = i;
            }
        }
        if(primoencontrado==true){
            contador+=1;
        }
    }
    cout<<primo;
    getch();

}