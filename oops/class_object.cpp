#include<iostream>
#include<string>
using namespace std;

class Teacher{
// Can't be accessed
private: 
    double salary;

// Can be accessed
public:
    // Properties // Attributes
    string name;
    string dept;
    string subject;

    // methods // member function
    void changeDept( string newDept ){
        dept = newDept;
    }
    
    // setter function 
    void setSalary( double s ){
        salary = s;
    }
    // getter function
    double getSalary(){
        return salary;
    }
    
};

int main() {
    // Object of class type Teacher
    Teacher t1;

    // Accessing methods of the class
    t1.name = "Shivansh";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    // t1.salary = 25000; ---> Can't be accessed directly as it lies in private section

    // using setter-getter function --> Accessing private method using get function
    // setting value of salary
    t1.setSalary(25000);

    // getting value of salary
    cout << t1.getSalary() << endl;
    
    // Printing name attribute of the class 
    cout << t1.name << endl;

    // accessing the method of the class
    t1.changeDept("Mechanical Department !!");
    cout << t1.dept;

    return 0;
}