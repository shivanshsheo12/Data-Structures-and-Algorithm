#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i = 1;i<=4;i++){
        for(j = 1;j<=5-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}