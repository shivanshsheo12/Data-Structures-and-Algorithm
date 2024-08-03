#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<string> laxoSorting(vector<string> &arr){
    int n = arr.size();
    for(int i = 0;i<n - 1;i++){
        for(int j = 0;j<n - 1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}
string longcompref(vector<string> &arr){
    vector<string> sortedarr = laxoSorting(arr);
    int size = sortedarr.size();
    string s1 = sortedarr[0];
    string s2 = sortedarr[size - 1];

    string str = "";
    int i = 0;
    while(i<s1.size() and i<s2.size()){
        if(s1[i] == s2[i]) {
            str += s1[i];
            i++;
        }
        else break;
    }

    return str;
}
int main(){
    vector<string> arr = {"ant","anti","antithem"};
    vector<string> arr1 = laxoSorting(arr);
    string str = longcompref(arr);
    cout << str << endl;
    return 0;
}