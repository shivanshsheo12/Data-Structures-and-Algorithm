#include<iostream>
#include<string>

using namespace std;
class abc{
public:
    abc(){
        cout<<"Constructor\n";
    }
    ~abc(){
        cout<<"destructor\n";
    }
};
int main(){

    // In this case object is confined within if .
    // class is executed within this if statment.
    // after if statement is executed main function continues and exits.
    if(true){
        abc a;
    }
    cout << "End of main! \n";

    // A static local variable inside a function retains its value and is not destroyed when the function exits. It is only initialized once and persists for the lifetime of the program.
    // When if block is exited, However, the static object b is not destroyed because it has static storage duration and persists for the lifetime of the program.
    if(true){
        static abc b;
    }
    cout << "End of main! \n";
}