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

    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    cout<<"\n";
    int occurence = -1;
    int i;
    for( i = 0;i<6;i++){
        if(x == v[i]){
            occurence = i;
        }
    }
    if(occurence != -1 ){
        cout<<"The last occurence is "<<occurence;
    }
    if(occurence == -1){
        cout<<"No such element found";
    }


    return 0;
}