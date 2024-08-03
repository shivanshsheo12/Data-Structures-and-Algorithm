#include<iostream>

using namespace std;
int binarySearch(int arr[],int target){
    int low = 0;
    int high = 4;

    while(low<high){
        int mid = (low + high)/2;
        if(target == arr[mid]) return mid;
        else{
            if(target>arr[low] and target<arr[mid]) high = mid - 1;
            else low = mid + 1;
            if(target>arr[low] and target<arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
    }
}

int main(){
    int arr[5] = {3,4,5,1,2};
    int target = 4;

    int value = binarySearch(arr,target);
    cout<<"Index of target value = "<<value;
}