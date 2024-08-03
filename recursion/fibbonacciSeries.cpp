#include<iostream>

using namespace std;
int fibbo(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1;

    return fibbo(n - 1) + fibbo(n-2);
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int a = fibbo(n);
    cout<<"Nth term : "<<a;
    return 0;
}