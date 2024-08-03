#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int digit = 0;
    while(n>0){
        n = n/10;
        digit++;
    }
    cout<<"The number of digit in input number is "digit
}