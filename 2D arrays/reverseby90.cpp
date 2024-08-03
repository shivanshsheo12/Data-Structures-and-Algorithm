#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the square of matrix : ";
    cin>>n;

    int arr[n][n];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int arr1[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = arr[(n-1)-j][i];
        }
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}