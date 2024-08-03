#include<iostream>
#include<vector>

using namespace std;
bool chocoCanDist(vector <int> &arr,int mid,int s){
    int n = arr.size();
    int currentStudent = 1;
    int currentSum = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > mid) return false;
        else if(currentSum + arr[i] > mid){
            currentStudent++;
            currentSum = arr[i];
            if(currentStudent > s) return false;
        }
        else{
            currentSum += arr[i];
        }
    }
    return true;
}

int minimumchocolate(vector<int> &arr,int s){
    int n = arr.size();
    int low = arr[0];
    int high = 0;
    for(int i = 0 ; i < n ; i++ ){
        high += arr[i];
    }
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(chocoCanDist(arr,mid,s)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
}

int main(){
    int n;
    cout << "Enter number of Boxes : ";
    cin >> n;

    vector<int> arr;

    for(int i = 0;i<n;i++){
        int x;
        cout << "Enter number of chocolate in box " << i + 1 << " ";
        cin >> x;
        arr.push_back(x);
    }

    int s;
    cout << "Enter number of students : ";
    cin >> s;

    int value = minimumchocolate(arr,s);
    cout<<"Ans : " << value;
}