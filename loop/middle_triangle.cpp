#include<iostream>
using namespace std;

int main(){
    int i,j;

    for( i = 1 ; i<= 4 ; i++ ){
        for(j=1 ; j<=(3+i) ; j++ ){
            if(j<=(4-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        cout<<"\n";
    }
    return 0;
}