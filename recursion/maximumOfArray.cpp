#include<iostream>
#include<vector>

using namespace std;
void maxofarray(vector<int>arr,int index,int max,int n){
    if(index == n){
        cout<<max;
        return;
    }
    else{
        if(arr[index]>max) max = arr[index];
        maxofarray(arr,index + 1,max,n);
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

    maxofarray(arr,0,arr[0],n);
}