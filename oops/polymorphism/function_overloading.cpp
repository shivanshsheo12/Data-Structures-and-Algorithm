#include<iostream>
#include<string>

using namespace std;
class student{
public:
    string name;
    int age;
    student(string name,int age){
        this->name = name;
        this->age = age;
    }
    void print(int age){
        cout << "Age : " << age << endl;
    }
    void print(string name){
        cout << "Name : " << name << endl;
    }
};

int main(){
    student s1("Shivansh",45);
    s1.print(19);
    s1.print("Shivansh");

    // function with same name acted differently based on their work


    // based on constructor objects acted differently
    return 0;
}

