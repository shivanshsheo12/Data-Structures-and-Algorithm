#include<iostream>

using namespace std;

int main(){
    int arr[8] = {13,9,18,15,40,35,1,22};
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

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == target) {
            cout<<"Index : "<<mid;
            break;
        }
        else if(arr[mid]<target){
            low = mid + 1;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
    }

    return 0;
}