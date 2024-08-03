#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the value of n : ";
    cin>>a;
    int num = 0;
    int sum = 0;
    while(num<=a){
        sum = sum + num;
        num++;
    }
    cout<<"The sum is "<<sum;
    return 0;
}