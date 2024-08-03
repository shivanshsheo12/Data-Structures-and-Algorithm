#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &a,int target){
    int n = a.size();
    int m = a[0].size();

    int low = 0;
    int high = n*m - 1;

    while(low<=high){
        int mid = low + (high - low)/2;
        int x = mid/m;
        int y = mid%m;
        if(a[x][y] == target){
            return true;
        }
        else if(a[x][y] < target){
            low = mid + 1;
        }
        else if(a[x][y] > target){
            high = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> a = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 20;
    cout << searchMatrix(a,target) << "\n";
    return 0;
}