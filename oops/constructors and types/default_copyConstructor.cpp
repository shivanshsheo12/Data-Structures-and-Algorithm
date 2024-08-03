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

    Teacher(string name,string dept,string subject,int salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    void getinfo(){
        cout << "Name : " << name << endl;
        cout << "Depatrment : " << dept << endl;
        cout << "subject : " << subject << endl;
        cout << "salary : " << salary << endl;
    }
};
int main(){
    Teacher t1("Shivansh","Mechanical","Ros",25000);
    Teacher t2(t1); // Default copy constructor -invoke

    t2.getinfo(); // printing copied properties of object t1 
    return 0;
}