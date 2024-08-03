#include<iostream>

using namespace std;
void grid(int arr[][3],int i,int j,int m,int n,int &count){
    if(i >= m || j >= n) return;
    if(i == m-1 || j == n-1){
        count++;
        return;
    }
    if(i<3) grid(arr,i + 1,j,m,n,count);
    if(j<3) grid(arr,i,j+1,m,n,count);
}

int main(){
    int n = 3;
    int m = 3;
    int arr[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;
    grid(arr,0,0,m,n,count);
    cout<<count;
}