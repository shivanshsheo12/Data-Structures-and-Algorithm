#include<iostream>

using namespace std;

bool present(int *arr,int index,int n){
    if(index >= 5) return false;
    else if(arr[index] == n) return true;
    else return present(arr,index + 1,n);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n;
    cout<<"Enter the number you want to check : ";
    cin>>n;

    bool value = present(arr,0,n);
    if(value == true) cout<<"Number is present.";
    else cout<<"Number is not present.";
}