#include<iostream>
#include<string>

using namespace std;

int main(){
    // reverse function
    string s1 = "hello";
    // reverse(s1.begin(),s1.end());
    // cout<<s1;

    // substr() function
    cout << s1.substr(0,3) << endl; // return -> hel

    // concatinate function
    string s2 = "Shivansh";
    string s3 = "Sheoran";
    cout << s2+s3 << endl;

    // concatinate character array
    // char s4[20] = "Shivansh;
    // char s5[20] = "Sheoran";
    // strcat(s4,s5);

    // cout << s4 << endl;

    // appending string
    string s6 = "abcd";
    char ch = 'e';

    s6.push_back(ch);
    cout << s6 << endl;
    
    // Size function
    // string s7 = "shivanhs";
    // cout << s7.size() << endl;
    // char s8[10] = "shivansh";
    // cout << strlen(s8) << endl;

    // Convert the numeric value to string
    int num = 432;
    string str = to_string(num);
    cout << str + "1" << endl;   
}