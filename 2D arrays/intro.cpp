#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int m;
    cout<<"Enter the number of coloums: ";
    cin>>m;

    int arr[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}