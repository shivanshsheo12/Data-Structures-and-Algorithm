#include<iostream>
#include<vector>
#include<string>

using namespace std;
string countSort(string str){
    vector <int> freqarr(26,0);
    for(int i = 0;i<str.size();i++){
        int index = str[i] - 'a';
        freqarr[index]++;
    }
    int j = 0;
    for(int i = 0;i<26;i++){
        while(freqarr[i]>0){
            str[j++] = i + 'a';
            freqarr[i]--;
        }
    }
    return str;
}

int main(){
    string str;
    cin >> str;

    string str2 = countSort(str);

    cout << "Sorted String : " << str2;
}