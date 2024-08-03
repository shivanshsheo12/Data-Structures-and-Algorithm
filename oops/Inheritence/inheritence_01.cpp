#include<iostream>
#include<string>

using namespace std;

// Parent class
// First this class constructor is called 
// After child class, parent class destructor will be called
class person{
private :
    int age;
public :
    string name;
    person(){
        cout<<"This is a parent class constructor\n";
    }
    ~person(){
        cout<<"This is parent class destructor\n";
    }
};

// Child class
// After considering the fact that its a child class first parent class is called
// Firstly child class destuctor will be called
class student : public person{
public : 
    int rollnum;
    student(){
        cout<<"This is child class constructor\n";
    }
    void getinfo(){
        cout << "Name : " << name << endl;
        cout << "Roll no. : " << rollnum << endl;
    }
    ~student(){
        cout<<"This ia child class destructor\n";
    }
};

int main(){
    student s1;
    s1.name = "Shivansh"; // Using attributes of parent class
    s1.rollnum = 15; // Using attributes of child class

    s1.getinfo(); 


}