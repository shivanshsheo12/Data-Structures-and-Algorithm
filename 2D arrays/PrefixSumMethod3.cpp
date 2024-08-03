#include<iostream>
#include<vector>

using namespace std;
int sumOfmatrix(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){
    for(int i = 0;i<matrix.size();i++){
        for(int j = 1;j<matrix[0].size();j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }
    for(int i = 0;i<matrix[0].size();i++){
        for(int j = 1;j<matrix.size();j++){
            matrix[j][i] += matrix[j-1][i];
        }
    }
    int sum = 0;
    if(l1 != 0 && r1 != 0){
        sum = sum + matrix[l2][r2] - matrix[l2][r1 -1] + matrix[l1 - 1][r1 -1] - matrix[l1 -1][r2];
    }
    else if(l1 == 0 && r1 != 0){
        sum = sum + matrix[l2][r2] - matrix[l2][r1 -1];
    }
    else if(l1 != 0 && r1 == 0){
        sum = sum + matrix[l2][r2] - matrix[l1 - 1][r2];
    }
    else{
        sum = sum + matrix[l2][r2];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of row : ";
    cin>>n;

    int m;
    cout<<"Enter the value of coloumn : ";
    cin>>m;

    vector<vector<int>> matrix(n,vector<int> (m));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter the value of l1 r1 and l2 r2 : ";
    cin>>l1>>r1>>l2>>r2;

    int sum = sumOfmatrix(matrix,l1,r1,l2,r2);
    cout<<"Sum : "<<sum;
}