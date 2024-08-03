#include<iostream>

using namespace std;
void multiple(int n,int k){
    if(k<1) return;
    else{
        multiple(n,k-1);
        cout<<(k*n)<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    int k;
    cout<<"Enter the value of k :";
    cin>>k;

    multiple(n,k);
    return 0;
}