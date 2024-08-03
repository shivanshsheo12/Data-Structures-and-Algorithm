#include<iostream>
#include<vector>
#include<string>

using namespace std;
string sorting(string str){
    for(int i = 0;i<str.size();i++){
        for(int j = 0;j<str.size() - 1;j++){
            if(str[j+1]<str[j]){
                char c = str[j + 1];
                str[j + 1] = str[j];
                str[j] = c;
            }
        }
    }
    return str;
}

int main(){
    string str;
    cin >> str;

   string str2 = sorting(str);

    cout << "Sorted String : " << str2;
}