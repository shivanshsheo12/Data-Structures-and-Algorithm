#include<iostream>
#include<string>

using namespace std;
class student {
public : 
    string name;
    int rollnum;
};

class teacher{
public :
    string subject;
    double salary;
};
class TA : public student, public teacher{
};
int main(){
    TA t1;
    t1.name = "Shivansh";
    t1.subject = "AI";

    cout << "Name : " << t1.name << endl;
    cout << "Subject : " << t1.subject << endl;
    return 0;
}