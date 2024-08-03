#include<iostream>

using namespace std;
int sumofnum(int n, int sum){
    if(n ==  1) return sum + 1;
    else{
        if(n%2 == 0) return sumofnum(n - 1,sum - n);
        else return sumofnum(n - 1,sum + n);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int sum = sumofnum(n,0);
    cout<<sum;
    return 0;
}