#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int m;
    cout<<"Enter the number of coloumns : ";
    cin>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    int l1,r1;
    cout<<"Enter the value of l1 and r1: ";
    cin>>l1;
    cin>>r1;

    int l2,r2;
    cout<<"Enter the value of l2 and r2 : ";
    cin>>l2;
    cin>>r2;

    
    
    int sum = 0;
    int maxi,maxj;
    int mini,minj;
    if(l1>l2){
        maxi = l1;
        mini = l2;
    }
    else{
        maxi = l2;
        mini = l1;
    }
    
    if(r1>r2){
        maxj = r1;
        minj = r2;
    }
    else{
        maxj = r2;
        minj = r1;
    }
    for(int i = mini;i<=maxi;i++){
        for(int j = minj;j<=maxj;j++){
            sum+=matrix[i][j];
        }
    }

    cout<<"Sum : "<<sum;
    return 0;
}