#include<iostream>
using namespace std;
void findFirstAndLastIndex(string s,char ch,int* first,int* last){
    for(int i = 0;i<s.size();i++){
        if(s[i] == ch){
            *first = i;
            break;
        }
    }
    for(int i = s.size();i>0;i--){
        if(s[i] == ch){
            *last = i;
            break;
        }
    }
}

int main(){
    string s = "aaabacd";
    int first = -1;
    int last = -1;
    char ch = 'a';

    findFirstAndLastIndex(s,ch,&first,&last);
    
    cout<<first<<" "<<last;
    return 0;
}