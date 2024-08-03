#include<iostream>
#include<string>
#include<vector>

using namespace std;
bool isomorphic(string s,string t){
    if(s.size() == t.size()){
        vector <int> sarr(128,-1);
        vector <int> tarr(128,-1);
        for(int i = 0; i<s.size(); i++){
            int sindex = s[i];
            int tindex = t[i];
            s[sindex] = i;
            t[tindex] = i;
            if(s[sindex] != t[tindex]) return false;
        }
        return true;
    }
    else return false;


}

int main(){
    string s;
    cout << "Enter the string s: ";
    cin >> s;

    string t;
    cout << "Enter the string t: ";
    cin >> t;

    if(isomorphic(s,t)) cout << "They are isomorphic.";
    else cout << "Not isomorphic"; 
}