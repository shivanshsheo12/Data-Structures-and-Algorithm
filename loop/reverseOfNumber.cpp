#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the value of number : ";
    cin>>num;

    int reverse = 0;
    while(num>0){
        int lastdigit = num%10;
        reverse = (reverse*10) + lastdigit;
        num = num/10;
    }
    cout<<"Reversed number is "<<reverse;
    return 0;
}