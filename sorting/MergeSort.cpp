#include<iostream>
#include<vector>

using namespace std;
void merge(int arr[],int low,int mid,int high){
    int an = mid - low + 1;
    int bn = high - mid;
    int a[an];
    int b[bn];
    for(int i = 0;i<an;i++){
        a[i] = arr[low + i];
    }
    for(int j = 0;j<bn;j++){
        b[j] = arr[mid+1+j];
    }
    int i = 0;
    int j = 0;
    int k = low;
    while(i<an && j<bn){
        if(b[j]<a[i]){
            arr[k++] = b[j++];
        }
        else{
            arr[k++] = a[i++];
        }
    }
    while(i<an){
        arr[k++] = a[i++];
    }
    while(j<bn){
        arr[k++] = b[j++];
    }
}
void mergeSort(int arr[],int low, int high){
    if(low>=high) return;
    int mid = (low + high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid + 1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}