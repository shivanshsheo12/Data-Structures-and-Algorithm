#include<iostream>
#include<string>
#include<vector>

using namespace std;
string sorting(string str){
    for(int i = 0; i<str.size() - 1; i++){
        for(int j = 0;j < str.size() - 1;j++){
            if(str[j + 1] < str[j]){
                char temp = str[j + 1];
                str[j + 1] = str[j];
                str[j] = temp;
            }
        }
    }
    return str;
}

int main(){
    string s;
    cout << "Enter the value of s: ";
    cin >> s;
    s = sorting(s);

    string t;
    cout << "Enter the value of t: ";
    cin >> t;
    t = sorting(t);

    if(s == t) cout << "Its an anagram.";
    else cout << "Not anagram.";
}