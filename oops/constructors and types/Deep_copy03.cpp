#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;
    
    // Parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    // Copy constructor (Deep copy)
    Student(const Student &obj) {
        this->name = obj.name;
        cgpaptr = new double; // New memory is beign allocated to the new object(s2) cgpaptr 
        *cgpaptr = *(obj.cgpaptr); // But the value stored at cgpa ptr of previous object(s1) is given to new cgpaptr 
    }

    // Method to display student information
    void getinfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaptr << endl;
    }
};

int main() {
    Student s1("Shivansh", 8.9);
    Student s2(s1);

    s1.getinfo();
    *(s2.cgpaptr) = 9.2;
    s1.getinfo();


    s2.getinfo();
    return 0;
}
