#include<iostream>

using namespace std;

int main(){
    int arr[5] = {3,4,6,7,1};

    int x;
    cout<<"Enter sum you want to check : ";
    cin>>x;

    int count = 0;

    for(int i = 0;i<5;i++){
        for(int j = i + 1; j < 5; j++ ){
            if(arr[i]+arr[j] == x){
                count++;
            }
        }
    }

    cout<<"The number of pairs are : "<<count;
    return 0;
}