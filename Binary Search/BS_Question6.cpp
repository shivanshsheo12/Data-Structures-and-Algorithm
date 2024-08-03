#include<iostream>
#include<vector>

using namespace std;

int findpeak(vector <int> arr){
    int n = arr.size();
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){

        int mid = low + (high - low)/2;
        if(mid == 0){
            if(arr[mid] > arr[mid + 1]) return 0;
            else return 1;
        }
        else if(mid == n - 1){
            if(arr[mid] > arr[mid - 1]) return n - 1;
            else return n - 2;
        }
        else{
            if(arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]) return mid;
            else if(arr[mid] < arr[mid + 1]) low = mid + 1;
            else if(arr[mid] > arr[mid - 1]) high = mid - 1;
        }
    }
}

int main(){
    vector<int> arr;

    int n;
    cout << "Enter array size : ";
    cin >> n;
    int x = 0;
    while(x<n){
        int value;
        cin >> value;
        arr.push_back(value);
        x++;
    }

    int value = findpeak(arr);
    cout << "peak : " <<value;
}