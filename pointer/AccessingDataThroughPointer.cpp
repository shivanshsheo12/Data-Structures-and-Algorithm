#include<iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    int* ptr = &x;
    int* ptr2 = &y;

    int result;
    int* result_ptr = &result;

    *result_ptr = *ptr2 + *ptr;
    cout<<*result_ptr<<" "<<result;

    return 0;
}