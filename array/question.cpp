#include<iostream>
#include<vector>

using namespace std;

int presuffsum(vector<int> v){
    int i = 0;
    int j = v.size() - 1;

    int sum1 = 0;
    int sum2 = 0;

    int n = -1;  // Initialize to -1 to handle cases where no such position exists.
    
    while(i <= j){
        if(sum1 <= sum2){
            sum1 += v[i];
            i++;
        }
        else{
            sum2 += v[j];
            j--;
        }
        
        if(sum1 == sum2 && i - 1 == j){
            n = i - 1;  // Store the position where prefix and suffix sums are equal
            break;  // Exit the loop as we found the position
        }
    }
    return n;
}

int main(){
    vector<int> v;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int a = presuffsum(v);
    if(a != -1)
        cout << "The prefix sum is equal to suffix sum up to place " << a;
    else
        cout << "No position found where prefix sum is equal to suffix sum";
    
    return 0;
}
