#include<iostream>
#include<vector>

using namespace std;

void prefixSum(vector<int> &v){
    
    for(int i = 1;i<v.size();i++){
        v[i] = v[i] + v[i-1];
    }
    return;
}

int main(){
    vector<int> v;
    
    int n;
    cout<<"Enter the number of element";
    cin>>n;

    for(int i = 0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    prefixSum(v);

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}