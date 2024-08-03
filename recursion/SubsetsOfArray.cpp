#include<iostream>
#include<vector>

using namespace std;
void sumOfsets(int *arr,int sum,int index,int size,vector<int> &result){
    if(index == size){
        result.push_back(sum);
        return;
    }
    sumOfsets(arr,sum + arr[index],index+1,size,result);
    sumOfsets(arr,sum,index + 1,size,result);
}

int main(){
    int arr[3] = {2,4};
    vector<int> result;

    sumOfsets(arr,0,0,2,result);
    for(int i = 0;i<result.size();i++){
        cout<<result[i]<< " ";
    }

}