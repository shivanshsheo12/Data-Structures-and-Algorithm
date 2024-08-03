#include<iostream>
#include<vector>

using namespace std;
int presuffsum(vector<int> v){
    int i = 0;
    int j = v.size() - 1;

    int sum1 = 0;
    int sum2 = 0;

    int n;
    
    while(i<=j){
        if(sum1>=sum2){
            sum2 = sum2 + v[j];
            j--;
        }
        else if(sum1<sum2){
            sum1 = sum1 + v[i];
            i++;
        }
        if(sum1 == sum2 && i - 1 == j){
            n = i - 1;
            break;
        }

    }
    return n;

}

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the number of element : ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int a = presuffsum(v);
    if(a != - 1){
    cout<<"The prefix sum is equal to suffix sum upto place "<<a;
    }

    else{
        cout<<"The prefix sum is not equal to suffix sum  ";
    }
    return 0;
}