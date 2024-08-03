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
        cgpaptr = new double; // Deep copy of pointer
        *cgpaptr = *(obj.cgpaptr);
    }

    // Method to display student information
    void getinfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaptr << endl;
    }

    ~Student(){
        cout<<"I have deleted all the memory";
        delete cgpaptr; // Deleting the memory of heap
    }
};

int main() {
    Student s1("Shivansh", 8.9);
    Student s2(s1);

    s2.getinfo();
    return 0;
}
