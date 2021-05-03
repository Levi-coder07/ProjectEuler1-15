#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    long long numero = 600851475143;
    long i;
    for(i = 3 ; numero>1;++i){
        
        
        while(numero%i==0){
            numero = numero / i;
            
            //cout<<i<<endl;
        }
        
    }
    cout<<i-1<<endl;
    

    getch();
}