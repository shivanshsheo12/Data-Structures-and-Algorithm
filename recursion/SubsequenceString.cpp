#include<iostream>
#include<vector>

using namespace std;
void function(string s,int length,int index,vector<string> &result,string a){
    if(index == length){
        result.push_back(a);
        return;
    }
    function(s,length,index + 1,result,a + s[index]);
    function(s,length,index + 1,result,a);
}

int main(){
    string s = "abc";
    int n = 3;
    vector<string> result;
    function(s,n,0,result,"");

    for(int i = 0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}