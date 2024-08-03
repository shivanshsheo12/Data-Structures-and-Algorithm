#include<iostream>

using namespace std;
int sqroot(int n){
    int low = 0;
    int high = n;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid * mid <= n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    cout<<sqroot(n);
}