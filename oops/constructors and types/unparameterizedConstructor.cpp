#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:
    int salary;


public:
    //unparameterized constructor
    Teacher() {
        dept = "Computer science";
        cout<<dept;
    } 
    string name;
    string subject;
    string dept;

};

int main(){
    Teacher t1; // After initializing t1 first constructor method will be executed automatically // constructor call    
}