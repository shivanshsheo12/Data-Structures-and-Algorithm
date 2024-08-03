#include<iostream>
#include<string>

using namespace std;

class person{
private :
    int age;
public :
    string name;
    int clas;
    person(string name,int age,int clas){
        this->name = name;
        this->age = age;
        this->clas = clas;
    }
    ~person(){
        cout<<"This is parent class destructor\n";
    }
};

class student : public person{
public : 
    int rollnum;

    // Using attributes of parent class into child class using parameterized consturctor
    student(string name,int clas,int age,int rollnum) : person(name,age,clas){
        this->rollnum = rollnum;
    }
    void getinfo(){
        cout << "Name : " << name << endl;
        cout << "Roll no. : " << rollnum << endl;
        cout << "Class : " << clas << endl;
    }
    ~student(){
        cout<<"This ia child class destructor\n";
    }
};

int main(){
    student s1("Shivansh",12,16,24);
    s1.getinfo();
}