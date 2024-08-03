#include<iostream>
#include<cmath>

using namespace std;
int armstrong(int n, int d){
    if(n == 0) return 0;
    else return (pow(n%10,d) + armstrong(n/10,d));
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int d = 0;
    while(n>0){
        d++;
        n = n/10;
    }
      
    int a = armstrong(n,d);
    if( a == n) cout<<"Armstrong.";
    else cout<<"Not armstrong.";
}