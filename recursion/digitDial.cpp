#include<iostream>
#include<vector>

using namespace std;
void f(string str,int index,int size,string result,vector<string> &li,vector<string> &v){
    if(index == size){
        li.push_back(result);
        return;
    }
    int digit = str[index] - '0';
    if(digit <= 1){
        f(str,index + 1,size,result,li,v);
    }
    for(int j = 0;j<v[digit].size();j++){
        f(str,index + 1,size,result + v[digit][j],li,v);
    }
}

int main(){
    vector<string> v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    string str = "23";
    string result;
    vector<string> li;
    f(str,0,2,result,li,v);

    for(int i = 0;i<li.size();i++){
        cout<<li[i]<<" ";
    }

}