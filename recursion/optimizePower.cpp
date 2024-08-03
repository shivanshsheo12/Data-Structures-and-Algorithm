#include<iostream>

using namespace std;
int power(int p,int q){
    if(q%2 != 0){
        return p*power(p,q-1);
    }
    if(q == 2) return p*p;
    else return power(p,q/2)*power(p,q/2);
}

int main(){
    int p,q;
    cout<<"Enter the value of p and q : ";
    cin>>p>>q;

    int a = power(p,q);
    cout<<"p^q : "<<a;
    return 0;
}