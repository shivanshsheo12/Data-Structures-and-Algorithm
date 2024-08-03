#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int z;
    z = x;
    x = y;
    y = z;
    return;
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    swap(a,b);

    cout<<"The swap value of a and b are "<<a<<" and "<<b;
    return 0;
}