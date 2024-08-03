#include<iostream>
using namespace std;

int main(){
    char arr[5];
    for(char &elem:arr){
        cin>>elem;
    }

    for(int i = 0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}