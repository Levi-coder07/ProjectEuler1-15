#include <iostream>
#include <conio.h>
using namespace std; 
int main (){
    int rutas = 2;
    long long matriz[20][20];
    for (int i =0 ; i<20;i++){
        for (int j =0;j<20;j++){
            if(i==0||j==0){
                matriz[i][j]=rutas;
                matriz[j][i]=rutas;
            }
            else{
                matriz[i][j]=0;
            }
        }
        rutas++;
    }
    for (int i =0 ; i<20;i++){
        for (int j =0;j<20;j++){
            if(i!=0&&j!=0){
                matriz[i][j]=matriz[i-1][j]+matriz[i][j-1];
            }
        }
    }
    //Bucle para mostrar la matriz completa        
    /*for (int i =0 ; i<20;i++){
        for (int j =0;j<20;j++){
            cout<<matriz[i][j]<<" ";

        }
        cout<<endl;
    }*/
    cout<<"Las rutas en total seran : "<<matriz[19][19];
    getch();
}


