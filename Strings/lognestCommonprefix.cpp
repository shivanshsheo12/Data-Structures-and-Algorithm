#include<iostream>
#include<vector>
#include<string>

using namespace std;
string longcompref(vector<string> &arr){
    int sizeofarr = arr.size();
    int smalleststring = arr[0].size();

    // Smallest String in whole array
    for(int i = 0; i<sizeofarr; i++){
        if(smalleststring > arr[i].size()) smalleststring = arr[i].size();
    }

    string str = ""; // Empty string
    for(int i = 0; i<smalleststring; i++){
        char current = arr[0][i];
        bool flag = true;
        // Moving to ith character of each string in arr and checking if it matches with current character or not
        for(int j = 0;j<sizeofarr;j++){
            if(arr[j][i] != current){
                flag = false;
                break;
            }
        }
        if(flag) str += current;
        else break;
    }
    return str;
}

int main(){
    vector<string> arr = {"ant","anti","antihm"};
    
    string str = longcompref(arr);

    cout << str << endl;
    return 0;
}