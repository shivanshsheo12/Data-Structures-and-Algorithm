#include<iostream>

using namespace std;
int power(int p, int q){
    if( q == 1 ) return p;
    else return p*power(p,q-1);
}

int main(){
    int p,q;
    cout<<"Enter the value of p and q : ";
    cin>>p;
    cin>>q;

    int a =  power(p,q);

    cout<<"p^q : "<<a;
}
