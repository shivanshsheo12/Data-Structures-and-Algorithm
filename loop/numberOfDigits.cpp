#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number that you want to check : ";
    cin>>num;
    
    int digit = 0;
    int power;
    for(int i = 0;;i++){
        power = pow(10,i);

        if(num/power != 0){
            digit++;
        }
        else if(num/power == 0){
            break;
        }
    }
    cout<<"The number of digits in input number is "<<digit;
    while(num>0){
        num 
    }
    return 0;
}