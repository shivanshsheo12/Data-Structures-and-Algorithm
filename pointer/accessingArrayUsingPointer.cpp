#include<iostream>

using namespace std;
void printing(int* arr,int  n){
    for(int i = 0;i<n;i++){
        cout<<*(arr + i)<<endl;
    }
}

int main(){
    int arr[3] = {1,2,3};
    int n = 3;

    for(int i = 0;i<n;i++){
        cout<<*(arr + i)<<endl;
    }

    //Passing in function.
    printing(arr,n);
}