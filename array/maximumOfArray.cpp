#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i = 0;i<=4;i++){
        cout<<"Enter the value of element "<<i+1;
        cin>>arr[i];
    }
    
    int max = arr[0];
    for(int i = 0;i<=4;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    cout<<"Maximum value of array is "<<max;
}