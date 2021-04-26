
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int x = 0;
    int y = 1;
    int z;
    int suma = 0;

    while (y <= 4000000){
        z = x + y;
        x = y;
        y = z;
        if (y % 2 == 0){
            //cout<<"numero par fibonacci"<<y<<endl;
            suma = suma + y;

            
        }
    }    
    cout<<"Suma total: "<<suma;
    getch();
}