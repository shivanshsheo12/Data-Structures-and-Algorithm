#include<iostream>
#include<string>

using namespace std;
class Teacher{
private:
    int salary;
public:

    //Parameterized constructor
    Teacher(string n,string dpt,string sub,int sal){
        name = n;
        dept = dpt;
        subject = sub;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void printAttributes(){
        cout << "Name : " << name << "\nDepartment : " << dept << "\nSubject : "<<subject;
    }
};
int main(){
    Teacher t1("Shivansh", "Mechanincal", "ROS",25000); // Object passed with parameter
    t1.printAttributes(); // Method for printing attributes
    return 0;
}