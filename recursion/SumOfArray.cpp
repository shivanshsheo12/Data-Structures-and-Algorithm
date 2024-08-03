#include<iostream>
#include<vector>

using namespace std;
void sumofarr(vector<int> arr,int index,int n,int sum){
    if(index == n){
        cout<<"Sum : "<<sum;
        return;
    }
    else{
        sum = sum + arr[index];
        sumofarr(arr,index + 1,n,sum);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    sumofarr(arr,0,n,0);
}