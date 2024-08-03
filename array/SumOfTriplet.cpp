#include<iostream>

using namespace std;

int main(){
    int arr[6] = {3,1,2,4,0,6};

    int x;
    cout<<"Enter sum you want to check : ";
    cin>>x;

    int count = 0;

    for(int i = 0;i<5;i++){
        for(int j = i + 1; j < 5; j++ ){
            for(int k = j + 1;k<5;k++){
            if(arr[i]+arr[j]+arr[k] == x){
                count++;
                }
            }
        }
    }

    cout<<"The number of pairs are : "<<count;
    return 0;
}