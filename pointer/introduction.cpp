#include<iostream>

using namespace std;

int main(){
    int x = 10;
    float y = 9.3;

    int* ptr = &x;
    float* ptr1 = &y;

    //address of variables x and y respectively
    cout<<ptr<<" "<<ptr1<<endl;

    //value present at adrress through the pointer
    cout<<*ptr<<" "<<*ptr1<<endl;

    //change value through pointer
    *ptr = 50;
    cout<<x<<" "<<*ptr<<endl;


}