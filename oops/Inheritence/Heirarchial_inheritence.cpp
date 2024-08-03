#include<iostream>
#include<string>

using namespace std;
class person{
public:
    string name;
    int age;
};

class student : public person{
public:
    int roll_no;
};

class GradStudent : public person{
public:
    string researchArea;
};

int main(){
    GradStudent s1;
    s1.name = "Shivansh";
    s1.age = 24;
    s1.researchArea = "Data Science";

    cout << " Name : " << s1.name << endl;
    cout << " age : " << s1.age << endl;
    cout << " researchArea : " << s1.researchArea << endl;

    student s2;
    s2.name = "Kumar abhishek";
    s2.age = 12;
    s2.roll_no = 45;

    cout << " Name : " << s2.name << endl;
    cout << " roll_no : " << s2.roll_no << endl;
    cout << " age : " << s2.age<< endl;
    
    return 0;
}