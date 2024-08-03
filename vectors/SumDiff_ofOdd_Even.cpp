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
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0;i<6;i++){
        if(i%2 == 0){
            sum2 = sum2 + v[i];
        }
        else{
            sum1 = sum1 + v[i];
        }
    }
    int difference = sum1 - sum2;
    if(difference < 0){
        cout<<(-1*difference);
    }
    else{
        cout<<difference;
    }



    return 0;
}