#include<iostream>

using namespace std;
int part(int arr[],int low,int high){
    int piviot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[piviot] && i<high){
            i++;
        }
        while(arr[j]>arr[piviot] && j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[piviot]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int partition = part(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition + 1,high);
    }
}

int main(){
    int arr[9] = {4,8,1,7,3,9,2,6,5};
    int n = 9;

    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}