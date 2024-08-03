#include<iostream>

using namespace std;
int multiple(int a,int b,int small){
    if(a%small == 0 && b%small == 0) return small;
    else return multiple(a,b,small - 1);
}

int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    int b;
    cout<<"Enter the value of b : ";
    cin>>b;

    int small;
    if(b>a) small = a;
    else small = b;

    int gcd = multiple(a,b,small);
    cout<<"GCD : "<<gcd;
}