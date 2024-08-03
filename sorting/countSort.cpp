#include<iostream>

using namespace std;

void countsort(int arr[],int index,int size){
    int max = 0;
    //maximum value find out
    for(int i = index;i<size;i++){
        if(max<arr[i]) max = arr[i];
    }

    //maximum value k size ka array bnaya with value appointed as zero
    int count[max + 1];
    for(int i = 0;i<=max+1;i++){
        count[i] = 0;
    }

    //frequency of each element ko uske defined value of index par rkha
    for(int i = 0;i<=max + 1;i++){
        count[arr[i]]++;
    }

    //commulative frequency bnai
    for(int i = 1;i<=max;i++){
        count[i] = count[i] + count[i - 1];
    }

    //sorted array b
    int b[size];
    for(int i = size-1;i>=0;i++){
        b[--count[arr[i]]] = arr[i];
    }

    //copying the b to original array
    for(int i = 0;i<size;i++){
        arr[i] = b[i];
    }
}

int main(){
    int arr[12] = {9,1,0,2,1,0,5,6,7,1,0,5};
    countsort(arr,0,12);
    for(int i = 0;i<12;i++){
        cout<<arr[i];
    }
}