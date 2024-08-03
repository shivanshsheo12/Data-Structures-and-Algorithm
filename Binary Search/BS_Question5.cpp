#include<iostream>

using namespace std;
int peakvalueofarray(int arr[]){

    int low = 0;
    int high = 3;
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;

        // If increasing
        if(arr[mid] > arr[mid - 1]){
        ans = mid;
        low = mid + 1;
        }

        // If decreasing
        else high = mid - 1;
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,1,2,6,10,3};
    int size = 7;

    int value = peakvalueofarray(arr);

    cout << "output : " << arr[value];
    return 0;
}