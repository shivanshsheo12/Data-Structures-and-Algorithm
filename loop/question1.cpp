#include<iostream>
using namespace std;

int main(){
    for(int i = 1;;i++){
        if(i%5 == 0 && i%7 == 0){
            cout<<i;
            break;
        }
    }
    return 0;
}