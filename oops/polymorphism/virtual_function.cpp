#include<iostream>
#include<string>

using namespace std;

class parent{
public : 
    
    void getinfo(){
        cout << "This is a parent function. \n";
    }

    // Virtual function -> memory allocated dynamically.
    virtual void sayhello(){
        cout << "Hello ! from child class . \n";
    }
};

class child : public parent{
public : 
    void getinfo(){
        cout << "This is a child function. \n";
    }
    void sayhello(){
        cout << "Helo ! from parent class. \n";
    }
};

int main(){
    // Function with same name but in different class called accordingly
    // child class override the parent class
    child c1;
    c1.getinfo();
    c1.sayhello();

    // parent class override the child class
    parent p1;
    p1.getinfo();
    p1.sayhello();

    return 0;
}