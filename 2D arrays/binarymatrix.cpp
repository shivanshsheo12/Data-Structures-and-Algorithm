#include<iostream>

using namespace std;

int main(){
    int arr[3][4];
    cout<<"Enter the array : ";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int count1 = 0;
    int index = 1;
    for(int j = 0;j<4;j++){
        if(arr[0][j] == 1){
            count1++;
        }
    }
    int max_ones = count1;

    for(int i = 1;i<3;i++){
        int count2 = 0;
        for(int j = 0;j<4;j++){
            if(arr[i][j] == 1){
                count2++;
            }
        }
        if(count2>count1){
            max_ones = count2;
            index = i;
        }
    }
    cout<<"Row with maximum no. of ones is "<<index+1<<" and it has "<<max_ones<<" number of ones.";
}