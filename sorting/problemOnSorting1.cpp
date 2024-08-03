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
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    cout<<"Number of zeros are : "<<count<<endl;
    int k = 1;

    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
        for(int j = i;j<n - k;j++){
            if(arr[j + 1]> arr[j]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            }
            k = k + 1;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}