#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> pascal_triangle(int n){
    vector<vector<int>> pascal(n);
    for(int i = 0;i<n;i++){
        pascal[i].resize(i+1);
        for(int j = 0;j<=i;j++){
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    vector<vector<int>> ans;
    ans = pascal_triangle(n);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}