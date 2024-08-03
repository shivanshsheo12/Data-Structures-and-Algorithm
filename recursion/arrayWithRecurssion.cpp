#include<iostream>
#include<vector>

using namespace std;
void print(vector<int> arr,int index){
    if(index == arr.size()) return;
    else{
        cout<<arr[index]<<" ";
        print(arr,index + 1);
    }
}

int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;

    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    print(arr,0);
}