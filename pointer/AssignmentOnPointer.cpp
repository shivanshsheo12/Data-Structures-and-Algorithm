#include<iostream>
using namespace std;

int main(){
    int x = 10; //variable assignment.khushi
    int *ptr = &x; //pointer pointing toward x.


    cout<<sizeof(x);//size occupied by variable x.
    
    cout<<ptr<<" "<<ptr + 1; //incrementing the pointer and it is pointing toward next memory space.

    return 0;
}