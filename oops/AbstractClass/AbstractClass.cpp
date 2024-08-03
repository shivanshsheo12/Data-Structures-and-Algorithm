#include<iostream>
#include<string>

using namespace std;

// It only provides a blueprint that its child class should have a draw function dynamically
class shape{
    virtual void draw() = 0; // Virtual Function: A pure virtual function is a function that is declared by assigning = 0 to it. It does not have a definition in the abstract class and must be overridden by derived (child) classes
};

class circle : public shape{
public:
    void draw(){
        cout << "Drawing circle !! \n";
    }
};
class square : public shape {
public:
    void draw() override {
        // Implementation for drawing a square
        cout << "Drawing a square" << endl;
    }
};


int main(){
    circle c1;
    c1.draw();

    square s1;
    s1.draw();
    return 0;
}