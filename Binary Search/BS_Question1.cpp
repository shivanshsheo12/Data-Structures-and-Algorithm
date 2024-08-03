#include<iostream>

using namespace std;

int BinarySearch(int arr[],int target,int low,int high){
    if(low>high) return -1;
    int mid = (low + high)/2;
    if(arr[mid] == target){
        if(arr[mid - 1] == target) return BinarySearch(arr,target,low,mid -1);
        else return mid;
    }
    if(arr[mid]>target) return BinarySearch(arr,target,low,mid-1);
    if(arr[mid]<target) return BinarySearch(arr,target,mid+1,high);
}

int main(){
    int arr[8] = {2,5,5,5,6,6,8,9};
    int size = 8;

    //Sorting array
    for(int i = 0;i<size - 1;i++){
        for(int j = 0;j<size - 1 - i;j++){
            if(arr[j]>arr[j + 1]) swap(arr[j],arr[j + 1]);
        }
    }

    //Printing Sorted array
    cout<<"Sorted array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int low = 0;
    int high = size - 1;
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;

    int value = BinarySearch(arr,target,low,high);
    cout<<"Index: "<<value;

    return 0;
}