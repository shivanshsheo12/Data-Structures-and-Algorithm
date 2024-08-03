#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;


    v.pop_back();
    v.pop_back();
    cout<<"The size of the vector v is "<<v.size()<<endl;
    cout<<"The capacity of the vector v is "<<v.capacity()<<endl;
    
    return 0;
}
