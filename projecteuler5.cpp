#include <iostream>
#include <conio.h>
using namespace std;
bool numerodivisible(int numero){
        for (int i = 2;i<21;i++){
            if (numero%i!=0){
                
                return false;
            }
        }
        //cout<<numero<<endl;
        return true;
    }
int main(){
    long long numero = 2;
    while(true){
        if(numerodivisible(numero)==true){
            break;    
        }
        numero = numero+2;
    }

    cout<<numero;
    getch();
}