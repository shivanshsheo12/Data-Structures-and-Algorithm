#include<iostream>
#include<string>

using namespace std;
class student{
public:
    string name;
    student(){
        cout<<"This is an unparameterized constructor\n";
    }
    student(string name){
        cout<<"This is an parameterized constructor\n";
    }
};

int main(){
    student s1;
    student s2("Shiv");

    // based on constructor objects acted differently
    return 0;
}

