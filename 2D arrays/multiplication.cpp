#include<iostream>

using namespace std;

int main(){
    int n1;
    cout<<"Enter the number of rows : ";
    cin>>n1;

    int m1;
    cout<<"Enter the number of coloumns : ";
    cin>>m1;

    cout<<"Enter the first array : ";
    int arr[n1][m1];
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m1;j++){
            cin>>arr[i][j];
        }
    }
    int n2,m2;

    cout<<"Enter the number of rows : ";
    cin>>n2;

    cout<<"Enter the number of rows : ";
    cin>>m2;

    cout<<"Enter the second array : ";
    int arr1[n2][m2];
    for(int i = 0;i<n2;i++){
        for(int j = 0;j<m2;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[n1][m2];
    if(m1 == n2){
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m2;j++){
            arr2[i][j] = 0;
            for(int k = 0;k<m1;k++){
                arr2[i][j] = arr2[i][j] + arr[i][k]*arr1[k][j];
            }
        }
    }
    }
    else{
        cout<<"matrix can't be multiplied. ";
    }
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}