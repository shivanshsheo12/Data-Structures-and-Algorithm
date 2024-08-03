#include<iostream>

using namespace std;

string remove(string s,int index,int n){
    if(index == n) return "";
    else{
        if(s[index] == 'a') return "" + remove(s,index + 1,n);
        else return s[index] + remove(s,index + 1,n);
    }
}

int main(){
    string s = "avacado";
    string a = remove(s,0,7);
    cout<<a;
}