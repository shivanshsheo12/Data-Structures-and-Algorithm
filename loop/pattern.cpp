#include<iostream>
using namespace std;

int main(){
    
    int i, j;

    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i + 3; j++){
            if(i + j <= 4){
                cout << " ";
            } 
            else if(i + j == 5){
                cout << 1;
            } 
            else if(i + j == 6){
                cout << 2;
            } 
            else if(i + j == 7){
                cout << 3;
            } 
            else if(i + j == 8){
                cout << 4;
            } 
            else if(i + j == 9 - i){
                cout << 1;
            } 
            else if(i + j == 10 - i){
                cout << 2;
            } 
            else if(i + j == 11 - i){
                cout << 3;
            }
        }
        cout << "\n";
    }
    return 0;
}
