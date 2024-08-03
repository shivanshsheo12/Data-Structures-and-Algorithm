#include<iostream>

using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    int b;
    cout<<"Enter the value of b : ";
    cin>>b;

    //if a > b
    int value = gcd(a,b);
    cout<<"GCD : "<<value;
}