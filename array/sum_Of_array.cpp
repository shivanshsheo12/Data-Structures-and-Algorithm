#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4,3,6,8,9};
    int sum = 0;
    for(int i = 0;i<=4;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of all the elements in array is "<<sum;
    return 0;
}