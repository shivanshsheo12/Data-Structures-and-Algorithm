#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n][n];
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            if(j == 0 || j == i){
                arr[i][j] = 1;
            }
            else if(j>0 && j<i){
                arr[i][j] = arr[i - 1][j] + arr[i-1][j-1];
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = i + 1 ;j<n;j++){
            arr[i][j] = 0;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    


}