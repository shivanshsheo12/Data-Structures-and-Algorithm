#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i<n ; i++){
        cout<<"Enter the element no. "<<i+1<<" ";
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the times you want to rotate : ";
    cin>>k;
    int arr2[k];
    for(int j = 0;j<k;j++){
        arr2[j] = arr[j];
        }

    for(int i = 0;i<n;i++){
        arr[i] = arr[i+k];
        if((i+k)>=n){
            arr[i] = arr2[(i+k)-n];
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}