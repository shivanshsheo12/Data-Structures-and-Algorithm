#include<iostream>
#include<string>

using namespace std;

class parent{
public : 
    
    void getinfo(){
        cout << "This is a parent function. \n";
    }
};

class child{
public : 
    void getinfo(){
        cout << "This is a child function. \n";
    }
};

int main(){
    // Function with same name but in different class called accordingly
    // child class override the parent class
    child c1;
    c1.getinfo();

    // parent class override the child class
    parent p1;
    p1.getinfo();

    return 0;
}