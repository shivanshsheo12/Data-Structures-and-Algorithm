#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    int sum = 0;

    for(int i = 0;i<=a;i++){
        sum = sum + i;
    }

    cout<<"The sum of n is "<<sum;

    return 0;
}