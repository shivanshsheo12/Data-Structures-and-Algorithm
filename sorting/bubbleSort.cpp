#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0;i<n-1;i++){
        bool flag = false;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(!flag) break;
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}