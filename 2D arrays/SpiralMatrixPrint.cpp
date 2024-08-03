#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n][n];
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // for(int i = 0;i<n;i++){
    {
    int i = 0;
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        
        for(int k = i + 1;k<n;k++){
            cout<<arr[k][n-1]<<" ";
        }

        for(int l = n - 2;l>=0;l++){
            cout<<arr[n-1][l]<<" ";
        }

        for(int m = n - 2; m>i ; m--){
            cout<<arr[m][i]<<" ";
        }
    }
    }
// }