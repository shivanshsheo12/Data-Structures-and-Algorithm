#include<iostream>

using namespace std;
int maxNum(int arr[],int size){
    int max = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}
void countSort(int arr[],int size,int pos){
    int count[10] = {0};
    for(int i = 0;i<size;i++){
        count[(arr[i]/pos)%10]++;
    }
    for(int i = 1;i<10;i++){
        count[i] = count[i] + count[i - 1];
    }
    int b[size];
    for(int i = size-1;i>=0;i--){
        b[--count[(arr[i]/pos)%10]] = arr[i];
    }
    for(int i = 0;i<size;i++){
        arr[i] = b[i];
    }
}
void radixSort(int arr[],int size){
    int max = maxNum(arr,size);
    for(int pos = 1;(max/pos)>0;pos*=10){
        countSort(arr,size,pos);
    }
}

int main(){
    int arr[10] = {432,8,530,90,88,231,11,45,677,199};
    int n = 10;
    radixSort(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}