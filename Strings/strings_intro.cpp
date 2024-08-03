#include<iostream>
#include<string>

using namespace std;

int main(){
    // Defining a string
    string s1 = "Shivansh";

    string s2("Sheoran");

    cout << s1 << " " << s2 << endl;

    // Inputing string
    // Only getting first word 
    string str3;
    cin >> str3;
    cout << str3 << endl; 

    // To get full line
    string str4;
    getline(cin,str4);
    cout << str4 << endl;
}