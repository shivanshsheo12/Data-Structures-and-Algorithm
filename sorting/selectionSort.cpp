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
        int min_index = i;
        for(int j = i + 1;j<n;j++){
            if(arr[min_index]>arr[j]){
                int min_index = j;
            }
        }
        if(min_index != i){
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}