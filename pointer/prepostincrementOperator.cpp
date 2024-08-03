#include<iostream>

using namespace std;

int main(){
    int arr[2] = {1,2};
    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl; // address of arr[0] and value at arr[0] // address 1

    cout<<*ptr++<<endl; // phele value ko use kro fir increment kro --> value at address stored in pointer ptr //1
    
    cout<<arr[0]<<" "<<arr[1]<<endl; //1 2

    cout<<ptr<<" "<<*ptr<<endl; //  address of incremented value of ptr and value stored at increment address of ptr //adress of ptr+1 and 2

    int arr1[2] = {3,4};
    int* ptr1 = &arr1[0];

    cout<<ptr1<<" "<<*ptr1<<endl; // adress of arr[0] and value at adress of arr[0] 

    cout<<*++ptr1<<endl; // pehle value ko increment kro fir use kro --> value at incremented adress of ptr

    cout<<arr1[0]<<" "<<arr1[1]<<endl; // value at arr[0] and value at arr[1]

    cout<<ptr1<<" "<<*ptr1<<endl; // address of incremented ptr and value at incremented address of ptr
}