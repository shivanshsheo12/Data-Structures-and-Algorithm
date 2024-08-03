#include<vector>
#include<iostream>

using namespace std;
bool miniDistPossible(vector <int> &arr, int mid, int kids){
    int reqstudent = 1;
    int lastplaced = arr[0];
    for(int i = 0 ;i < arr.size() ;i++){
        if((arr[i] - lastplaced) >= mid){
            reqstudent++;
            lastplaced = arr[i];
            if(reqstudent == kids) return true;
        }
    }
    return false;
}

int largestMiniDist(vector <int> &arr,int kids){
    int n = arr.size();
    int low = arr[0];
    int high = arr[n - 1] - arr[0];
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(miniDistPossible(arr,mid,kids)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number of spots : ";
    cin >> n;

    vector<int> arr;

    for(int i = 0;i < n;i++){
        int x;
        cout << "Enter spot " << i + 1 << ": ";
        cin >> x;
        arr.push_back(x);
    }

    int kids;
    cout << "Enter the number of kids : ";
    cin >> kids;

    int value = largestMiniDist(arr,kids);
    cout<<"Ans : "<<value;
}