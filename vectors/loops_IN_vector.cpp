#include<iostream>
#include<vector>

using namespace std;

int main(){
    //for loop
    vector<int> v;
    
    for(int i = 0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    v.insert(v.begin()+2,6);

    for(int elem:v){
        cout<<elem<<" ";
    }
    cout<<"\n";

    int i = 0;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }

    return 0;
}