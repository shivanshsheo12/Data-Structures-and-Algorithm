#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int arr[6] = {2,3,6,4,1,8};

    int max = INT_MIN;
    int max2 = INT_MIN;
    
    for(int i = 0;i<6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i = 0;i<6;i++){
        if(max2<arr[i] && arr[i]<max){
            max2 = arr[i];
        }
    }
    cout<<max2;
}