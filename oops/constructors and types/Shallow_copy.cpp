#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    double cgpa;

    Student(string name,double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    // This constructor will allocate its memory in stack : 
    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    void getinfo(){
        cout << "Name : " << name << endl;
        cout << "CGPA : " << cgpa << endl;
    }
};
int main(){
    Student s1("Shivansh", 8.9);

    // shallow copy constructor using stack memory allocation ---> No issue arouse 
    Student s2(s1);
    s2.getinfo();


    return 0;
}