#include<iostream>
#include<cmath>

using namespace std;
int numberofdigit(int n,int count){
    if(n == 0) return count;
    else return numberofdigit(n/10,count+1);
}
bool palandrome(int n,int nod){
    if(n>= 0 && n<=9) return true;
    else{
        int a = (n/(int)pow(10,nod - 1));
        int b = (n%10);
        if(a == b ){
            int k = pow(10,nod - 1);
            n = n % k;
            n = n / 10;
            return palandrome(n,nod - 2);
        }
        else return false;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int nod = numberofdigit(n,0);

    bool a = palandrome(n,nod);
    if(a == true) cout<<"Palandrome.";
    else cout<<"Not palandrome.";

}