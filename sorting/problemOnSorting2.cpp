#include<cstring>
#include<iostream>


using namespace std;

int main(){
    char arr[][100] = {"papaya","lime","watermelon","apple","mango","kiwi"};

    for(int i = 0;i<5;i++){
        int min_index = i;
        for(int j = i+1;j<6;j++){
            if((strcmp(arr[min_index],arr[j]))>0){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(arr[min_index],arr[i]);
        }
    }
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}