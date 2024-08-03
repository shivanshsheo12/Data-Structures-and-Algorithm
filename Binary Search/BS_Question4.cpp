#include<iostream>
#include<vector>

using namespace std;
int findminInSortedRotated(std::vector<int> &input){
    if(input.size() == 1) return input[0];
    int low = 0,high = input.size() - 1;

    //Case of Sorted inputay
    if(input[low] < input[high]) return low;

    //For the case of roated Sorted -->
    while(low <= high){
        int mid = low + (high - low)/2;
        if(input[mid] < input[mid - 1] && mid >0 ) return mid;
        else if(input[mid]>input[mid + 1] && mid< input.size() - 1) return mid + 1;
        else if(input[mid]>=input[low]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }  
}
}
int main(){
    int n;
    cout<<"Enter the size of the inputay : ";
    cin>>n;

    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int index = findminInSortedRotated(v);
    cout<<"Minimum value : "<<v[index];
}