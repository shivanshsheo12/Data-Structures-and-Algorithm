#include<iostream>
using namespace std;

int main(){
    int i,j;

    for(i = 0;i<7;i++){
        for(j = 1+i; j<=7+i;j++){
            if(j<=7){
                cout<<j;
            }
            else if(j>7){
                cout<<(j-7);
            }
        }
        cout<<"\n";
    }
    return 0;
}