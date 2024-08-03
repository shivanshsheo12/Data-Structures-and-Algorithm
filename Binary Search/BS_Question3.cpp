#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[9] = {-2,-1,1,2,3,4,4,4,5};
    int low = 0;
    int high = 8;
    int first;
    int last;
    int target;
    cout<<"Enter target : ";
    cin>>target;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            if(mid == 0 || arr[mid - 1] != target){
                first = mid;
                break;
            }
            else{
                high = mid - 1;
            }
        }
        else if(arr[mid]<target){
            low = mid + 1;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
    }
    low = 0;
    high = 8;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            if(mid ==  high|| arr[mid + 1] != target){
                last = mid;
                break;
            }
            else{
                low = mid + 1;
            }
        }
        else if(arr[mid]<target){
            low = mid + 1;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
    }
    
    cout<<"["<<first<<","<<last<<"]";
}