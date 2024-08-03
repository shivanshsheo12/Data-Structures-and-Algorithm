#include<iostream>

using namespace std;
int grid(int i,int j,int m,int n){
    if(i == m-1 && j == n-1) return 1;
    if(i>=m || j>=n) return 0;
    return grid(i + 1,j,m,n) + grid(i,j+1,m,n);
}

int main(){
    int n = 3;
    int m = 3;

    cout<<grid(0,0,3,3);
}