#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a;
    vector<int> v;
    for(int i = 0;i<6;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    int count = 0;
    for(int i = 0;i<6;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"count = "<<count;
    return 0;
}