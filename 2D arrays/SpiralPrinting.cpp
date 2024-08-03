#include<iostream>

using namespace std;

int main(){

    
    int n;
    cout<<"Enter the square matrix : ";
    cin>>n;

    int arr[n][n];

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int i = 0;
    int j = 0;
    while(j<n){
        cout<<arr[i][j]<<" ";
        j++;
    }//i = 0 j = 3
    j--;
    i++;
    // i = 1 j = 2
    while(i<n){
        cout<<arr[i][j]<<" ";
        i++;
    }

    //i = 3 j = 2
    i--;
    j--;

    //i = 2 j = 1
    while(j>=0){
        cout<<arr[i][j]<<" ";
        j--;
    }

    //i = 2 j = -1
    i--;
    j++;

    //i = 1 j = 0
    while(i>0){
        cout<<arr[i][j]<<" ";
        i--;
    }

    //i = 0 j = 0
    return 0;
}