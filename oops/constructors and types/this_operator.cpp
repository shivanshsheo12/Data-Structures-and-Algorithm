#include<iostream>
#include<string>

using namespace std;
class Teacher{
private:
    int salary;
public:
    string name;
    string dept;
    string subject;
    
    // This will be highly confusing for compiler to detect the attributes of the class and parameter of the constructor method

    // Teacher(int name,int dept,int subject,int salary){
    //     name = name;
    //     dept = dept;
    //     subject = subject;
    //     salary = salary;
    // }

    // Hence we use ( this-> ) 

    // (this) pointer points towards the object
    // object.properties = value // accessing properties of the class
    // (*this).properties = value // dereferencing the properties

    Teacher(string name,string dept,string subject,int salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Now the attributes/properties will be clearly assigned using constructor

    void printAttributes(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Subject : "<<subject<<endl;

    }
};

int main(){
    Teacher t1("Shivansh","Mechanical","ROS",25000);
    t1.printAttributes();
    
    return 0;
}