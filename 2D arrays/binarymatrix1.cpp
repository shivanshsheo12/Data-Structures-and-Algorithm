#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;
int vectorRows(vector<vector<int>> &v){
    int MaxOnes = INT16_MIN;
    int Row = -1;
    int coloumn = v[0].size();
    int NumOfOnes;

    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[0].size();j++){
            if(v[i][j] == 1){
                NumOfOnes = coloumn - j;
                if(NumOfOnes>MaxOnes){
                    MaxOnes = NumOfOnes;
                    Row = i;
                }
            }
            break;
        }
    }

    return Row;
}

int main(){
    int n,m;
    
    cout<<"Enter the number of rows : ";
    cin>>n;

    cout<<"Enter the number of coloumns : ";
    cin>>m;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
        }
    }

    int maxRows = vectorRows(v);

    cout<<"Rows with maximum number of ones is "<<maxRows;
    return 0;
}