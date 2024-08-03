#include<iostream>

using namespace std;

int binarysearch(int arr[],int low,int high,int target){
    while(low<=high){
        int mid = (low+high)/2;
        if(low == high) return low;
        else if(arr[mid]*arr[mid] == target){
            return mid;
        }
        else if(arr[mid]*arr[mid] < target) low = mid + 1;
        else if(arr[mid]*arr[mid] > target) high = mid - 1;
    }
}

int main(){
    int target;
    cout<<"\nEnter the value of target: ";
    cin>>target;

    int arr[target];

    for(int i = 1;i<=target;i++){
        arr[i] = i;
    }

    for(int i = 1;i<=target;i++){
        cout<<arr[i]<<" ";
    }

    int low = 1;
    int high = target;
    int value = binarysearch(arr,low,high,target);

    cout<<"\nsquare root of target is : "<<arr[value];
    return 0;
}