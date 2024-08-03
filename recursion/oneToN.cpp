#include<iostream>

using namespace std;

void function(int n){
    if(n<1) return ;
    else{
        function(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    function(n);
    return 0;
}