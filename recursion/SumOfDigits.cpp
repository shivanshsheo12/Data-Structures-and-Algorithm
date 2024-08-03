#include<iostream>

using namespace std;
int SumofDigits(int num){
    if(num>=0 && num<=9) return num;
    else return SumofDigits(num/10) + (num%10);
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int a = SumofDigits(num);
    cout<<"Sum: "<<a;
}