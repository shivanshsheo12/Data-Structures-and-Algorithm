#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0;i<6;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int sorted = true;
    for(int i = 0;i<5;i++){
        if(v[i+1]<v[i]){
            sorted = false;
            break;
        }
    }
    if(sorted == true){
        cout<<"The given array is sorted";
    }
    else{
        cout<<"not sorted";
    }


    return 0;
}