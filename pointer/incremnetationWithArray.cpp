#include<iostream>

using namespace std;

int main(){
    int arr[2] = {1,2};
    int *ptr = &arr[0];

    cout<<(*ptr)<<"\n";

    cout<<(*(ptr+1));
    cout<<endl;
    
}