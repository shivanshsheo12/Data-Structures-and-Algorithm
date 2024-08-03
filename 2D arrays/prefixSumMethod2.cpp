#include<iostream>
#include<vector>

using namespace std;
int sumOfmatrix(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){
    
    for(int i = 0;i<matrix.size();i++){
        for(int j = 1;j< matrix[0].size() ;j++){
            matrix[i][j] = matrix[i][j] + matrix[i][j-1];
        }
    }
    int sum = 0;
    for(int i = l1;i<=l2;i++){
        sum = sum + (matrix[i][r2] - matrix [i][r1 - 1]);
    }
    return sum;

}

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
    int l1,r1,l2,r2;

    cout<<"Enter the value of l1 and r1: ";
    cin>>l1;
    cin>>r1;

    cout<<"Enter the value of l2 and r2: ";
    cin>>l2;
    cin>>r2;

    int sum = sumOfmatrix(matrix,l1,r1,l2,r2);
    cout<<"sum : "<<sum;
    return 0;
}