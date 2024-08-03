#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int l;
    cout<<"Enter the value of l: ";
    cin>>l;

    int r;
    cout<<"Enter the value of r: ";
    cin>>r;

    int prefixSum = 0;
    for(int i = 1;i<(r-1);i++){
        v[i] = v[i] + v[i-1];
        prefixSum = v[i];
    }
    int prefixSum1 = 0;
    for(int i = 1;i<(l-1);i++){
        v[i] = v[i] + v[i-1];
        prefixSum1 = v[i];
    }

    int answer = prefixSum - prefixSum1;
    cout<<answer;


    return 0;
}