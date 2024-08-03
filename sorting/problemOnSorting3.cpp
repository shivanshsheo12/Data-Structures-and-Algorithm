#include<iostream>
using namespace std;
int quickSort(int arr[],int low,int high,int k){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(pivot>arr[i] && i<high){
            i++;
        }
        while(pivot<arr[j] && j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],pivot);
    if(j == k){
        return arr[j];
    }
    else if(k<j){
        quickSort(arr,low,j-1,k);
    }
    else if(k>j){
        quickSort(arr,j+1,high,k);
    }
}
int main(){
    int arr[8] = {3,5,2,1,4,7,8,6};
    int size = 8;
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;

    int kthsmallest = quickSort(arr,0,size - 1,k-1);
    cout<<"kth smallest Element is "<<kthsmallest;
}