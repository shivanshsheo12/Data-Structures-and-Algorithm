#include<iostream>
#include<vector>

using namespace std;
void sortElement(vector<int> &v){
    int NumOfZero = 0;

    for(int i=0;i<v.size();i++){
        if(v[i] == 0){
            NumOfZero++;
        }
    }
    for(int i = 0;i<v.size();i++){
        if(i<NumOfZero){
            v[i] = 0;
        }
        if(i>NumOfZero){
            v[i] = 1;
        }
    }
    return;
}

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sortElement(v);

    for(int i = 0;i<n;i++){
        cout<<v[i];
    }


}