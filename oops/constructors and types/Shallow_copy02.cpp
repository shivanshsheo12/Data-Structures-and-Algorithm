#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    double* cgpaptr; // Pointer where cgpa will be stored
    
    // Parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double; // This will allocate a new memory in the heap // # not on stack #
        *cgpaptr = cgpa; // At that particular memory store the value of cgpa
    }

    // Copy constructor (shallow copy)
    Student(const Student &obj) {
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr; // at cgpa pointer (of class) store the memory value of cgpa which is stored in cgpaptr (of orginial object from where you want to copy)
    }

    // Method to display student information
    void getinfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaptr << endl; // derefference the value of cgpaptr
    }
};

int main() {
    Student s1("Shivansh",8.9);
    Student s2(s1); // using shallow copy constructor
    s2.getinfo(); 

    s1.getinfo(); // printing the attributes of s1 class
    *(s2.cgpaptr) = 9.2; // changing the value of cgpa which is pointed by same pointers of object s1 and s2
    s1.getinfo(); // changed value can be observed in class s1 because both the cgpa pointer( of class s1 and s2 ) were pointing toward same cgpa


    // Hence because of shallow constructor the change in values will create effect on both of the pointers 
    return 0;
}
