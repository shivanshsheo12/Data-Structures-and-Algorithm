#include<iostream>
#include<vector>

using namespace std;
int fact(int k){
    if(k>0){
        int factorial = 1;
        for(int i = 1;i<=k;i++){
        factorial = factorial*i;
    }
    return factorial;
    }
    if(k == 0){
        return 1;
    }

}

int comb(int n,int r){
    int ans;
    int diff = n - r;
    ans = fact(n)/(fact(r)*fact(diff));
    return ans;

}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            int value = comb(i,j);
            cout<<value<<" ";
        }
        cout<<"\n";
    }
    return 0;
}