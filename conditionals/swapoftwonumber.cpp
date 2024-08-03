#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    b = a + b;
    a = b - a;
    b = b - a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

}