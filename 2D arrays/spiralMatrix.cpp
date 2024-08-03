#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the square matrix : ";
    cin>>n;
    
    int arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i = 0;i<n;i++){
    int i = 0;
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
            if(j == n - 1){
                for(int k = 1;k<n;k++){
                    cout<<arr[k][j]<<" ";
                    if(k == n - 1){
                        for(int l = 1;l>=0;l--){
                            cout<<arr[k][l]<<" ";
                            if(l == 0){
                                for(int m = 1 ;m>i;m--){
                                    cout<<arr[m][l];
                                }
                            }
                        }
                    }
                }
            }
        }
    // }
    return 0;
}