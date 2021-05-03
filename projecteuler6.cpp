#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int suma=0;
    int sumaalcuadrado=0;
    int sumadecuadrados=0;
    int diferencia;
    for (int i = 1;i<101;i++){
        suma = suma + i;
    } 
    sumaalcuadrado = suma*suma;
    for (int i = 1;i<101;i++){
        sumadecuadrados = sumadecuadrados + (i*i);
    } 
    diferencia = sumaalcuadrado-sumadecuadrados;
    cout<<diferencia<<endl;
    getch();
}