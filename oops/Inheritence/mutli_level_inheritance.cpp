#include<iostream>
#include<string>

using namespace std;
class person{
public:
    string name;
};

class student : public person{
public:
    int roll_no;
};

class GradStudent : public student{
public:
    string researchArea;
};

int main(){
    GradStudent s1;
    s1.name = "Shivansh";
    s1.roll_no = 45;
    s1.researchArea = "Data Science";

    cout << " Name : " << s1.name << endl;
    cout << " roll_no : " << s1.roll_no << endl;
    cout << " researchArea : " << s1.researchArea << endl;
    
    return 0;
}