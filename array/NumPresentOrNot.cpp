#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i = 0;i<=4;i++){
        cout<<"Enter the value of element "<<i+1<<" ";
        cin>>arr[i];
    }

    int searchNum;
    cout<<"Enter the number you want to search : ";
    cin>>searchNum;

    int index;
    for(int j = 0;j<=4;j++){
        if(searchNum==arr[j]){
            cout<<"The index of the input number is "<<j<<" ";
            break;
        }
        else{
            cout<<-1;
        }
    }


    return 0;
}