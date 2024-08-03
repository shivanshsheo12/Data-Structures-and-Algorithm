#include<iostream>
using namespace std;

int main(){
    for(int i = 1;i<=4;i++){
        for(int j = 1; j<=i+3;j++){
            if(i+j<=4){
                cout<<" ";
            }
            else if(i == 2 && j == 4){
                cout<<" ";
             }
            else if(i == 3 && (j == 3 || j == 4 || j == 5)){
                cout<<" ";
            }
            else{
                cout<<i;
            }
        }
        cout<<"\n";
    }
    return 0;
}