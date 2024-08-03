#include<iostream>
#include<vector>

using namespace std;

void sorting(vector<int> &v){
    for(int i = 0;i<v.size();i++){
        v[i] = (v[i]*v[i]);
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i = 0;i<v.size();i++){
        for(int j = i + 1;j<v.size();j++){
            if(v[i]>v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the number of element : ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }

    sorting(v);
    cout<<"\n";

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}