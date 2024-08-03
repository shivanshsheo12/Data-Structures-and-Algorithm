#include<iostream>
#include<vector>

using namespace std;
int sumofarray(vector<int> arr,int index ,int n){
    if(index == n) return arr[index];
    else return arr[index] + sumofarray(arr,index + 1,n);
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int sum = sumofarray(arr,0,n);
    cout<<"sum : "<<sum;
}