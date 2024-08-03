#include<iostream>
using namespace std;

int main(){
    for(int i = 1;i<=4;i++){
        for(int j = 1;j<=6;j++){
            if(i == 1 || i == 4){
                cout<<j;
            }
            else if(i == 2 || i == 3){
                if(j == 1 || j == 6){
                    cout<<j;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}