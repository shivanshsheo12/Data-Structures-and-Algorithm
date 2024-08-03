#include<iostream>
#include<string>

using namespace std;
void function(){
    int x = 0; // Every time this function runs value of x will be assigned as 0
    cout << " x : " << x << endl;
    x++; // x = 1
}
void staticfunction(){
    static int x = 0; // Every time this function runs value of x is going to be static.
                      // Initial statement runs for only ones.
    cout << " x : " << x << endl;
    x++;
}
int main(){

    // Every time x will be given out as 0
    function();
    function();
    function();

    // Every time x will be given out as its acutal value
    staticfunction();
    staticfunction();
    staticfunction();
}